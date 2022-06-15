/*
 * @: Copyright (c) 2021 LingBlopdreame Co., Ltd. All rights reserved
 * @Author: LingBlopdreame
 * @Date: 2022-04-25 11:11:48
 * @LastEditors: LingBlopdreame
 * @LastEditTime: 2022-06-07 21:55:03
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


// 创建三个初始化使用的队列用于核间信息交换：
//      + page_queue    页面显示   相关的队列
//      + status_queue  页面状态   相关的队列
//      + result_queue  传感器结果 相关的队列
xQueueHandle page_queue;
xQueueHandle status_queue;
xQueueHandle result_queue;

void setup(void) {
    // 关闭低电压检测,避免无限重启
    WRITE_PERI_REG(RTC_CNTL_BROWN_OUT_REG, 0);
    // 初始化 串口 和 SPI 总线
    Serial.begin(9600);
    Wire.begin();

    // 队列初始化
    page_queue = xQueueCreate(10, sizeof(uint8_t));
    status_queue = xQueueCreate(10, sizeof(uint8_t));
    result_queue = xQueueCreate(10, sizeof(uint8_t));

    // 创建两个任务，并分别分配到两个核心
    //      + Task1: LCD GUI界面显示任务
    //      + Task2: 传感器相关，蓝牙，WIFI以及数据处理等任务
    xTaskCreatePinnedToCore(LCD_Task, "LCD_Task", 10000, NULL, 0, NULL,  1);
    xTaskCreatePinnedToCore(detect_Task, "detect_Task", 10000, NULL, 0, NULL,  0);
    
    // 删除当前任务
    vTaskDelete(NULL);
}

void loop(void) {
    
}
