/*
 * @: Copyright (c) 2021 LingBlopdreame Co., Ltd. All rights reserved
 * @Author: LingBlopdreame
 * @Date: 2022-04-25 11:11:48
 * @LastEditors: LingBlopdreame
 * @LastEditTime: 2022-06-01 17:21:51
 * @FilePath: \FDC2214_ESP32\src\main.cpp
 * @Description: 主程序，创建两个任务，并分别送入两个核并行运行运行
 *                  + task 1: LCD GUI 显示 任务
 *                  + task 2: 传感器读取与数据处理 任务
 */
#include <Arduino.h>

#include <soc/rtc_cntl_reg.h>
#include <Wire.h>

#include "LCD_Task.h"
#include "detect_Task.h"

xQueueHandle page_queue;
xQueueHandle status_queue;
xQueueHandle result_queue;

void setup(void) {
    WRITE_PERI_REG(RTC_CNTL_BROWN_OUT_REG, 0);//关闭低电压检测,避免无限重启
    Serial.begin(9600); /* prepare for possible serial debug */

    Wire.begin();

    page_queue = xQueueCreate(10, sizeof(uint8_t));
    status_queue = xQueueCreate(10, sizeof(uint8_t));
    result_queue = xQueueCreate(10, sizeof(uint8_t));

    xTaskCreatePinnedToCore(LCD_Task, "LCD_Task", 10000, NULL, 0, NULL,  1);
    xTaskCreatePinnedToCore(detect_Task, "detect_Task", 10000, NULL, 0, NULL,  0);
  
    vTaskDelete(NULL);
}

void loop(void) {
    
}
