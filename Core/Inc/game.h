#ifndef INC_GAME_H_
#define INC_GAME_H_
#include <stdio.h>
#include "diode.h"
#include "stdbool.h"
#include "playerControl.h"

int currentScore, newScore;
bool reverseLED;
int themeID, themeID_temp;
int newGameTimeCounter, currentGameTimeCounter;
int getRand(int min, int max);
void theme(uint16_t diodeID);

#endif /* INC_GAME_H_ */
