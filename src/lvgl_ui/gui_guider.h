/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"
#include "guider_fonts/guider_fonts.h"

typedef struct
{
	lv_obj_t *homePage;
	lv_obj_t *homePage_label_1;
	lv_obj_t *homePage_btn_1;
	lv_obj_t *homePage_btn_1_label;
	lv_obj_t *homePage_btn_2;
	lv_obj_t *homePage_btn_2_label;
	lv_obj_t *homePage_btn_3;
	lv_obj_t *homePage_btn_3_label;
	lv_obj_t *homePage_btn_4;
	lv_obj_t *homePage_btn_4_label;
	lv_obj_t *homePage_img_1;
	lv_obj_t *homePage_btn_5;
	lv_obj_t *homePage_btn_5_label;
	lv_obj_t *homePage_label_2;
	lv_obj_t *homePage_status_label;
	lv_obj_t *guessPage;
	lv_obj_t *guessPage_img_1;
	lv_obj_t *guessPage_btn_1;
	lv_obj_t *guessPage_btn_1_label;
	lv_obj_t *guessPage_imgbtn_1;
	lv_obj_t *guessPage_imgbtn_1_label;
	lv_obj_t *numberPage;
	lv_obj_t *numberPage_btn_2;
	lv_obj_t *numberPage_btn_2_label;
	lv_obj_t *numberPage_imgbtn_2;
	lv_obj_t *numberPage_imgbtn_2_label;
	lv_obj_t *numberPage_label_1;
	lv_obj_t *trainPage;
	lv_obj_t *trainPage_btn_3;
	lv_obj_t *trainPage_btn_3_label;
	lv_obj_t *trainPage_imgbtn_3;
	lv_obj_t *trainPage_imgbtn_3_label;
	lv_obj_t *trainPage_btn_4;
	lv_obj_t *trainPage_btn_4_label;
	lv_obj_t *trainPage_label_1;
	lv_obj_t *vsPage;
	lv_obj_t *vsPage_btn_5;
	lv_obj_t *vsPage_btn_5_label;
	lv_obj_t *vsPage_imgbtn_4;
	lv_obj_t *vsPage_imgbtn_4_label;
	lv_obj_t *vsPage_label_1;
	lv_obj_t *vsPage_img_2;
	lv_obj_t *vsPage_img_3;
	lv_obj_t *vsPage_label_2;
	lv_obj_t *vsPage_btn_6;
	lv_obj_t *vsPage_btn_6_label;
}lv_ui;

void setup_ui(lv_ui *ui);
extern lv_ui guider_ui;
void setup_scr_homePage(lv_ui *ui);
void setup_scr_guessPage(lv_ui *ui);
void setup_scr_numberPage(lv_ui *ui);
void setup_scr_trainPage(lv_ui *ui);
void setup_scr_vsPage(lv_ui *ui);
LV_IMG_DECLARE(_wenHao_100x100);
LV_IMG_DECLARE(_back_alpha_30x20);
LV_IMG_DECLARE(_Elaina_150x178);
LV_IMG_DECLARE(_jianDao_100x100);
LV_IMG_DECLARE(_bu_100x100);
LV_IMG_DECLARE(_shiTou_100x100);

#ifdef __cplusplus
}
#endif
#endif