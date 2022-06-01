/*
 * @: Copyright (c) 2021 LingBlopdreame Co., Ltd. All rights reserved
 * @Author: LingBlopdreame
 * @Date: 2022-04-26 13:11:31
 * @LastEditors: LingBlopdreame
 * @LastEditTime: 2022-04-28 18:02:10
 * @FilePath: \FDC2214_ESP32\src\detect_Task.cpp
 * @Description: 
 */
#include "detect_Task.h"

#include <Arduino.h>
#include <Wire.h>
#include "FDC2214.h"


uint8_t result=0;  //过程判断 不是检测结果
uint8_t Result = 0;  // 0 无  1 2 3 4 5  6 石头 7 剪刀 8 布   最终输出结果
uint8_t old_Result = 0;  // 0 无  1 2 3 4 5  6 石头 7 剪刀 8 布   最终输出结果
uint8_t result_before=0;
uint8_t page=1;  // 模式   ：  0 无   1:石头剪刀布  2:读数  
uint8_t count=0;      
static const uint32_t threshold[6] = {11950000, 12420000, 12560000, 12480000, 10310000, 10270000};
uint8_t judgement=0;
uint8_t judge=0;
unsigned long capa[8]; // variable to store data from FDC
uint8_t freq = 50;      // 频率(20ms周期)
uint8_t channel = 8;    // 通道(高速通道（0 ~ 7）由80MHz时钟驱动，低速通道（8 ~ 15）由 1MHz 时钟驱动。)
uint8_t resolution = 8; // 分辨率
const uint8_t servo = 13;

FDC2214 capsense1(FDC2214_I2C_ADDR_0);
FDC2214 capsense2(FDC2214_I2C_ADDR_1);

extern xQueueHandle page_queue;
extern xQueueHandle status_queue;
extern xQueueHandle result_queue;

void detect_Task(void *pvParameters) {
    bool page_receive;
    uint8_t page_number;
    uint8_t status = 0;

    ledcSetup(channel, freq, resolution); // 设置通道
    ledcAttachPin(servo, channel);          // 将通道与对应的引脚连接
    
    bool capOk1 = capsense1.begin(0xF, 0x6, 0x5, true); //setup all four channels, autoscan with 4 channels, deglitch at 10MHz, external oscillator 
    bool capOk2 = capsense2.begin(0xF, 0x6, 0x5, true); //setup all four channels, autoscan with 4 channels, deglitch at 10MHz, internal oscillator 

    vTaskDelay(100);
    
    if (!capOk1) {
        status = 1;
        xQueueSend(status_queue, &status, 10);
        Serial.println("Sensor Fail1");
        for (;;) {
            vTaskDelay(100);    
        }
    }

    if (!capOk2) {
        status = 1;
        xQueueSend(status_queue, &status, 10);
        Serial.println("Sensor Fail2");  
        for (;;) {
            vTaskDelay(100);    
        }
    }

    status = 0;
    xQueueSend(status_queue, &status, 10);

    for (;;) {
        page_receive = xQueueReceive(page_queue, &page_number, 10);

        for (int i = 0; i < 4; i++) {
            capa[i]= capsense1.getReading28(i);
        }
        for (int i = 4; i < 4+2; i++) { 
            capa[i]= capsense2.getReading28(i-4);
        }

        if (capa[0] < threshold[0]){
            vTaskDelay(50);
            if ( capa[0] < threshold[0] && ((page_number == 1) || (page_number == 4)) ) {
                for(int i=1;i<6;i++){
                    if(capa[i]<threshold[i]) count++;
                }
                if(count>=4){
                    result=8;
                }
                else if (count==2 ||count==3){
                    result=7;
                }
                else {
                    result=6;
                }
            }
            else if ( (capa[0] < threshold[0]) && (page_number == 2)) {
                for (int i = 1; i < 6; i++){
                    if(capa[i]<threshold[i]) count++;
                }
                if (count == 1) {
                    result = 1;
                } else if (count == 2) {
                    result = 2;
                } else if (count == 3) {
                    result = 3;
                } else if (count == 4) {
                    result = 4;
                } else if (count == 5){
                    result = 5;
                }
            }
        }
        result_before = result;
        if (result_before == result) {
            judgement++;
        }
        if (judgement >= 3) {
            Result = result_before;
            judge = 1;
            judgement = 0;
        }
        result = 0;
        count = 0;
        if (Result != old_Result) {
            xQueueSend(result_queue, &Result, 10);
            old_Result = Result;
        }
        switch (Result)
        {
        case 0:
            ledcWrite(channel, 12); 
            break;
        case 6:
            ledcWrite(channel, 30); 
            break;
        case 7:
            ledcWrite(channel, 18); 
            break;
        case 8:
            ledcWrite(channel, 24); 
            break;                                
        default:
            break;
        }
        vTaskDelay(50);
    }
}

