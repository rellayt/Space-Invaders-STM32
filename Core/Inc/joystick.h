/*
 * joystick.h
 *
 *  Created on: May 7, 2020
 *      Author: rella
 */
#include "main.h"

#ifndef INC_JOYSTICK_H_
#define INC_JOYSTICK_H_
extern volatile int *direction;
bool blockPress,blockUp, blockDown,blockRight,blockLeft;
GPIO_PinState Press;
bool UP();
bool DOWN();
bool RIGHT();
bool LEFT();
void getJoystickLed();
void *getJoystickDirection();


#endif /* INC_JOYSTICK_H_ */
