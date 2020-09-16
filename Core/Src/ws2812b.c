/*
 * ws2812b.c
 *
 *  Created on: May 26, 2020
 *      Author: rella
 */
#include "ws2812b.h"
#include "stm32f7xx_hal.h"
#include "spi.h"

#define LED_BUFFER_LENGTH (LED_NO*12)
const uint8_t leddata[256 * 4] = { // size = 256 * 3
		0X44, 0X44, 0X44,
				0X44, // 0
				0X44, 0X44, 0X44,
				0X47, // 1
				0X44, 0X44, 0X44, 0X74, 0X44, 0X44, 0X44, 0X77, 0X44, 0X44,
				0X47, 0X44, 0X44, 0X44, 0X47, 0X47, 0X44, 0X44, 0X47, 0X74,
				0X44, 0X44, 0X47, 0X77, 0X44, 0X44, 0X74, 0X44, 0X44, 0X44,
				0X74, 0X47, 0X44, 0X44, 0X74, 0X74, 0X44, 0X44, 0X74, 0X77,
				0X44, 0X44, 0X77, 0X44, 0X44, 0X44, 0X77, 0X47, 0X44, 0X44,
				0X77, 0X74, 0X44, 0X44, 0X77, 0X77, 0X44, 0X47, 0X44, 0X44,
				0X44, 0X47, 0X44, 0X47, 0X44, 0X47, 0X44, 0X74, 0X44, 0X47,
				0X44, 0X77, 0X44, 0X47, 0X47, 0X44, 0X44, 0X47, 0X47, 0X47,
				0X44, 0X47, 0X47, 0X74, 0X44, 0X47, 0X47, 0X77, 0X44, 0X47,
				0X74, 0X44, 0X44, 0X47, 0X74, 0X47, 0X44, 0X47, 0X74, 0X74,
				0X44, 0X47, 0X74, 0X77, 0X44, 0X47, 0X77, 0X44, 0X44, 0X47,
				0X77, 0X47, 0X44, 0X47, 0X77, 0X74, 0X44, 0X47, 0X77, 0X77,
				0X44, 0X74, 0X44, 0X44, 0X44, 0X74, 0X44, 0X47, 0X44, 0X74,
				0X44, 0X74, 0X44, 0X74, 0X44, 0X77, 0X44, 0X74, 0X47, 0X44,
				0X44, 0X74, 0X47, 0X47, 0X44, 0X74, 0X47, 0X74, 0X44, 0X74,
				0X47, 0X77, 0X44, 0X74, 0X74, 0X44, 0X44, 0X74, 0X74, 0X47,
				0X44, 0X74, 0X74, 0X74, 0X44, 0X74, 0X74, 0X77, 0X44, 0X74,
				0X77, 0X44, 0X44, 0X74, 0X77, 0X47, 0X44, 0X74, 0X77, 0X74,
				0X44, 0X74, 0X77, 0X77, 0X44, 0X77, 0X44, 0X44, 0X44, 0X77,
				0X44, 0X47, 0X44, 0X77, 0X44, 0X74, 0X44, 0X77, 0X44, 0X77,
				0X44, 0X77, 0X47, 0X44, 0X44, 0X77, 0X47, 0X47, 0X44, 0X77,
				0X47, 0X74, 0X44, 0X77, 0X47, 0X77, 0X44, 0X77, 0X74, 0X44,
				0X44, 0X77, 0X74, 0X47, 0X44, 0X77, 0X74, 0X74, 0X44, 0X77,
				0X74, 0X77, 0X44, 0X77, 0X77, 0X44, 0X44, 0X77, 0X77, 0X47,
				0X44, 0X77, 0X77, 0X74, 0X44, 0X77, 0X77, 0X77, 0X47, 0X44,
				0X44, 0X44, 0X47, 0X44, 0X44, 0X47, 0X47, 0X44, 0X44, 0X74,
				0X47, 0X44, 0X44, 0X77, 0X47, 0X44, 0X47, 0X44, 0X47, 0X44,
				0X47, 0X47, 0X47, 0X44, 0X47, 0X74, 0X47, 0X44, 0X47, 0X77,
				0X47, 0X44, 0X74, 0X44, 0X47, 0X44, 0X74, 0X47, 0X47, 0X44,
				0X74, 0X74, 0X47, 0X44, 0X74, 0X77, 0X47, 0X44, 0X77, 0X44,
				0X47, 0X44, 0X77, 0X47, 0X47, 0X44, 0X77, 0X74, 0X47, 0X44,
				0X77, 0X77, 0X47, 0X47, 0X44, 0X44, 0X47, 0X47, 0X44, 0X47,
				0X47, 0X47, 0X44, 0X74, 0X47, 0X47, 0X44, 0X77, 0X47, 0X47,
				0X47, 0X44, 0X47, 0X47, 0X47, 0X47, 0X47, 0X47, 0X47, 0X74,
				0X47, 0X47, 0X47, 0X77, 0X47, 0X47, 0X74, 0X44, 0X47, 0X47,
				0X74, 0X47, 0X47, 0X47, 0X74, 0X74, 0X47, 0X47, 0X74, 0X77,
				0X47, 0X47, 0X77, 0X44, 0X47, 0X47, 0X77, 0X47, 0X47, 0X47,
				0X77, 0X74, 0X47, 0X47, 0X77, 0X77, 0X47, 0X74, 0X44, 0X44,
				0X47, 0X74, 0X44, 0X47, 0X47, 0X74, 0X44, 0X74, 0X47, 0X74,
				0X44, 0X77, 0X47, 0X74, 0X47, 0X44, 0X47, 0X74, 0X47, 0X47,
				0X47, 0X74, 0X47, 0X74, 0X47, 0X74, 0X47, 0X77, 0X47, 0X74,
				0X74, 0X44, 0X47, 0X74, 0X74, 0X47, 0X47, 0X74, 0X74, 0X74,
				0X47, 0X74, 0X74, 0X77, 0X47, 0X74, 0X77, 0X44, 0X47, 0X74,
				0X77, 0X47, 0X47, 0X74, 0X77, 0X74, 0X47, 0X74, 0X77, 0X77,
				0X47, 0X77, 0X44, 0X44, 0X47, 0X77, 0X44, 0X47, 0X47, 0X77,
				0X44, 0X74, 0X47, 0X77, 0X44, 0X77, 0X47, 0X77, 0X47, 0X44,
				0X47, 0X77, 0X47, 0X47, 0X47, 0X77, 0X47, 0X74, 0X47, 0X77,
				0X47, 0X77, 0X47, 0X77, 0X74, 0X44, 0X47, 0X77, 0X74, 0X47,
				0X47, 0X77, 0X74, 0X74, 0X47, 0X77, 0X74, 0X77, 0X47, 0X77,
				0X77, 0X44, 0X47, 0X77, 0X77, 0X47, 0X47, 0X77, 0X77, 0X74,
				0X47, 0X77, 0X77, 0X77, 0X74, 0X44, 0X44, 0X44, 0X74, 0X44,
				0X44, 0X47, 0X74, 0X44, 0X44, 0X74, 0X74, 0X44, 0X44, 0X77,
				0X74, 0X44, 0X47, 0X44, 0X74, 0X44, 0X47, 0X47, 0X74, 0X44,
				0X47, 0X74, 0X74, 0X44, 0X47, 0X77, 0X74, 0X44, 0X74, 0X44,
				0X74, 0X44, 0X74, 0X47, 0X74, 0X44, 0X74, 0X74, 0X74, 0X44,
				0X74, 0X77, 0X74, 0X44, 0X77, 0X44, 0X74, 0X44, 0X77, 0X47,
				0X74, 0X44, 0X77, 0X74, 0X74, 0X44, 0X77, 0X77, 0X74, 0X47,
				0X44, 0X44, 0X74, 0X47, 0X44, 0X47, 0X74, 0X47, 0X44, 0X74,
				0X74, 0X47, 0X44, 0X77, 0X74, 0X47, 0X47, 0X44, 0X74, 0X47,
				0X47, 0X47, 0X74, 0X47, 0X47, 0X74, 0X74, 0X47, 0X47, 0X77,
				0X74, 0X47, 0X74, 0X44, 0X74, 0X47, 0X74, 0X47, 0X74, 0X47,
				0X74, 0X74, 0X74, 0X47, 0X74, 0X77, 0X74, 0X47, 0X77, 0X44,
				0X74, 0X47, 0X77, 0X47, 0X74, 0X47, 0X77, 0X74, 0X74, 0X47,
				0X77, 0X77, 0X74, 0X74, 0X44, 0X44, 0X74, 0X74, 0X44, 0X47,
				0X74, 0X74, 0X44, 0X74, 0X74, 0X74, 0X44, 0X77, 0X74, 0X74,
				0X47, 0X44, 0X74, 0X74, 0X47, 0X47, 0X74, 0X74, 0X47, 0X74,
				0X74, 0X74, 0X47, 0X77, 0X74, 0X74, 0X74, 0X44, 0X74, 0X74,
				0X74, 0X47, 0X74, 0X74, 0X74, 0X74, 0X74, 0X74, 0X74, 0X77,
				0X74, 0X74, 0X77, 0X44, 0X74, 0X74, 0X77, 0X47, 0X74, 0X74,
				0X77, 0X74, 0X74, 0X74, 0X77, 0X77, 0X74, 0X77, 0X44, 0X44,
				0X74, 0X77, 0X44, 0X47, 0X74, 0X77, 0X44, 0X74, 0X74, 0X77,
				0X44, 0X77, 0X74, 0X77, 0X47, 0X44, 0X74, 0X77, 0X47, 0X47,
				0X74, 0X77, 0X47, 0X74, 0X74, 0X77, 0X47, 0X77, 0X74, 0X77,
				0X74, 0X44, 0X74, 0X77, 0X74, 0X47, 0X74, 0X77, 0X74, 0X74,
				0X74, 0X77, 0X74, 0X77, 0X74, 0X77, 0X77, 0X44, 0X74, 0X77,
				0X77, 0X47, 0X74, 0X77, 0X77, 0X74, 0X74, 0X77, 0X77, 0X77,
				0X77, 0X44, 0X44, 0X44, 0X77, 0X44, 0X44, 0X47, 0X77, 0X44,
				0X44, 0X74, 0X77, 0X44, 0X44, 0X77, 0X77, 0X44, 0X47, 0X44,
				0X77, 0X44, 0X47, 0X47, 0X77, 0X44, 0X47, 0X74, 0X77, 0X44,
				0X47, 0X77, 0X77, 0X44, 0X74, 0X44, 0X77, 0X44, 0X74, 0X47,
				0X77, 0X44, 0X74, 0X74, 0X77, 0X44, 0X74, 0X77, 0X77, 0X44,
				0X77, 0X44, 0X77, 0X44, 0X77, 0X47, 0X77, 0X44, 0X77, 0X74,
				0X77, 0X44, 0X77, 0X77, 0X77, 0X47, 0X44, 0X44, 0X77, 0X47,
				0X44, 0X47, 0X77, 0X47, 0X44, 0X74, 0X77, 0X47, 0X44, 0X77,
				0X77, 0X47, 0X47, 0X44, 0X77, 0X47, 0X47, 0X47, 0X77, 0X47,
				0X47, 0X74, 0X77, 0X47, 0X47, 0X77, 0X77, 0X47, 0X74, 0X44,
				0X77, 0X47, 0X74, 0X47, 0X77, 0X47, 0X74, 0X74, 0X77, 0X47,
				0X74, 0X77, 0X77, 0X47, 0X77, 0X44, 0X77, 0X47, 0X77, 0X47,
				0X77, 0X47, 0X77, 0X74, 0X77, 0X47, 0X77, 0X77, 0X77, 0X74,
				0X44, 0X44, 0X77, 0X74, 0X44, 0X47, 0X77, 0X74, 0X44, 0X74,
				0X77, 0X74, 0X44, 0X77, 0X77, 0X74, 0X47, 0X44, 0X77, 0X74,
				0X47, 0X47, 0X77, 0X74, 0X47, 0X74, 0X77, 0X74, 0X47, 0X77,
				0X77, 0X74, 0X74, 0X44, 0X77, 0X74, 0X74, 0X47, 0X77, 0X74,
				0X74, 0X74, 0X77, 0X74, 0X74, 0X77, 0X77, 0X74, 0X77, 0X44,
				0X77, 0X74, 0X77, 0X47, 0X77, 0X74, 0X77, 0X74, 0X77, 0X74,
				0X77, 0X77, 0X77, 0X77, 0X44, 0X44, 0X77, 0X77, 0X44, 0X47,
				0X77, 0X77, 0X44, 0X74, 0X77, 0X77, 0X44, 0X77, 0X77, 0X77,
				0X47, 0X44, 0X77, 0X77, 0X47, 0X47, 0X77, 0X77, 0X47, 0X74,
				0X77, 0X77, 0X47, 0X77, 0X77, 0X77, 0X74, 0X44, 0X77, 0X77,
				0X74, 0X47, 0X77, 0X77, 0X74, 0X74, 0X77, 0X77, 0X74, 0X77,
				0X77, 0X77, 0X77, 0X44, 0X77, 0X77, 0X77, 0X47, 0X77, 0X77,
				0X77, 0X74, 0X77, 0X77, 0X77, 0X77,

		};

