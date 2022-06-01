/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"


void setup_scr_guessPage(lv_ui *ui){

	//Write codes guessPage
	ui->guessPage = lv_obj_create(NULL);

	//Write style state: LV_STATE_DEFAULT for style_guesspage_main_main_default
	static lv_style_t style_guesspage_main_main_default;
	if (style_guesspage_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_guesspage_main_main_default);
	else
		lv_style_init(&style_guesspage_main_main_default);
	lv_style_set_bg_color(&style_guesspage_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_opa(&style_guesspage_main_main_default, 0);
	lv_obj_add_style(ui->guessPage, &style_guesspage_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes guessPage_img_1
	ui->guessPage_img_1 = lv_img_create(ui->guessPage);
	lv_obj_set_pos(ui->guessPage_img_1, 190, 109);
	lv_obj_set_size(ui->guessPage_img_1, 100, 100);

	//Write style state: LV_STATE_DEFAULT for style_guesspage_img_1_main_main_default
	static lv_style_t style_guesspage_img_1_main_main_default;
	if (style_guesspage_img_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_guesspage_img_1_main_main_default);
	else
		lv_style_init(&style_guesspage_img_1_main_main_default);
	lv_style_set_img_recolor(&style_guesspage_img_1_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_guesspage_img_1_main_main_default, 0);
	lv_style_set_img_opa(&style_guesspage_img_1_main_main_default, 255);
	lv_obj_add_style(ui->guessPage_img_1, &style_guesspage_img_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->guessPage_img_1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->guessPage_img_1,&_wenHao_100x100);
	lv_img_set_pivot(ui->guessPage_img_1, 0,0);
	lv_img_set_angle(ui->guessPage_img_1, 0);

	//Write codes guessPage_btn_1
	ui->guessPage_btn_1 = lv_btn_create(ui->guessPage);
	lv_obj_set_pos(ui->guessPage_btn_1, 13, 12);
	lv_obj_set_size(ui->guessPage_btn_1, 50, 30);

	//Write style state: LV_STATE_DEFAULT for style_guesspage_btn_1_main_main_default
	static lv_style_t style_guesspage_btn_1_main_main_default;
	if (style_guesspage_btn_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_guesspage_btn_1_main_main_default);
	else
		lv_style_init(&style_guesspage_btn_1_main_main_default);
	lv_style_set_radius(&style_guesspage_btn_1_main_main_default, 5);
	lv_style_set_bg_color(&style_guesspage_btn_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_guesspage_btn_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_guesspage_btn_1_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_guesspage_btn_1_main_main_default, 177);
	lv_style_set_shadow_color(&style_guesspage_btn_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_guesspage_btn_1_main_main_default, 178);
	lv_style_set_border_color(&style_guesspage_btn_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_border_width(&style_guesspage_btn_1_main_main_default, 0);
	lv_style_set_border_opa(&style_guesspage_btn_1_main_main_default, 176);
	lv_obj_add_style(ui->guessPage_btn_1, &style_guesspage_btn_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	ui->guessPage_btn_1_label = lv_label_create(ui->guessPage_btn_1);
	lv_label_set_text(ui->guessPage_btn_1_label, "");
	lv_obj_set_style_text_color(ui->guessPage_btn_1_label, lv_color_make(0x00, 0x00, 0x00), LV_STATE_DEFAULT);
	lv_obj_set_style_pad_all(ui->guessPage_btn_1, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->guessPage_btn_1_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes guessPage_imgbtn_1
	ui->guessPage_imgbtn_1 = lv_imgbtn_create(ui->guessPage);
	lv_obj_set_pos(ui->guessPage_imgbtn_1, 22, 18);
	lv_obj_set_size(ui->guessPage_imgbtn_1, 30, 20);

	//Write style state: LV_STATE_DEFAULT for style_guesspage_imgbtn_1_main_main_default
	static lv_style_t style_guesspage_imgbtn_1_main_main_default;
	if (style_guesspage_imgbtn_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_guesspage_imgbtn_1_main_main_default);
	else
		lv_style_init(&style_guesspage_imgbtn_1_main_main_default);
	lv_style_set_text_color(&style_guesspage_imgbtn_1_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor(&style_guesspage_imgbtn_1_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_guesspage_imgbtn_1_main_main_default, 0);
	lv_style_set_img_opa(&style_guesspage_imgbtn_1_main_main_default, 255);
	lv_obj_add_style(ui->guessPage_imgbtn_1, &style_guesspage_imgbtn_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_PRESSED for style_guesspage_imgbtn_1_main_main_pressed
	static lv_style_t style_guesspage_imgbtn_1_main_main_pressed;
	if (style_guesspage_imgbtn_1_main_main_pressed.prop_cnt > 1)
		lv_style_reset(&style_guesspage_imgbtn_1_main_main_pressed);
	else
		lv_style_init(&style_guesspage_imgbtn_1_main_main_pressed);
	lv_style_set_text_color(&style_guesspage_imgbtn_1_main_main_pressed, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_img_recolor(&style_guesspage_imgbtn_1_main_main_pressed, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_guesspage_imgbtn_1_main_main_pressed, 0);
	lv_obj_add_style(ui->guessPage_imgbtn_1, &style_guesspage_imgbtn_1_main_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style state: LV_STATE_CHECKED for style_guesspage_imgbtn_1_main_main_checked
	static lv_style_t style_guesspage_imgbtn_1_main_main_checked;
	if (style_guesspage_imgbtn_1_main_main_checked.prop_cnt > 1)
		lv_style_reset(&style_guesspage_imgbtn_1_main_main_checked);
	else
		lv_style_init(&style_guesspage_imgbtn_1_main_main_checked);
	lv_style_set_text_color(&style_guesspage_imgbtn_1_main_main_checked, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_img_recolor(&style_guesspage_imgbtn_1_main_main_checked, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_guesspage_imgbtn_1_main_main_checked, 0);
	lv_obj_add_style(ui->guessPage_imgbtn_1, &style_guesspage_imgbtn_1_main_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_imgbtn_set_src(ui->guessPage_imgbtn_1, LV_IMGBTN_STATE_RELEASED, NULL, &_back_alpha_30x20, NULL);
	lv_obj_add_flag(ui->guessPage_imgbtn_1, LV_OBJ_FLAG_CHECKABLE);

	//Init events for screen
	events_init_guessPage(ui);
}
