/*
 * @: Copyright (c) 2021 LingBlopdreame Co., Ltd. All rights reserved
 * @Author: LingBlopdreame
 * @Date: 2022-04-26 12:40:19
 * @LastEditors: LingBlopdreame
 * @LastEditTime: 2022-06-01 17:22:35
 * @FilePath: \FDC2214_ESP32\src\LCD_Task.cpp
 * @Description: LCD GUI 显示任务
 */
#include "LCD_Task.h"

#include <Arduino.h>
#include <TFT_eSPI.h>

#include <lvgl.h>

#include "lvgl_ui/gui_guider.h"
#include "lvgl_ui/events_init.h"


/*Change to your screen resolution*/
static const uint16_t screenWidth  = 480;
static const uint16_t screenHeight = 320;

static lv_disp_draw_buf_t draw_buf;
static lv_color_t buf[screenWidth * 10];

TFT_eSPI tft = TFT_eSPI(screenWidth, screenHeight); /* TFT instance */

bool vs_flag = false;
uint8_t counter;
lv_ui guider_ui;

extern xQueueHandle page_queue;
extern xQueueHandle status_queue;
extern xQueueHandle result_queue;

/* Display flushing */
void disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p) {
    uint32_t w = ( area->x2 - area->x1 + 1 );
    uint32_t h = ( area->y2 - area->y1 + 1 );

    tft.startWrite();
    tft.setAddrWindow(area->x1, area->y1, w, h);
    tft.pushColors((uint16_t*)&color_p->full, w*h, true);
    tft.endWrite();

    lv_disp_flush_ready(disp);
}

/*Read the touchpad*/
void touchpad_read(lv_indev_drv_t *indev_driver, lv_indev_data_t *data) {
    uint16_t touchX, touchY;

    bool touched = tft.getTouch(&touchX, &touchY, 600);

    if (!touched) {
        data->state = LV_INDEV_STATE_REL;
    } else {
        data->state = LV_INDEV_STATE_PR;
        data->point.x = touchX;
        data->point.y = touchY;       
    }
}

