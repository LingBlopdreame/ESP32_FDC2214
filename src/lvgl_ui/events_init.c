/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#include "events_init.h"
#include <stdio.h>
#include "lvgl.h"


extern uint8_t counter;

void events_init(lv_ui *ui)
{
}

static void homePage_btn_1_event_handler(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);
	switch (code)
	{
	case LV_EVENT_CLICKED:
	{
		if (!lv_obj_is_valid(guider_ui.guessPage))
			setup_scr_guessPage(&guider_ui);
		lv_disp_t * d = lv_obj_get_disp(lv_scr_act());
		if (d->prev_scr == NULL && d->scr_to_load == NULL)
			lv_scr_load_anim(guider_ui.guessPage, LV_SCR_LOAD_ANIM_FADE_ON, 10, 10, true);
	}
		break;
	default:
		break;
	}
}

static void homePage_btn_2_event_handler(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);
	switch (code)
	{
	case LV_EVENT_CLICKED:
	{
		if (!lv_obj_is_valid(guider_ui.numberPage))
			setup_scr_numberPage(&guider_ui);
		lv_disp_t * d = lv_obj_get_disp(lv_scr_act());
		if (d->prev_scr == NULL && d->scr_to_load == NULL)
			lv_scr_load_anim(guider_ui.numberPage, LV_SCR_LOAD_ANIM_FADE_ON, 10, 10, true);
	}
		break;
	default:
		break;
	}
}

static void homePage_btn_3_event_handler(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);
	switch (code)
	{
	case LV_EVENT_CLICKED:
	{
		if (!lv_obj_is_valid(guider_ui.trainPage))
			setup_scr_trainPage(&guider_ui);
		lv_disp_t * d = lv_obj_get_disp(lv_scr_act());
		if (d->prev_scr == NULL && d->scr_to_load == NULL)
			lv_scr_load_anim(guider_ui.trainPage, LV_SCR_LOAD_ANIM_FADE_ON, 10, 10, true);
	}
		break;
	default:
		break;
	}
}

static void homePage_btn_4_event_handler(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);
	switch (code)
	{
	case LV_EVENT_CLICKED:
	{
		if (!lv_obj_is_valid(guider_ui.vsPage))
			setup_scr_vsPage(&guider_ui);
		lv_disp_t * d = lv_obj_get_disp(lv_scr_act());
		if (d->prev_scr == NULL && d->scr_to_load == NULL)
			lv_scr_load_anim(guider_ui.vsPage, LV_SCR_LOAD_ANIM_FADE_ON, 10, 10, true);
	}
		break;
	default:
		break;
	}
}

void events_init_homePage(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->homePage_btn_1, homePage_btn_1_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->homePage_btn_2, homePage_btn_2_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->homePage_btn_3, homePage_btn_3_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->homePage_btn_4, homePage_btn_4_event_handler, LV_EVENT_ALL, NULL);
}

static void guessPage_btn_1_event_handler(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);
	switch (code)
	{
	case LV_EVENT_CLICKED:
	{
		if (!lv_obj_is_valid(guider_ui.homePage))
			setup_scr_homePage(&guider_ui);
		lv_disp_t * d = lv_obj_get_disp(lv_scr_act());
		if (d->prev_scr == NULL && d->scr_to_load == NULL)
			lv_scr_load_anim(guider_ui.homePage, LV_SCR_LOAD_ANIM_FADE_ON, 10, 10, true);
	}
		break;
	default:
		break;
	}
}

static void guessPage_imgbtn_1_event_handler(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);
	switch (code)
	{
	case LV_EVENT_CLICKED:
	{
		if (!lv_obj_is_valid(guider_ui.homePage))
			setup_scr_homePage(&guider_ui);
		lv_disp_t * d = lv_obj_get_disp(lv_scr_act());
		if (d->prev_scr == NULL && d->scr_to_load == NULL)
			lv_scr_load_anim(guider_ui.homePage, LV_SCR_LOAD_ANIM_FADE_ON, 10, 10, true);
	}
		break;
	default:
		break;
	}
}

void events_init_guessPage(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->guessPage_btn_1, guessPage_btn_1_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->guessPage_imgbtn_1, guessPage_imgbtn_1_event_handler, LV_EVENT_ALL, NULL);
}

static void numberPage_btn_2_event_handler(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);
	switch (code)
	{
	case LV_EVENT_CLICKED:
	{
		if (!lv_obj_is_valid(guider_ui.homePage))
			setup_scr_homePage(&guider_ui);
		lv_disp_t * d = lv_obj_get_disp(lv_scr_act());
		if (d->prev_scr == NULL && d->scr_to_load == NULL)
			lv_scr_load_anim(guider_ui.homePage, LV_SCR_LOAD_ANIM_FADE_ON, 10, 10, true);
	}
		break;
	default:
		break;
	}
}

static void numberPage_imgbtn_2_event_handler(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);
	switch (code)
	{
	case LV_EVENT_CLICKED:
	{
		if (!lv_obj_is_valid(guider_ui.homePage))
			setup_scr_homePage(&guider_ui);
		lv_disp_t * d = lv_obj_get_disp(lv_scr_act());
		if (d->prev_scr == NULL && d->scr_to_load == NULL)
			lv_scr_load_anim(guider_ui.homePage, LV_SCR_LOAD_ANIM_FADE_ON, 10, 10, true);
	}
		break;
	default:
		break;
	}
}

