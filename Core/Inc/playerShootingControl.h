/*
 * playerShootingControl.h
 *
 *  Created on: 25 sie 2020
 *      Author: rella
 */

#ifndef INC_PLAYERSHOOTINGCONTROL_H_
#define INC_PLAYERSHOOTINGCONTROL_H_
#include "stdbool.h"

int bulletIndex;
int shotFromID, playerBulletRoute;
bool playerStartShot;
int playerShotFirstValue, playerShotSecondValue;

void playerShot();
void findPlayerPosition();
#endif /* INC_PLAYERSHOOTINGCONTROL_H_ */
