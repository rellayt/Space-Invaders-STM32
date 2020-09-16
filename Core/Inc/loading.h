/*
 * loading.h
 *
 *  Created on: May 7, 2020
 *      Author: rella
 */

#ifndef INC_LOADING_H_
#define INC_LOADING_H_

extern volatile int iDot, iSpace, iSpace2;
extern bool dots, miniDuel, enemySpace, gameStarted;

void miniDuelOfSpaces();
void enemyAboveWord();
void printDots();

#endif /* INC_LOADING_H_ */
