#ifndef INC_PLAYERCONTROL_H_
#define INC_PLAYERCONTROL_H_

#include "stdbool.h"
#include "ws2812b.h"
#include "diode.h"
#include "joystick.h"
#include "GlobalDefines.h"
#include "main.h"

int playerRandomPos;
bool playerInitialized;

int initPlayerIndex;
int playerPosition, playerPositionTemp;
bool playerSetPosition, playerActivateLeft, playerActivateRight;
char playerSpawn, playerDirection;
bool playerNewMove;

void playerChangePosition();
void playerMoveLeft();
void playerMoveRight();
void initPlayer();
void checkForPlayerMove();
void playerPositioning();
void checkForPlayerHit();
#endif /* INC_PLAYERCONTROL_H_ */
