/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"


void setup_scr_vsPage(lv_ui *ui){

	//Write codes vsPage
	ui->vsPage = lv_obj_create(NULL);

	//Write style state: LV_STATE_DEFAULT for style_vspage_main_main_default
	static lv_style_t style_vspage_main_main_default;
	if (style_vspage_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_vspage_main_main_default);
	else
		lv_style_init(&style_vspage_main_main_default);
	lv_style_set_bg_color(&style_vspage_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_opa(&style_vspage_main_main_default, 0);
	lv_obj_add_style(ui->vsPage, &style_vspage_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes vsPage_btn_5
	ui->vsPage_btn_5 = lv_btn_create(ui->vsPage);
	lv_obj_set_pos(ui->vsPage_btn_5, 13, 12);
	lv_obj_set_size(ui->vsPage_btn_5, 50, 30);

	//Write style state: LV_STATE_DEFAULT for style_vspage_btn_5_main_main_default
	static lv_style_t style_vspage_btn_5_main_main_default;
	if (style_vspage_btn_5_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_vspage_btn_5_main_main_default);
	else
		lv_style_init(&style_vspage_btn_5_main_main_default);
	lv_style_set_radius(&style_vspage_btn_5_main_main_default, 5);
	lv_style_set_bg_color(&style_vspage_btn_5_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_vspage_btn_5_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_vspage_btn_5_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_vspage_btn_5_main_main_default, 177);
	lv_style_set_shadow_color(&style_vspage_btn_5_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_vspage_btn_5_main_main_default, 178);
	lv_style_set_border_color(&style_vspage_btn_5_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_border_width(&style_vspage_btn_5_main_main_default, 0);
	lv_style_set_border_opa(&style_vspage_btn_5_main_main_default, 176);
	lv_obj_add_style(ui->vsPage_btn_5, &style_vspage_btn_5_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	ui->vsPage_btn_5_label = lv_label_create(ui->vsPage_btn_5);
	lv_label_set_text(ui->vsPage_btn_5_label, "");
	lv_obj_set_style_text_color(ui->vsPage_btn_5_label, lv_color_make(0x00, 0x00, 0x00), LV_STATE_DEFAULT);
	lv_obj_set_style_pad_all(ui->vsPage_btn_5, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->vsPage_btn_5_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes vsPage_imgbtn_4
	ui->vsPage_imgbtn_4 = lv_imgbtn_create(ui->vsPage);
	lv_obj_set_pos(ui->vsPage_imgbtn_4, 22, 18);
	lv_obj_set_size(ui->vsPage_imgbtn_4, 30, 20);

	//Write style state: LV_STATE_DEFAULT for style_vspage_imgbtn_4_main_main_default
	static lv_style_t style_vspage_imgbtn_4_main_main_default;
	if (style_vspage_imgbtn_4_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_vspage_imgbtn_4_main_main_default);
	else
		lv_style_init(&style_vspage_imgbtn_4_main_main_default);
	lv_style_set_text_color(&style_vspage_imgbtn_4_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor(&style_vspage_imgbtn_4_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_vspage_imgbtn_4_main_main_default, 0);
	lv_style_set_img_opa(&style_vspage_imgbtn_4_main_main_default, 255);
	lv_obj_add_style(ui->vsPage_imgbtn_4, &style_vspage_imgbtn_4_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_PRESSED for style_vspage_imgbtn_4_main_main_pressed
	static lv_style_t style_vspage_imgbtn_4_main_main_pressed;
	if (style_vspage_imgbtn_4_main_main_pressed.prop_cnt > 1)
		lv_style_reset(&style_vspage_imgbtn_4_main_main_pressed);
	else
		lv_style_init(&style_vspage_imgbtn_4_main_main_pressed);
	lv_style_set_text_color(&style_vspage_imgbtn_4_main_main_pressed, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_img_recolor(&style_vspage_imgbtn_4_main_main_pressed, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_vspage_imgbtn_4_main_main_pressed, 0);
	lv_obj_add_style(ui->vsPage_imgbtn_4, &style_vspage_imgbtn_4_main_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style state: LV_STATE_CHECKED for style_vspage_imgbtn_4_main_main_checked
	static lv_style_t style_vspage_imgbtn_4_main_main_checked;
	if (style_vspage_imgbtn_4_main_main_checked.prop_cnt > 1)
		lv_style_reset(&style_vspage_imgbtn_4_main_main_checked);
	else
		lv_style_init(&style_vspage_imgbtn_4_main_main_checked);
	lv_style_set_text_color(&style_vspage_imgbtn_4_main_main_checked, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_img_recolor(&style_vspage_imgbtn_4_main_main_checked, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_vspage_imgbtn_4_main_main_checked, 0);
	lv_obj_add_style(ui->vsPage_imgbtn_4, &style_vspage_imgbtn_4_main_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_imgbtn_set_src(ui->vsPage_imgbtn_4, LV_IMGBTN_STATE_RELEASED, NULL, &_back_alpha_30x20, NULL);
	lv_obj_add_flag(ui->vsPage_imgbtn_4, LV_OBJ_FLAG_CHECKABLE);

	//Write codes vsPage_label_1
	ui->vsPage_label_1 = lv_label_create(ui->vsPage);
	lv_obj_set_pos(ui->vsPage_label_1, 136, 124);
	lv_obj_set_size(ui->vsPage_label_1, 208, 70);
	lv_label_set_text(ui->vsPage_label_1, "VS");
	lv_label_set_long_mode(ui->vsPage_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->vsPage_label_1, LV_TEXT_ALIGN_CENTER, 0);

	//Write style state: LV_STATE_DEFAULT for style_vspage_label_1_main_main_default
	static lv_style_t style_vspage_label_1_main_main_default;
	if (style_vspage_label_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_vspage_label_1_main_main_default);
	else
		lv_style_init(&style_vspage_label_1_main_main_default);
	lv_style_set_radius(&style_vspage_label_1_main_main_default, 0);
	lv_style_set_bg_color(&style_vspage_label_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_vspage_label_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_vspage_label_1_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_vspage_label_1_main_main_default, 0);
	lv_style_set_text_color(&style_vspage_label_1_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_vspage_label_1_main_main_default, &lv_font_STXINGKA_71);
	lv_style_set_text_letter_space(&style_vspage_label_1_main_main_default, 2);
	lv_style_set_pad_left(&style_vspage_label_1_main_main_default, 0);
	lv_style_set_pad_right(&style_vspage_label_1_main_main_default, 0);
	lv_style_set_pad_top(&style_vspage_label_1_main_main_default, 0);
	lv_style_set_pad_bottom(&style_vspage_label_1_main_main_default, 0);
	lv_obj_add_style(ui->vsPage_label_1, &style_vspage_label_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes vsPage_img_2
	ui->vsPage_img_2 = lv_img_create(ui->vsPage);
	lv_obj_set_pos(ui->vsPage_img_2, 333, 107);
	lv_obj_set_size(ui->vsPage_img_2, 100, 100);

	//Write style state: LV_STATE_DEFAULT for style_vspage_img_2_main_main_default
	static lv_style_t style_vspage_img_2_main_main_default;
	if (style_vspage_img_2_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_vspage_img_2_main_main_default);
	else
		lv_style_init(&style_vspage_img_2_main_main_default);
	lv_style_set_img_recolor(&style_vspage_img_2_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_vspage_img_2_main_main_default, 0);
	lv_style_set_img_opa(&style_vspage_img_2_main_main_default, 255);
	lv_obj_add_style(ui->vsPage_img_2, &style_vspage_img_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->vsPage_img_2, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->vsPage_img_2,&_wenHao_100x100);
	lv_img_set_pivot(ui->vsPage_img_2, 0,0);
	lv_img_set_angle(ui->vsPage_img_2, 0);

	//Write codes vsPage_img_3
	ui->vsPage_img_3 = lv_img_create(ui->vsPage);
	lv_obj_set_pos(ui->vsPage_img_3, 38, 107);
	lv_obj_set_size(ui->vsPage_img_3, 100, 100);

	//Write style state: LV_STATE_DEFAULT for style_vspage_img_3_main_main_default
	static lv_style_t style_vspage_img_3_main_main_default;
	if (style_vspage_img_3_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_vspage_img_3_main_main_default);
	else
		lv_style_init(&style_vspage_img_3_main_main_default);
	lv_style_set_img_recolor(&style_vspage_img_3_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_vspage_img_3_main_main_default, 0);
	lv_style_set_img_opa(&style_vspage_img_3_main_main_default, 255);
	lv_obj_add_style(ui->vsPage_img_3, &style_vspage_img_3_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->vsPage_img_3, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->vsPage_img_3,&_wenHao_100x100);
	lv_img_set_pivot(ui->vsPage_img_3, 0,0);
	lv_img_set_angle(ui->vsPage_img_3, 0);

	//Write codes vsPage_label_2
	ui->vsPage_label_2 = lv_label_create(ui->vsPage);
	lv_obj_set_pos(ui->vsPage_label_2, 144, 249);
	lv_obj_set_size(ui->vsPage_label_2, 192, 32);
	lv_label_set_text(ui->vsPage_label_2, "");
	lv_label_set_long_mode(ui->vsPage_label_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->vsPage_label_2, LV_TEXT_ALIGN_CENTER, 0);

	//Write style state: LV_STATE_DEFAULT for style_vspage_label_2_main_main_default
	static lv_style_t style_vspage_label_2_main_main_default;
	if (style_vspage_label_2_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_vspage_label_2_main_main_default);
	else
		lv_style_init(&style_vspage_label_2_main_main_default);
	lv_style_set_radius(&style_vspage_label_2_main_main_default, 0);
	lv_style_set_bg_color(&style_vspage_label_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_vspage_label_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_vspage_label_2_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_vspage_label_2_main_main_default, 0);
	lv_style_set_text_color(&style_vspage_label_2_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_vspage_label_2_main_main_default, &lv_font_STXINGKA_24);
	lv_style_set_text_letter_space(&style_vspage_label_2_main_main_default, 2);
	lv_style_set_pad_left(&style_vspage_label_2_main_main_default, 0);
	lv_style_set_pad_right(&style_vspage_label_2_main_main_default, 0);
	lv_style_set_pad_top(&style_vspage_label_2_main_main_default, 0);
	lv_style_set_pad_bottom(&style_vspage_label_2_main_main_default, 0);
	lv_obj_add_style(ui->vsPage_label_2, &style_vspage_label_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes vsPage_btn_6
	ui->vsPage_btn_6 = lv_btn_create(ui->vsPage);
	lv_obj_set_pos(ui->vsPage_btn_6, 190, 32);
	lv_obj_set_size(ui->vsPage_btn_6, 100, 30);

	//Write style state: LV_STATE_DEFAULT for style_vspage_btn_6_main_main_default
	static lv_style_t style_vspage_btn_6_main_main_default;
	if (style_vspage_btn_6_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_vspage_btn_6_main_main_default);
	else
		lv_style_init(&style_vspage_btn_6_main_main_default);
	lv_style_set_radius(&style_vspage_btn_6_main_main_default, 5);
	lv_style_set_bg_color(&style_vspage_btn_6_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_vspage_btn_6_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_vspage_btn_6_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_vspage_btn_6_main_main_default, 255);
	lv_style_set_shadow_color(&style_vspage_btn_6_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_vspage_btn_6_main_main_default, 255);
	lv_style_set_border_color(&style_vspage_btn_6_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_border_width(&style_vspage_btn_6_main_main_default, 0);
	lv_style_set_border_opa(&style_vspage_btn_6_main_main_default, 255);
	lv_obj_add_style(ui->vsPage_btn_6, &style_vspage_btn_6_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	ui->vsPage_btn_6_label = lv_label_create(ui->vsPage_btn_6);
	lv_label_set_text(ui->vsPage_btn_6_label, "restart");
	lv_obj_add_flag(ui->vsPage_btn_6, LV_OBJ_FLAG_HIDDEN);
	lv_obj_set_style_text_color(ui->vsPage_btn_6_label, lv_color_make(0x00, 0x00, 0x00), LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->vsPage_btn_6_label, &lv_font_HarmonyOS_Sans_SC_Bold_16, LV_STATE_DEFAULT);
	lv_obj_set_style_pad_all(ui->vsPage_btn_6, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->vsPage_btn_6_label, LV_ALIGN_CENTER, 0, 0);

	//Init events for screen
	events_init_vsPage(ui);
}