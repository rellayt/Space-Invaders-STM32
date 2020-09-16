/*
 * joystick.c
 *
 *  Created on: May 7, 2020
 *      Author: rella
 */
#include "stdbool.h"
#include "joystick.h"
#include "main.h"

volatile int *direction=0;
extern bool blockPress=true,blockUp=true, blockDown=true,blockRight=true,blockLeft=true;
bool UP() {
	if (direction == 4)
		return true;
	else
		return false;
}
bool DOWN() {
	if (direction == 2)
		return true;
	else
		return false;
}
bool RIGHT() {
	if (direction == 3)
		return true;
	else
		return false;
}
bool LEFT() {
	if (direction == 1)
		return true;
	else
		return false;
}
void blockJoystick()
{
	blockUp=true;
	blockDown=true;
	blockRight=true;
	blockLeft=true;
	blockPress=true;
}
void unblockJoystick()
{
	blockUp=false;
	blockDown=false;
	blockRight=false;
	blockLeft=false;
	blockPress=false;
}
getJoystickLed() {
	if (DOWN() && !blockDown) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, GPIO_PIN_SET);
	} else if (UP() && !blockUp) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, GPIO_PIN_SET);
	} else {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, GPIO_PIN_RESET);
	}

	if (RIGHT() && !blockRight) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, GPIO_PIN_SET);
	} else {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, GPIO_PIN_RESET);
	}

	if (LEFT() && !blockLeft) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, GPIO_PIN_SET);
	} else {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, GPIO_PIN_RESET);
	}
	Press = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_3);

			if (Press == GPIO_PIN_RESET && !blockPress)
				HAL_GPIO_TogglePin(GPIOB,
				GPIO_PIN_0 | GPIO_PIN_7 | GPIO_PIN_14);
}

void *getJoystickDirection(uint32_t VR[2])
{
	if (VR[0] >= 3700) {
		direction = 1; //LEFT
	} else if (VR[1] >= 3700) {
		direction = 2; //DOWN
	} else if (VR[0] <= 1700) {
		direction = 3; //RIGHT
	} else if (VR[1] <= 1700) {
		direction = 4; //UP
	} else {
		direction = 0;
	}
}

