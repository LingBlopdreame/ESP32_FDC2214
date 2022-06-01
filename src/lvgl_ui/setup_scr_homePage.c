/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"


void setup_scr_homePage(lv_ui *ui){

	//Write codes homePage
	ui->homePage = lv_obj_create(NULL);

	//Write style state: LV_STATE_DEFAULT for style_homepage_main_main_default
	static lv_style_t style_homepage_main_main_default;
	if (style_homepage_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_homepage_main_main_default);
	else
		lv_style_init(&style_homepage_main_main_default);
	lv_style_set_bg_color(&style_homepage_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_opa(&style_homepage_main_main_default, 0);
	lv_obj_add_style(ui->homePage, &style_homepage_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes homePage_label_1
	ui->homePage_label_1 = lv_label_create(ui->homePage);
	lv_obj_set_pos(ui->homePage_label_1, 30, 48);
	lv_obj_set_size(ui->homePage_label_1, 259, 42);
	lv_label_set_text(ui->homePage_label_1, "WELCOME!");
	lv_label_set_long_mode(ui->homePage_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->homePage_label_1, LV_TEXT_ALIGN_CENTER, 0);

	//Write style state: LV_STATE_DEFAULT for style_homepage_label_1_main_main_default
	static lv_style_t style_homepage_label_1_main_main_default;
	if (style_homepage_label_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_homepage_label_1_main_main_default);
	else
		lv_style_init(&style_homepage_label_1_main_main_default);
	lv_style_set_radius(&style_homepage_label_1_main_main_default, 0);
	lv_style_set_bg_color(&style_homepage_label_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_homepage_label_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_homepage_label_1_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_homepage_label_1_main_main_default, 0);
	lv_style_set_text_color(&style_homepage_label_1_main_main_default, lv_color_make(0x21, 0x21, 0x21));
	lv_style_set_text_font(&style_homepage_label_1_main_main_default, &lv_font_HarmonyOS_Sans_SC_Bold_28);
	lv_style_set_text_letter_space(&style_homepage_label_1_main_main_default, 1);
	lv_style_set_pad_left(&style_homepage_label_1_main_main_default, 0);
	lv_style_set_pad_right(&style_homepage_label_1_main_main_default, 0);
	lv_style_set_pad_top(&style_homepage_label_1_main_main_default, 0);
	lv_style_set_pad_bottom(&style_homepage_label_1_main_main_default, 0);
	lv_obj_add_style(ui->homePage_label_1, &style_homepage_label_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes homePage_btn_1
	ui->homePage_btn_1 = lv_btn_create(ui->homePage);
	lv_obj_set_pos(ui->homePage_btn_1, 40, 111);
	lv_obj_set_size(ui->homePage_btn_1, 100, 50);

	//Write style state: LV_STATE_DEFAULT for style_homepage_btn_1_main_main_default
	static lv_style_t style_homepage_btn_1_main_main_default;
	if (style_homepage_btn_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_homepage_btn_1_main_main_default);
	else
		lv_style_init(&style_homepage_btn_1_main_main_default);
	lv_style_set_radius(&style_homepage_btn_1_main_main_default, 5);
	lv_style_set_bg_color(&style_homepage_btn_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_homepage_btn_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_homepage_btn_1_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_homepage_btn_1_main_main_default, 255);
	lv_style_set_shadow_color(&style_homepage_btn_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_homepage_btn_1_main_main_default, 255);
	lv_style_set_border_color(&style_homepage_btn_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_border_width(&style_homepage_btn_1_main_main_default, 0);
	lv_style_set_border_opa(&style_homepage_btn_1_main_main_default, 255);
	lv_obj_add_style(ui->homePage_btn_1, &style_homepage_btn_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	ui->homePage_btn_1_label = lv_label_create(ui->homePage_btn_1);
	lv_label_set_text(ui->homePage_btn_1_label, "猜拳识别");
	lv_obj_set_style_text_color(ui->homePage_btn_1_label, lv_color_make(0x00, 0x00, 0x00), LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->homePage_btn_1_label, &lv_font_HarmonyOS_Sans_SC_Bold_16, LV_STATE_DEFAULT);
	lv_obj_set_style_pad_all(ui->homePage_btn_1, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->homePage_btn_1_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes homePage_btn_2
	ui->homePage_btn_2 = lv_btn_create(ui->homePage);
	lv_obj_set_pos(ui->homePage_btn_2, 195, 111);
	lv_obj_set_size(ui->homePage_btn_2, 100, 50);

	//Write style state: LV_STATE_DEFAULT for style_homepage_btn_2_main_main_default
	static lv_style_t style_homepage_btn_2_main_main_default;
	if (style_homepage_btn_2_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_homepage_btn_2_main_main_default);
	else
		lv_style_init(&style_homepage_btn_2_main_main_default);
	lv_style_set_radius(&style_homepage_btn_2_main_main_default, 5);
	lv_style_set_bg_color(&style_homepage_btn_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_homepage_btn_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_homepage_btn_2_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_homepage_btn_2_main_main_default, 255);
	lv_style_set_shadow_color(&style_homepage_btn_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_homepage_btn_2_main_main_default, 255);
	lv_style_set_border_color(&style_homepage_btn_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_border_width(&style_homepage_btn_2_main_main_default, 0);
	lv_style_set_border_opa(&style_homepage_btn_2_main_main_default, 255);
	lv_obj_add_style(ui->homePage_btn_2, &style_homepage_btn_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	ui->homePage_btn_2_label = lv_label_create(ui->homePage_btn_2);
	lv_label_set_text(ui->homePage_btn_2_label, "数字识别");
	lv_obj_set_style_text_color(ui->homePage_btn_2_label, lv_color_make(0x00, 0x00, 0x00), LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->homePage_btn_2_label, &lv_font_HarmonyOS_Sans_SC_Bold_16, LV_STATE_DEFAULT);
	lv_obj_set_style_pad_all(ui->homePage_btn_2, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->homePage_btn_2_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes homePage_btn_3
	ui->homePage_btn_3 = lv_btn_create(ui->homePage);
	lv_obj_set_pos(ui->homePage_btn_3, 40, 194);
	lv_obj_set_size(ui->homePage_btn_3, 100, 50);

	//Write style state: LV_STATE_DEFAULT for style_homepage_btn_3_main_main_default
	static lv_style_t style_homepage_btn_3_main_main_default;
	if (style_homepage_btn_3_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_homepage_btn_3_main_main_default);
	else
		lv_style_init(&style_homepage_btn_3_main_main_default);
	lv_style_set_radius(&style_homepage_btn_3_main_main_default, 5);
	lv_style_set_bg_color(&style_homepage_btn_3_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_homepage_btn_3_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_homepage_btn_3_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_homepage_btn_3_main_main_default, 255);
	lv_style_set_shadow_color(&style_homepage_btn_3_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_homepage_btn_3_main_main_default, 255);
	lv_style_set_border_color(&style_homepage_btn_3_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_border_width(&style_homepage_btn_3_main_main_default, 0);
	lv_style_set_border_opa(&style_homepage_btn_3_main_main_default, 255);
	lv_obj_add_style(ui->homePage_btn_3, &style_homepage_btn_3_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	ui->homePage_btn_3_label = lv_label_create(ui->homePage_btn_3);
	lv_label_set_text(ui->homePage_btn_3_label, "训练模式");
	lv_obj_set_style_text_color(ui->homePage_btn_3_label, lv_color_make(0x00, 0x00, 0x00), LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->homePage_btn_3_label, &lv_font_HarmonyOS_Sans_SC_Bold_16, LV_STATE_DEFAULT);
	lv_obj_set_style_pad_all(ui->homePage_btn_3, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->homePage_btn_3_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes homePage_btn_4
	ui->homePage_btn_4 = lv_btn_create(ui->homePage);
	lv_obj_set_pos(ui->homePage_btn_4, 195, 194);
	lv_obj_set_size(ui->homePage_btn_4, 100, 50);

	//Write style state: LV_STATE_DEFAULT for style_homepage_btn_4_main_main_default
	static lv_style_t style_homepage_btn_4_main_main_default;
	if (style_homepage_btn_4_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_homepage_btn_4_main_main_default);
	else
		lv_style_init(&style_homepage_btn_4_main_main_default);
	lv_style_set_radius(&style_homepage_btn_4_main_main_default, 5);
	lv_style_set_bg_color(&style_homepage_btn_4_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_homepage_btn_4_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_homepage_btn_4_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_homepage_btn_4_main_main_default, 255);
	lv_style_set_shadow_color(&style_homepage_btn_4_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_homepage_btn_4_main_main_default, 255);
	lv_style_set_border_color(&style_homepage_btn_4_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_border_width(&style_homepage_btn_4_main_main_default, 0);
	lv_style_set_border_opa(&style_homepage_btn_4_main_main_default, 255);
	lv_obj_add_style(ui->homePage_btn_4, &style_homepage_btn_4_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	ui->homePage_btn_4_label = lv_label_create(ui->homePage_btn_4);
	lv_label_set_text(ui->homePage_btn_4_label, "人机对战");
	lv_obj_set_style_text_color(ui->homePage_btn_4_label, lv_color_make(0x00, 0x00, 0x00), LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->homePage_btn_4_label, &lv_font_HarmonyOS_Sans_SC_Bold_16, LV_STATE_DEFAULT);
	lv_obj_set_style_pad_all(ui->homePage_btn_4, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->homePage_btn_4_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes homePage_img_1
	ui->homePage_img_1 = lv_img_create(ui->homePage);
	lv_obj_set_pos(ui->homePage_img_1, 311, 82);
	lv_obj_set_size(ui->homePage_img_1, 150, 178);

	//Write style state: LV_STATE_DEFAULT for style_homepage_img_1_main_main_default
	static lv_style_t style_homepage_img_1_main_main_default;
	if (style_homepage_img_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_homepage_img_1_main_main_default);
	else
		lv_style_init(&style_homepage_img_1_main_main_default);
	lv_style_set_img_recolor(&style_homepage_img_1_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_homepage_img_1_main_main_default, 0);
	lv_style_set_img_opa(&style_homepage_img_1_main_main_default, 255);
	lv_obj_add_style(ui->homePage_img_1, &style_homepage_img_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->homePage_img_1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->homePage_img_1,&_Elaina_150x178);
	lv_img_set_pivot(ui->homePage_img_1, 0,0);
	lv_img_set_angle(ui->homePage_img_1, 0);

	//Write codes homePage_btn_5
	ui->homePage_btn_5 = lv_btn_create(ui->homePage);
	lv_obj_set_pos(ui->homePage_btn_5, 404, 16);
	lv_obj_set_size(ui->homePage_btn_5, 62, 21);

	//Write style state: LV_STATE_DEFAULT for style_homepage_btn_5_main_main_default
	static lv_style_t style_homepage_btn_5_main_main_default;
	if (style_homepage_btn_5_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_homepage_btn_5_main_main_default);
	else
		lv_style_init(&style_homepage_btn_5_main_main_default);
	lv_style_set_radius(&style_homepage_btn_5_main_main_default, 5);
	lv_style_set_bg_color(&style_homepage_btn_5_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_homepage_btn_5_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_homepage_btn_5_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_homepage_btn_5_main_main_default, 255);
	lv_style_set_shadow_color(&style_homepage_btn_5_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_shadow_opa(&style_homepage_btn_5_main_main_default, 255);
	lv_style_set_border_color(&style_homepage_btn_5_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_border_width(&style_homepage_btn_5_main_main_default, 0);
	lv_style_set_border_opa(&style_homepage_btn_5_main_main_default, 255);
	lv_obj_add_style(ui->homePage_btn_5, &style_homepage_btn_5_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	ui->homePage_btn_5_label = lv_label_create(ui->homePage_btn_5);
	lv_label_set_text(ui->homePage_btn_5_label, "About");
	lv_obj_set_style_text_color(ui->homePage_btn_5_label, lv_color_make(0x00, 0x00, 0x00), LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->homePage_btn_5_label, &lv_font_HarmonyOS_Sans_SC_Bold_13, LV_STATE_DEFAULT);
	lv_obj_set_style_pad_all(ui->homePage_btn_5, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->homePage_btn_5_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes homePage_label_2
	ui->homePage_label_2 = lv_label_create(ui->homePage);
	lv_obj_set_pos(ui->homePage_label_2, 8, 302);
	lv_obj_set_size(ui->homePage_label_2, 430, 15);
	lv_label_set_text(ui->homePage_label_2, "Copyright (c) 2021 LingBlopdreame Co. Ltd. All rights reserved.");
	lv_label_set_long_mode(ui->homePage_label_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->homePage_label_2, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_homepage_label_2_main_main_default
	static lv_style_t style_homepage_label_2_main_main_default;
	if (style_homepage_label_2_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_homepage_label_2_main_main_default);
	else
		lv_style_init(&style_homepage_label_2_main_main_default);
	lv_style_set_radius(&style_homepage_label_2_main_main_default, 0);
	lv_style_set_bg_color(&style_homepage_label_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_homepage_label_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_homepage_label_2_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_homepage_label_2_main_main_default, 0);
	lv_style_set_text_color(&style_homepage_label_2_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_homepage_label_2_main_main_default, &lv_font_HarmonyOS_Sans_SC_Bold_13);
	lv_style_set_text_letter_space(&style_homepage_label_2_main_main_default, 0);
	lv_style_set_pad_left(&style_homepage_label_2_main_main_default, 0);
	lv_style_set_pad_right(&style_homepage_label_2_main_main_default, 0);
	lv_style_set_pad_top(&style_homepage_label_2_main_main_default, 0);
	lv_style_set_pad_bottom(&style_homepage_label_2_main_main_default, 0);
	lv_obj_add_style(ui->homePage_label_2, &style_homepage_label_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes homePage_status_label
	ui->homePage_status_label = lv_label_create(ui->homePage);
	lv_obj_set_pos(ui->homePage_status_label, 6, 6);
	lv_obj_set_size(ui->homePage_status_label, 375, 16);
	lv_label_set_text(ui->homePage_status_label, "");
	lv_label_set_long_mode(ui->homePage_status_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->homePage_status_label, LV_TEXT_ALIGN_LEFT, 0);

	//Write style state: LV_STATE_DEFAULT for style_homepage_status_label_main_main_default
	static lv_style_t style_homepage_status_label_main_main_default;
	if (style_homepage_status_label_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_homepage_status_label_main_main_default);
	else
		lv_style_init(&style_homepage_status_label_main_main_default);
	lv_style_set_radius(&style_homepage_status_label_main_main_default, 0);
	lv_style_set_bg_color(&style_homepage_status_label_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_homepage_status_label_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_homepage_status_label_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_homepage_status_label_main_main_default, 0);
	lv_style_set_text_color(&style_homepage_status_label_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_letter_space(&style_homepage_status_label_main_main_default, 0);
	lv_style_set_pad_left(&style_homepage_status_label_main_main_default, 0);
	lv_style_set_pad_right(&style_homepage_status_label_main_main_default, 0);
	lv_style_set_pad_top(&style_homepage_status_label_main_main_default, 0);
	lv_style_set_pad_bottom(&style_homepage_status_label_main_main_default, 0);
	lv_obj_add_style(ui->homePage_status_label, &style_homepage_status_label_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Init events for screen
	events_init_homePage(ui);
}