void LCD_Task(void *pvParameters) {
    lv_obj_t *old_page = new lv_obj_t;
    lv_obj_t *page = new lv_obj_t;
    uint8_t page_number;
    uint8_t status = 0;
    uint8_t result = 0;

    lv_init();

    tft.begin();          /* TFT init */
    tft.setRotation(1); /* Landscape orientation, flipped */

    /*Set the touchscreen calibration data,
     the actual data for your display can be acquired using
     the Generic -> Touch_calibrate example from the TFT_eSPI library*/
    uint16_t calData[5] = {275, 3620, 264, 3532, 1};
    tft.setTouch(calData);

    lv_disp_draw_buf_init(&draw_buf, buf, NULL, screenWidth*10);

    /*Initialize the display*/
    static lv_disp_drv_t disp_drv;
    lv_disp_drv_init(&disp_drv);
    /*Change the following line to your display resolution*/
    disp_drv.hor_res = screenWidth;
    disp_drv.ver_res = screenHeight;
    disp_drv.flush_cb = disp_flush;
    disp_drv.draw_buf = &draw_buf;
    lv_disp_drv_register(&disp_drv);

    /*Initialize the (dummy) input device driver*/
    static lv_indev_drv_t touchPad_device;
    lv_indev_drv_init(&touchPad_device);
    touchPad_device.type = LV_INDEV_TYPE_POINTER;
    touchPad_device.read_cb = touchpad_read;
    lv_indev_drv_register(&touchPad_device);

    setup_ui(&guider_ui);
    events_init(&guider_ui);

    old_page = guider_ui.homePage;
    page = guider_ui.homePage;
    page_number = HOMEPAGE;
    xQueueSend(page_queue, &page_number, 10);
    lv_label_set_text(guider_ui.homePage_status_label, "Init device.......");
    bool status_receive = xQueueReceive(status_queue, &status, 10);

    for (;;) {
        page = lv_scr_act();
        if (page != old_page) {
            if (page == guider_ui.guessPage) {
                page_number = GUESSPAGE;
            } else if (page == guider_ui.homePage) {
                page_number = HOMEPAGE;
            } else if (page == guider_ui.numberPage) {
                page_number = NUMBERPAGE;
            } else if (page == guider_ui.vsPage) {
                page_number = VSPAGE;
            }
            xQueueSend(page_queue, &page_number, 10);
            old_page = page;
        }

        if (page == guider_ui.homePage) {
            if (status_receive == pdTRUE) {
                if (status == 0) {
                    lv_label_set_text(guider_ui.homePage_status_label, "All device init successfully!");    
                } else {
                    lv_label_set_text(guider_ui.homePage_status_label, "Some error in device init. Please check.");    
                }
                // vQueueDelete(status_queue);
            }
            status_receive = xQueueReceive(status_queue, &status, 10);
        } else if (page == guider_ui.guessPage) {
            status_receive = xQueueReceive(result_queue, &result, 10);
            if (status_receive == pdTRUE) {
                if (result == 0) {
                    lv_img_set_src(guider_ui.guessPage_img_1, &_wenHao_100x100);
                } else if (result == 6) {
                    lv_img_set_src(guider_ui.guessPage_img_1, &_shiTou_100x100);
                } else if (result == 7) {
                    lv_img_set_src(guider_ui.guessPage_img_1, &_jianDao_100x100);
                } else if (result == 8) {
                    lv_img_set_src(guider_ui.guessPage_img_1, &_bu_100x100);
                }
            }
        } else if (page == guider_ui.numberPage) {
            status_receive = xQueueReceive(result_queue, &result, 10);
            if (status_receive == pdTRUE) {
                if (result == 0) {
                    lv_label_set_text(guider_ui.numberPage_label_1, "?");
                } else if (result == 1) {
                    lv_label_set_text(guider_ui.numberPage_label_1, "1");
                } else if (result == 2) {
                    lv_label_set_text(guider_ui.numberPage_label_1, "2");
                } else if (result == 3) {
                    lv_label_set_text(guider_ui.numberPage_label_1, "3");
                } else if (result == 4) {
                    lv_label_set_text(guider_ui.numberPage_label_1, "4");
                } else if (result == 5) {
                    lv_label_set_text(guider_ui.numberPage_label_1, "5");
                }
            }
        } else if (page == guider_ui.vsPage && vs_flag == false) {
            status_receive = xQueueReceive(result_queue, &result, 10);
            if (status_receive == pdTRUE && result != 0) {
                uint8_t random = esp_random() / 4294967295.0 * 3.0 + 1;
                delay(20);
                if (random == 1) {
                    lv_img_set_src(guider_ui.vsPage_img_3, &_shiTou_100x100);
                } else if (random == 2) {
                    lv_img_set_src(guider_ui.vsPage_img_3, &_jianDao_100x100);
                } else if (random == 3) {
                    lv_img_set_src(guider_ui.vsPage_img_3, &_bu_100x100);
                }
                if (result == 0) {
                    lv_img_set_src(guider_ui.vsPage_img_2, &_wenHao_100x100);
                } else if (result == 6) {
                    lv_img_set_src(guider_ui.vsPage_img_2, &_shiTou_100x100);
                } else if (result == 7) {
                    lv_img_set_src(guider_ui.vsPage_img_2, &_jianDao_100x100);
                } else if (result == 8) {
                    lv_img_set_src(guider_ui.vsPage_img_2, &_bu_100x100);
                }
                if (random == 1 && result == 6) {
                    lv_label_set_text(guider_ui.vsPage_label_2, "平局");
                } else if (random == 2 && result == 7) {
                    lv_label_set_text(guider_ui.vsPage_label_2, "平局");
                } else if (random == 3 && result == 8) {
                    lv_label_set_text(guider_ui.vsPage_label_2, "平局");
                } else if (random == 1 && result == 7) {
                    lv_label_set_text(guider_ui.vsPage_label_2, "很遗憾, 你输了");
                } else if (random == 1 && result == 8) {
                    lv_label_set_text(guider_ui.vsPage_label_2, "恭喜你赢了");
                } else if (random == 2 && result == 8) {
                    lv_label_set_text(guider_ui.vsPage_label_2, "很遗憾, 你输了");
                } else if (random == 2 && result == 6) {
                    lv_label_set_text(guider_ui.vsPage_label_2, "恭喜你赢了");
                } else if (random == 3 && result == 6) {
                    lv_label_set_text(guider_ui.vsPage_label_2, "很遗憾, 你输了");
                } else if (random == 3 && result == 7) {
                    lv_label_set_text(guider_ui.vsPage_label_2, "恭喜你赢了");
                }
                
		        lv_obj_clear_flag(guider_ui.vsPage_btn_6, LV_OBJ_FLAG_HIDDEN);
                vs_flag = true;
            } else {
                lv_img_set_src(guider_ui.vsPage_img_3, &_wenHao_100x100);
            }
        }
        
        lv_task_handler(); 
        vTaskDelay(5);
    }
}