void events_init_numberPage(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->numberPage_btn_2, numberPage_btn_2_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->numberPage_imgbtn_2, numberPage_imgbtn_2_event_handler, LV_EVENT_ALL, NULL);
}

static void trainPage_btn_3_event_handler(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);
	switch (code)
	{
	case LV_EVENT_CLICKED:
	{
		if (!lv_obj_is_valid(guider_ui.homePage))
			setup_scr_homePage(&guider_ui);
		lv_disp_t * d = lv_obj_get_disp(lv_scr_act());
		if (d->prev_scr == NULL && d->scr_to_load == NULL)
			lv_scr_load_anim(guider_ui.homePage, LV_SCR_LOAD_ANIM_FADE_ON, 10, 10, true);
	}
		break;
	default:
		break;
	}
}

static void trainPage_imgbtn_3_event_handler(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);
	switch (code)
	{
	case LV_EVENT_CLICKED:
	{
		if (!lv_obj_is_valid(guider_ui.homePage))
			setup_scr_homePage(&guider_ui);
		lv_disp_t * d = lv_obj_get_disp(lv_scr_act());
		if (d->prev_scr == NULL && d->scr_to_load == NULL)
			lv_scr_load_anim(guider_ui.homePage, LV_SCR_LOAD_ANIM_FADE_ON, 10, 10, true);
	}
		break;
	default:
		break;
	}
}

static void trainPage_btn_4_event_handler(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);
	switch (code)
	{
		lv_obj_set_style_text_font(guider_ui.trainPage_label_1, &lv_font_STXINGKA_28, 0);
	case LV_EVENT_CLICKED:
	{
		switch(counter)
		{
		case 0:
			lv_label_set_text(guider_ui.trainPage_label_1, "训练石头...");
			break;
		case 1:
			lv_label_set_text(guider_ui.trainPage_label_1, "训练布...");
			break;			
		case 2:	
			lv_label_set_text(guider_ui.trainPage_label_1, "训练1...");
			break;
		case 3:	
			lv_label_set_text(guider_ui.trainPage_label_1, "训练2...");
			break;		
		case 4:
			lv_label_set_text(guider_ui.trainPage_label_1, "训练3...");
			break;		
		case 5:	
			lv_label_set_text(guider_ui.trainPage_label_1, "训练4...");
			break;		
		case 6:
			lv_label_set_text(guider_ui.trainPage_label_1, "训练5...");
			lv_label_set_text(guider_ui.trainPage_btn_4_label, "Back");
			break;			
		case 7:	
			counter = 0;
			if (!lv_obj_is_valid(guider_ui.homePage))
				setup_scr_homePage(&guider_ui);
			lv_disp_t * d = lv_obj_get_disp(lv_scr_act());
			if (d->prev_scr == NULL && d->scr_to_load == NULL)
				lv_scr_load_anim(guider_ui.homePage, LV_SCR_LOAD_ANIM_FADE_ON, 10, 10, true);
			break;		
		default:
			break;
		}
		if (counter >= 8) 
			counter = 0;
		else
			counter++;
	}
		break;
	default:
		break;
	}
}

void events_init_trainPage(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->trainPage_btn_3, trainPage_btn_3_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->trainPage_imgbtn_3, trainPage_imgbtn_3_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->trainPage_btn_4, trainPage_btn_4_event_handler, LV_EVENT_ALL, NULL);
}

static void vsPage_btn_5_event_handler(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);
	switch (code)
	{
	case LV_EVENT_CLICKED:
	{
		if (!lv_obj_is_valid(guider_ui.homePage))
			setup_scr_homePage(&guider_ui);
		lv_disp_t * d = lv_obj_get_disp(lv_scr_act());
		if (d->prev_scr == NULL && d->scr_to_load == NULL)
			lv_scr_load_anim(guider_ui.homePage, LV_SCR_LOAD_ANIM_FADE_ON, 10, 10, true);
	}
		break;
	default:
		break;
	}
}

static void vsPage_imgbtn_4_event_handler(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);
	switch (code)
	{
	case LV_EVENT_CLICKED:
	{
		if (!lv_obj_is_valid(guider_ui.homePage))
			setup_scr_homePage(&guider_ui);
		lv_disp_t * d = lv_obj_get_disp(lv_scr_act());
		if (d->prev_scr == NULL && d->scr_to_load == NULL)
			lv_scr_load_anim(guider_ui.homePage, LV_SCR_LOAD_ANIM_FADE_ON, 10, 10, true);
	}
		break;
	default:
		break;
	}
}

extern bool vs_flag;

static void vsPage_btn_6_event_handler(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);
	switch (code)
	{
	case LV_EVENT_CLICKED:
	{
		lv_obj_add_flag(guider_ui.vsPage_btn_6, LV_OBJ_FLAG_HIDDEN);
		lv_label_set_text(guider_ui.vsPage_label_2, "");
		lv_img_set_src(guider_ui.vsPage_img_3, &_wenHao_100x100);
		vs_flag = false;
	}
		break;
	default:
		break;
	}
}

void events_init_vsPage(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->vsPage_btn_5, vsPage_btn_5_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->vsPage_imgbtn_4, vsPage_imgbtn_4_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->vsPage_btn_6, vsPage_btn_6_event_handler, LV_EVENT_ALL, NULL);
}
