/*
 * Menu.h
 *
 *  Created on: 9 maj 2020
 *      Author: rella
 */

#ifndef INC_MENU_H_
#define INC_MENU_H_

volatile int mainMenuIndex, mainMenuIndexTemp, levelMenuIndex,
		levelMenuIndexTemp, hiscoreMenuIndex, hiscoreMenuIndexTemp,highscoresIndexAnim,levelMenuIndex2,
		creditsMenuIndex,creditsMenuIndexTemp,creditsIndexAnim,leftArrowAnimIndex,creditsMenuIndexTemp2;
bool hiscoreMenu, highscoresWord,leftArrowAnim;
bool Fade;
bool mainMenu;
bool upperText;
bool levelMenu, pickedLevel;
bool hard, medium;
bool highscoresAnim,reverse;
bool creditsMenu, creditsAnim, reverse2,turn,creditsMenuMarked,backPicked;
char selectedLevel;

void MENU();
void MENU_Animation_TIM2();
void MENU_Animation_TIM5();
void textFade();
void showUpperText();
void main_Menu();
void main_Menu_Marked();
void level_Menu();
void level_Menu_Picked();
void Menu_Conditions();
void highscoresAnimation();
void hiscore_Menu();
void creditsAnimation();
void leftArrowAnimation();
void credits_Menu();
void credits_Menu_Marked();
#endif /* INC_MENU_H_ */
