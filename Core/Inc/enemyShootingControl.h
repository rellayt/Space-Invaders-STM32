/*
 * enemyShootingControl.h
 *
 *  Created on: 7 wrz 2020
 *      Author: rella
 */

#ifndef INC_ENEMYSHOOTINGCONTROL_H_
#define INC_ENEMYSHOOTINGCONTROL_H_

#include "GlobalDefines.h"
#include "stdbool.h"
#include "diode.h"

bool enemyActivateShoot_1, enemyActivateShoot_2, enemyActivateShoot_3,
		enemyActivateShoot_4;
bool enemyShootInit_1, enemyShootInit_2, enemyShootInit_3, enemyShootInit_4;
bool enemyShootFirstDiode_1, enemyShootFirstDiode_2, enemyShootFirstDiode_3,
		enemyShootFirstDiode_4;
int enemyDiodeStartShootID_1, enemyDiodeStartShootID_2,
		enemyDiodeStartShootID_3, enemyDiodeStartShootID_4;
int enemyDiodeShootRoute_1, enemyDiodeShootRoute_2, enemyDiodeShootRoute_3,
		enemyDiodeShootRoute_4;
int enemyCurrentShootDiode_1, enemyCurrentShootDiode_2, enemyCurrentShootDiode_3, enemyCurrentShootDiode_4;

bool checkEnemyFreeLineToShot(int enemyDiodeID);
void initEnemyShooting();
void enemyShooting_1();
void enemyShooting_2();
void enemyShooting_3();
void enemyShooting_4();

#endif /* INC_ENEMYSHOOTINGCONTROL_H_ */
