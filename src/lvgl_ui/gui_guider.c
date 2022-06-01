/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"


void setup_ui(lv_ui *ui){
	setup_scr_homePage(ui);
	lv_scr_load(ui->homePage);
}
