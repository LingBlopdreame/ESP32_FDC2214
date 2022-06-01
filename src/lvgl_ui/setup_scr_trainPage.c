/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"



void setup_scr_trainPage(lv_ui *ui){

	//Write codes trainPage
	ui->trainPage = lv_obj_create(NULL);

	//Write style state: LV_STATE_DEFAULT for style_trainpage_main_main_default
	static lv_style_t style_trainpage_main_main_default;
	if (style_trainpage_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_trainpage_main_main_default);
	else
		lv_style_init(&style_trainpage_main_main_default);
	lv_style_set_bg_color(&style_trainpage_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_opa(&style_trainpage_main_main_default, 0);
	lv_obj_add_style(ui->trainPage, &style_trainpage_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes trainPage_btn_3
	ui->trainPage_btn_3 = lv_btn_create(ui->trainPage);
	lv_obj_set_pos(ui->trainPage_btn_3, 13, 12);
	lv_obj_set_size(ui->trainPage_btn_3, 50, 30);

	//Write style state: LV_STATE_DEFAULT for style_trainpage_btn_3_main_main_default
	static lv_style_t style_trainpage_btn_3_main_main_default;
	if (style_trainpage_btn_3_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_trainpage_btn_3_main_main_default);
	else
		lv_style_init(&style_trainpage_btn_3_main_main_default);
	lv_style_set_radius(&style_trainpage_btn_3_main_main_default, 5);
	lv_style_set_bg_color(&style_trainpage_btn_3_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_trainpage_btn_3_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_trainpage_btn_3_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_trainpage_btn_3_main_main_default, 177);
	lv_style_set_shadow_color(&style_trainpage_btn_3_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_trainpage_btn_3_main_main_default, 178);
	lv_style_set_border_color(&style_trainpage_btn_3_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_border_width(&style_trainpage_btn_3_main_main_default, 0);
	lv_style_set_border_opa(&style_trainpage_btn_3_main_main_default, 176);
	lv_obj_add_style(ui->trainPage_btn_3, &style_trainpage_btn_3_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	ui->trainPage_btn_3_label = lv_label_create(ui->trainPage_btn_3);
	lv_label_set_text(ui->trainPage_btn_3_label, "");
	lv_obj_set_style_text_color(ui->trainPage_btn_3_label, lv_color_make(0x00, 0x00, 0x00), LV_STATE_DEFAULT);
	lv_obj_set_style_pad_all(ui->trainPage_btn_3, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->trainPage_btn_3_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes trainPage_imgbtn_3
	ui->trainPage_imgbtn_3 = lv_imgbtn_create(ui->trainPage);
	lv_obj_set_pos(ui->trainPage_imgbtn_3, 22, 18);
	lv_obj_set_size(ui->trainPage_imgbtn_3, 30, 20);

	//Write style state: LV_STATE_DEFAULT for style_trainpage_imgbtn_3_main_main_default
	static lv_style_t style_trainpage_imgbtn_3_main_main_default;
	if (style_trainpage_imgbtn_3_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_trainpage_imgbtn_3_main_main_default);
	else
		lv_style_init(&style_trainpage_imgbtn_3_main_main_default);
	lv_style_set_text_color(&style_trainpage_imgbtn_3_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor(&style_trainpage_imgbtn_3_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_trainpage_imgbtn_3_main_main_default, 0);
	lv_style_set_img_opa(&style_trainpage_imgbtn_3_main_main_default, 255);
	lv_obj_add_style(ui->trainPage_imgbtn_3, &style_trainpage_imgbtn_3_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_PRESSED for style_trainpage_imgbtn_3_main_main_pressed
	static lv_style_t style_trainpage_imgbtn_3_main_main_pressed;
	if (style_trainpage_imgbtn_3_main_main_pressed.prop_cnt > 1)
		lv_style_reset(&style_trainpage_imgbtn_3_main_main_pressed);
	else
		lv_style_init(&style_trainpage_imgbtn_3_main_main_pressed);
	lv_style_set_text_color(&style_trainpage_imgbtn_3_main_main_pressed, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_img_recolor(&style_trainpage_imgbtn_3_main_main_pressed, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_trainpage_imgbtn_3_main_main_pressed, 0);
	lv_obj_add_style(ui->trainPage_imgbtn_3, &style_trainpage_imgbtn_3_main_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style state: LV_STATE_CHECKED for style_trainpage_imgbtn_3_main_main_checked
	static lv_style_t style_trainpage_imgbtn_3_main_main_checked;
	if (style_trainpage_imgbtn_3_main_main_checked.prop_cnt > 1)
		lv_style_reset(&style_trainpage_imgbtn_3_main_main_checked);
	else
		lv_style_init(&style_trainpage_imgbtn_3_main_main_checked);
	lv_style_set_text_color(&style_trainpage_imgbtn_3_main_main_checked, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_img_recolor(&style_trainpage_imgbtn_3_main_main_checked, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_trainpage_imgbtn_3_main_main_checked, 0);
	lv_obj_add_style(ui->trainPage_imgbtn_3, &style_trainpage_imgbtn_3_main_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_imgbtn_set_src(ui->trainPage_imgbtn_3, LV_IMGBTN_STATE_RELEASED, NULL, &_back_alpha_30x20, NULL);
	lv_obj_add_flag(ui->trainPage_imgbtn_3, LV_OBJ_FLAG_CHECKABLE);

	//Write codes trainPage_btn_4
	ui->trainPage_btn_4 = lv_btn_create(ui->trainPage);
	lv_obj_set_pos(ui->trainPage_btn_4, 191, 195);
	lv_obj_set_size(ui->trainPage_btn_4, 100, 33);

	//Write style state: LV_STATE_DEFAULT for style_trainpage_btn_4_main_main_default
	static lv_style_t style_trainpage_btn_4_main_main_default;
	if (style_trainpage_btn_4_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_trainpage_btn_4_main_main_default);
	else
		lv_style_init(&style_trainpage_btn_4_main_main_default);
	lv_style_set_radius(&style_trainpage_btn_4_main_main_default, 5);
	lv_style_set_bg_color(&style_trainpage_btn_4_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_trainpage_btn_4_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_trainpage_btn_4_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_trainpage_btn_4_main_main_default, 255);
	lv_style_set_shadow_color(&style_trainpage_btn_4_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_trainpage_btn_4_main_main_default, 255);
	lv_style_set_border_color(&style_trainpage_btn_4_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_border_width(&style_trainpage_btn_4_main_main_default, 0);
	lv_style_set_border_opa(&style_trainpage_btn_4_main_main_default, 255);
	lv_obj_add_style(ui->trainPage_btn_4, &style_trainpage_btn_4_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	ui->trainPage_btn_4_label = lv_label_create(ui->trainPage_btn_4);
	lv_label_set_text(ui->trainPage_btn_4_label, "Next");
	lv_obj_set_style_text_color(ui->trainPage_btn_4_label, lv_color_make(0x00, 0x00, 0x00), LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->trainPage_btn_4_label, &lv_font_HarmonyOS_Sans_SC_Bold_16, LV_STATE_DEFAULT);
	lv_obj_set_style_pad_all(ui->trainPage_btn_4, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->trainPage_btn_4_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes trainPage_label_1
	ui->trainPage_label_1 = lv_label_create(ui->trainPage);
	lv_obj_set_pos(ui->trainPage_label_1, 132, 117);
	lv_obj_set_size(ui->trainPage_label_1, 216, 32);
	lv_label_set_text(ui->trainPage_label_1, "训练剪刀...");
	lv_label_set_long_mode(ui->trainPage_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->trainPage_label_1, LV_TEXT_ALIGN_CENTER, 0);

	//Write style state: LV_STATE_DEFAULT for style_trainpage_label_1_main_main_default
	static lv_style_t style_trainpage_label_1_main_main_default;
	if (style_trainpage_label_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_trainpage_label_1_main_main_default);
	else
		lv_style_init(&style_trainpage_label_1_main_main_default);
	lv_style_set_radius(&style_trainpage_label_1_main_main_default, 0);
	lv_style_set_bg_color(&style_trainpage_label_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_trainpage_label_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_trainpage_label_1_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_trainpage_label_1_main_main_default, 0);
	lv_style_set_text_color(&style_trainpage_label_1_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_trainpage_label_1_main_main_default, &lv_font_STXINGKA_28);
	lv_style_set_text_letter_space(&style_trainpage_label_1_main_main_default, 2);
	lv_style_set_pad_left(&style_trainpage_label_1_main_main_default, 0);
	lv_style_set_pad_right(&style_trainpage_label_1_main_main_default, 0);
	lv_style_set_pad_top(&style_trainpage_label_1_main_main_default, 0);
	lv_style_set_pad_bottom(&style_trainpage_label_1_main_main_default, 0);
	lv_obj_add_style(ui->trainPage_label_1, &style_trainpage_label_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Init events for screen
	events_init_trainPage(ui);
}