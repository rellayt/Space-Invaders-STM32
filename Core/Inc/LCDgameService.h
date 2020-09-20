#ifndef INC_LCDGAMESERVICE_H_
#define INC_LCDGAMESERVICE_H_
#include "stdbool.h"
#include "Menu.h"
#include "game.h"
#include "lcdcommands.h"
#include "playerShootingControl.h"
#include "enemyShootingControl.h"
#include "enemyControl.h"
#include "intro.h"
#include "loading.h"
#include "gameOver.h"
bool lcdInitSample, LCDtriedAgain;
int LCDtitleAnimationStep, waitToDisplayTryAgain, LCDtryAgainAnimationStep;
bool reverseLCDtitleAnimation;
char LCDtryAgainOption, LCDtryAgainOptionTemp;
bool tryAgain;

void LCD_gameStarted();
void LCD_gameStartedTitleAnimation();
void LCD_tryAgain();
void tryAgainCheckForSelectedOption();
void tryAgainSelectedOptionAnimation();
void LCDcheckExecuteOption();

#endif /* INC_LCDGAMESERVICE_H_ */
