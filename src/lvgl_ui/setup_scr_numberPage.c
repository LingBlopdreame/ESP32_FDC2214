/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"


void setup_scr_numberPage(lv_ui *ui){
	//Write codes numberPage
	ui->numberPage = lv_obj_create(NULL);

	//Write style state: LV_STATE_DEFAULT for style_numberpage_main_main_default
	static lv_style_t style_numberpage_main_main_default;
	if (style_numberpage_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_numberpage_main_main_default);
	else
		lv_style_init(&style_numberpage_main_main_default);
	lv_style_set_bg_color(&style_numberpage_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_opa(&style_numberpage_main_main_default, 0);
	lv_obj_add_style(ui->numberPage, &style_numberpage_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes numberPage_btn_2
	ui->numberPage_btn_2 = lv_btn_create(ui->numberPage);
	lv_obj_set_pos(ui->numberPage_btn_2, 13, 12);
	lv_obj_set_size(ui->numberPage_btn_2, 50, 30);

	//Write style state: LV_STATE_DEFAULT for style_numberpage_btn_2_main_main_default
	static lv_style_t style_numberpage_btn_2_main_main_default;
	if (style_numberpage_btn_2_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_numberpage_btn_2_main_main_default);
	else
		lv_style_init(&style_numberpage_btn_2_main_main_default);
	lv_style_set_radius(&style_numberpage_btn_2_main_main_default, 5);
	lv_style_set_bg_color(&style_numberpage_btn_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_numberpage_btn_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_numberpage_btn_2_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_numberpage_btn_2_main_main_default, 177);
	lv_style_set_shadow_color(&style_numberpage_btn_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_numberpage_btn_2_main_main_default, 178);
	lv_style_set_border_color(&style_numberpage_btn_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_border_width(&style_numberpage_btn_2_main_main_default, 0);
	lv_style_set_border_opa(&style_numberpage_btn_2_main_main_default, 176);
	lv_obj_add_style(ui->numberPage_btn_2, &style_numberpage_btn_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	ui->numberPage_btn_2_label = lv_label_create(ui->numberPage_btn_2);
	lv_label_set_text(ui->numberPage_btn_2_label, "");
	lv_obj_set_style_text_color(ui->numberPage_btn_2_label, lv_color_make(0x00, 0x00, 0x00), LV_STATE_DEFAULT);
	lv_obj_set_style_pad_all(ui->numberPage_btn_2, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->numberPage_btn_2_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes numberPage_imgbtn_2
	ui->numberPage_imgbtn_2 = lv_imgbtn_create(ui->numberPage);
	lv_obj_set_pos(ui->numberPage_imgbtn_2, 22, 18);
	lv_obj_set_size(ui->numberPage_imgbtn_2, 30, 20);

	//Write style state: LV_STATE_DEFAULT for style_numberpage_imgbtn_2_main_main_default
	static lv_style_t style_numberpage_imgbtn_2_main_main_default;
	if (style_numberpage_imgbtn_2_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_numberpage_imgbtn_2_main_main_default);
	else
		lv_style_init(&style_numberpage_imgbtn_2_main_main_default);
	lv_style_set_text_color(&style_numberpage_imgbtn_2_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor(&style_numberpage_imgbtn_2_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_numberpage_imgbtn_2_main_main_default, 0);
	lv_style_set_img_opa(&style_numberpage_imgbtn_2_main_main_default, 255);
	lv_obj_add_style(ui->numberPage_imgbtn_2, &style_numberpage_imgbtn_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_PRESSED for style_numberpage_imgbtn_2_main_main_pressed
	static lv_style_t style_numberpage_imgbtn_2_main_main_pressed;
	if (style_numberpage_imgbtn_2_main_main_pressed.prop_cnt > 1)
		lv_style_reset(&style_numberpage_imgbtn_2_main_main_pressed);
	else
		lv_style_init(&style_numberpage_imgbtn_2_main_main_pressed);
	lv_style_set_text_color(&style_numberpage_imgbtn_2_main_main_pressed, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_img_recolor(&style_numberpage_imgbtn_2_main_main_pressed, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_numberpage_imgbtn_2_main_main_pressed, 0);
	lv_obj_add_style(ui->numberPage_imgbtn_2, &style_numberpage_imgbtn_2_main_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style state: LV_STATE_CHECKED for style_numberpage_imgbtn_2_main_main_checked
	static lv_style_t style_numberpage_imgbtn_2_main_main_checked;
	if (style_numberpage_imgbtn_2_main_main_checked.prop_cnt > 1)
		lv_style_reset(&style_numberpage_imgbtn_2_main_main_checked);
	else
		lv_style_init(&style_numberpage_imgbtn_2_main_main_checked);
	lv_style_set_text_color(&style_numberpage_imgbtn_2_main_main_checked, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_img_recolor(&style_numberpage_imgbtn_2_main_main_checked, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_numberpage_imgbtn_2_main_main_checked, 0);
	lv_obj_add_style(ui->numberPage_imgbtn_2, &style_numberpage_imgbtn_2_main_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_imgbtn_set_src(ui->numberPage_imgbtn_2, LV_IMGBTN_STATE_RELEASED, NULL, &_back_alpha_30x20, NULL);
	lv_obj_add_flag(ui->numberPage_imgbtn_2, LV_OBJ_FLAG_CHECKABLE);

	//Write codes numberPage_label_1
	ui->numberPage_label_1 = lv_label_create(ui->numberPage);
	lv_obj_set_pos(ui->numberPage_label_1, 190, 145);
	lv_obj_set_size(ui->numberPage_label_1, 100, 32);
	lv_label_set_text(ui->numberPage_label_1, "?");
	lv_label_set_long_mode(ui->numberPage_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->numberPage_label_1, LV_TEXT_ALIGN_CENTER, 0);

	//Write style state: LV_STATE_DEFAULT for style_numberpage_label_1_main_main_default
	static lv_style_t style_numberpage_label_1_main_main_default;
	if (style_numberpage_label_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_numberpage_label_1_main_main_default);
	else
		lv_style_init(&style_numberpage_label_1_main_main_default);
	lv_style_set_radius(&style_numberpage_label_1_main_main_default, 0);
	lv_style_set_bg_color(&style_numberpage_label_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_numberpage_label_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_numberpage_label_1_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_numberpage_label_1_main_main_default, 0);
	lv_style_set_text_color(&style_numberpage_label_1_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_numberpage_label_1_main_main_default, &lv_font_HarmonyOS_Sans_SC_Bold_28);
	lv_style_set_text_letter_space(&style_numberpage_label_1_main_main_default, 2);
	lv_style_set_pad_left(&style_numberpage_label_1_main_main_default, 0);
	lv_style_set_pad_right(&style_numberpage_label_1_main_main_default, 0);
	lv_style_set_pad_top(&style_numberpage_label_1_main_main_default, 0);
	lv_style_set_pad_bottom(&style_numberpage_label_1_main_main_default, 0);
	lv_obj_add_style(ui->numberPage_label_1, &style_numberpage_label_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Init events for screen
	events_init_numberPage(ui);
}