uint8_t ws_buffer[LED_BUFFER_LENGTH];

void encode_byte(uint8_t data, int16_t buffer_index) {
	int index = data * 4;
	ws_buffer[buffer_index++] = leddata[index++];
	ws_buffer[buffer_index++] = leddata[index++];
	ws_buffer[buffer_index++] = leddata[index++];
	ws_buffer[buffer_index++] = leddata[index++];
}
void generate_ws_buffer(uint8_t RData, uint8_t GData, uint8_t BData,
		int16_t led_no) {
	//ws2812b
//G--R--B
//MSB first
	int offset = led_no * 12;
	encode_byte(GData, offset);
	encode_byte(RData, offset + 4);
	encode_byte(BData, offset + 8);
}
void Send_4812(void) {
#if 1
	HAL_SPI_Transmit_DMA(&hspi1, ws_buffer, LED_BUFFER_LENGTH);
	// wait until finished
	while (__HAL_SPI_GET_FLAG(&hspi1, SPI_FLAG_BSY))
		;
#else
    HAL_SPI_Transmit( &hspi1, ws_buffer, LED_BUFFER_LENGTH, 300 );
#endif
}

void setAllPixelColor(uint8_t r, uint8_t g, uint8_t b) {
	int i;
	for (i = 0; i < LED_NO; i++) {
		generate_ws_buffer(r, g, b, i);
	}
	Send_4812();
}
void setPixelColor(uint16_t n, uint8_t r, uint8_t g, uint8_t b) {
	generate_ws_buffer(r, g, b, n);
	Send_4812();
}
/**
 * initialize MOSI pin to LOW.  Without this, first time transmit for first LED might be wrong.
 *
 */
void initLEDMOSI(void) {
	uint8_t buffer0[2] = { 0, 0 };
	HAL_SPI_Transmit(&hspi1, buffer0, 1, 100);
}
