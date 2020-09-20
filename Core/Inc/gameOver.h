/*
 * gameOver.h
 *
 *  Created on: 12 wrz 2020
 *      Author: rella
 */

#ifndef INC_GAMEOVER_H_
#define INC_GAMEOVER_H_
#include "diode.h"
#include "GlobalDefines.h"
#include "enemyControl.h"
#include "joystick.h"
#include "game.h"

void gameOverTheme();
void SpaceInvaders_gameOver();
void checkForRoundOver();
void gameOver_reset();
bool gameOver, gameOverInitWord, initColor, reverseColor, reverseColor_2;
int gameOverThemeStep, gameOverThemeStep_2;
int gameOverColor_1, gameOverColor_2;
int gameOverDisappear;
bool enableGameOver;
#endif /* INC_GAMEOVER_H_ */
