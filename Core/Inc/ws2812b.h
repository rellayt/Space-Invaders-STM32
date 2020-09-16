/*
 * ws2812.h
 *
 *  Created on: May 26, 2020
 *      Author: rella
 */

#ifndef INC_WS2812B_H_
#define INC_WS2812B_H_
#define LED_NO    256
#define LED_BUFFER_LENGTH (LED_NO*12)
#include "stdint.h"
#include "main.h"
#include "stm32f7xx_hal.h"

const uint8_t leddata[];
extern uint8_t ws_buffer[LED_BUFFER_LENGTH];
void encode_byte(uint8_t data, int16_t buffer_index);
void generate_ws_buffer(uint8_t RData, uint8_t GData, uint8_t BData, int16_t led_no);
void Send_2812(void);
void setAllPixelColor(uint8_t r, uint8_t g, uint8_t b);
void setPixelColor(uint16_t n, uint8_t r, uint8_t g, uint8_t b);
void initLEDMOSI(void);


#endif /* INC_WS2812B_H_ */
