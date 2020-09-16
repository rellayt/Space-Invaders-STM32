/*
 * Menu.c
 *
 *  Created on: 9 maj 2020
 *      Author: rella
 */

#include "stdbool.h"
#include "i2c-lcd.h"
#include "lcdchars.h"
#include "lcdcommands.h"
#include "intro.h"
#include "loading.h"
#include "joystick.h"
#include "Menu.h"
volatile int mainMenuIndex = -1, levelMenuIndex = -1, levelMenuIndexTemp = 40,
		levelMenuIndex2, hiscoreMenuIndex = 0, highscoresIndexAnim = -1,
		creditsMenuIndex = 0, creditsMenuIndexTemp = 0, creditsIndexAnim = 0,
		leftArrowAnimIndex = 0, creditsMenuIndexTemp2 = 0;
bool hiscoreMenu = false, Fade = false, mainMenu = false, upperText = false,
		levelMenu = false, pickedLevel = false, leftArrowAnim = false;
bool hard = false, medium = false;
bool highscoresAnim = false, reverse = false, reverse2 = false, creditsAnim =
false, turn = false, backPicked = false;
;
bool creditsMenu = false, creditsMenuMarked = false;
int fade = 0;
char selectedLevel = 'N';
#define LCD_Clear_1 lcd_clear_1();
#define LCD_Clear_2 lcd_clear_2();
#define LCD_Clear_3 lcd_clear_3();
#define LCD_Clear_4 lcd_clear_4();
#define LCD_CLS_1_8_Lines lcd_clear_1_8_lines();
#define LCD_CLS_2_8_Lines lcd_clear_2_8_lines();
#define LCD_CLS_3_8_Lines lcd_clear_3_8_lines();
#define LCD_CLS_4_8_Lines lcd_clear_4_8_lines();
#define LCD_Clear lcd_cls();
#define LCD_Blink lcd_send_cmd (0x0F);
void MENU() {
	getJoystickLed();
	if (animationRound >= -10)
		animationRound--;
	if (intro) {
		introAnimation(animationRound);
	}

	Menu_Conditions();
	if (DOWN()) {

		if (intro) {
			intro = false;
			mainMenu = true;
			lcd_cls();
			mainMenuIndex = 0;
		}
		if (!intro && mainMenuIndex == 50 && !blockDown && !levelMenu
				|| mainMenuIndex < 5 && !blockDown && !levelMenu) {
			mainMenuIndex = mainMenuIndexTemp;
			mainMenuIndex++;
		}

		if (levelMenu && levelMenuIndexTemp < 3 && !blockDown
				|| levelMenu && levelMenuIndex == 50 && !blockDown) {
			levelMenuIndex = levelMenuIndexTemp;
			levelMenuIndex++;
		}

		if (hiscoreMenu && hiscoreMenuIndexTemp < 5) {
			hiscoreMenuIndex = hiscoreMenuIndexTemp;
			hiscoreMenuIndex++;
		}

		if (creditsMenu && creditsMenuIndexTemp < 5) {
			creditsMenuIndex = creditsMenuIndexTemp;
			creditsMenuIndex++;
		}
		if (creditsMenuMarked && creditsMenuIndexTemp > 0
				&& creditsMenuIndexTemp <= 3) {
			backPicked = true;
		}
	}

	if (UP()) {
		if (!intro && mainMenuIndex == 50 && !blockUp
				|| mainMenuIndex > 0 && !blockUp) {
			mainMenuIndex = mainMenuIndexTemp;
			mainMenuIndex--;
		}
		if (levelMenu && levelMenuIndexTemp > 0 && !blockUp
				|| levelMenuIndex == 50 && levelMenu && !blockUp) {
			levelMenuIndex = levelMenuIndexTemp;
			levelMenuIndex--;
		}
		if (hiscoreMenu && hiscoreMenuIndexTemp > 0 && !blockUp
				|| hiscoreMenuIndex == 50 && hiscoreMenu && blockUp) {
			hiscoreMenuIndex = hiscoreMenuIndexTemp;
			hiscoreMenuIndex--;
		}

		if (creditsMenu && creditsMenuIndexTemp > 0 && !blockUp
				|| creditsMenuIndex == 50 && creditsMenu && blockUp) {
			creditsMenuIndex = creditsMenuIndexTemp;
			creditsMenuIndex--;
		}
	}
	if (RIGHT()) {
	}

	if (LEFT()) {
	}

	if (mainMenu)
		main_Menu();

	if (miniDuel)
		miniDuelOfSpaces();

	if (mainMenu && !levelMenu)
		main_Menu_Marked();

	if (levelMenu)
		level_Menu();

	if (pickedLevel && !mainMenu)
		level_Menu_Picked();

	if (hiscoreMenu)
		hiscore_Menu();

	if (creditsMenu)
		credits_Menu();

	if (creditsMenuMarked)
		credits_Menu_Marked();
}

void MENU_Animation_TIM2() {
	if (dots) {
		printDots();
		blockJoystick();
	}
	if (highscoresAnim) {
		highscoresAnimation();
	} else {
		highscoresIndexAnim = 0;
		reverse = false;
	}
	if (creditsAnim) {
		creditsAnimation();
	} else {
		creditsIndexAnim = 0;
		reverse2 = false;
	}
}
void MENU_Animation_TIM5() {
	if (enemySpace) {
		enemyAboveWord();
		levelMenu = false;
		mainMenu = false;
		levelMenuIndexTemp = 0;
		blockJoystick();
	}
	if (Fade)
		textFade();

	if (highscoresAnim)
		highscoresAnimation();

	if (leftArrowAnim)
		leftArrowAnimation();

}

void textFade() {
	switch (fade) {
	case 5:
		lcd_cls();
		mainMenuIndex = 0;
		Fade = false;
		fade = 0;
		mainMenu = true;
		unblockJoystick();
		if (mainMenuIndex == 0) {
			blockUp = true;
			blockPress = true;
		}
		break;
	}
	fade++;
}

void showUpperText() {
	if (upperText) {
		LCD_SetLocalization(0x03);
		LCD_SendWord("Space Invaders");
		LCD_SetLocalization(0x48);
		LCD_SendWord("MENU");
		blockUp = true;
		blockPress = true;
	}
}

void main_Menu() {
	switch (mainMenuIndex) {
	case 0:
		blockUp = true;
		blockPress = true;
		lcd_cls();
		LCD_SetLocalization(0x03);
		LCD_SendWord("Space Invaders");
		LCD_SetLocalization(0x48);
		LCD_SendWord("MENU");
		LCD_SetLocalization(0x14);
		LCD_SendWord("Start");
		LCD_SetLocalization(0x54);
		LCD_SendWord("Level");
		createInvertedWord("2", 0x67, 1, 7, 0);
		mainMenuIndexTemp = mainMenuIndex;
		mainMenuIndex = 50;
		break;
	case 1:
		blockUp = false;
		blockPress = false;
		LCD_CLS_3_8_Lines
		;
		LCD_CLS_4_8_Lines
		;
		createInvertedWord("Start", 0x14, 5, 0, 0);
		LCD_SetLocalization(0x54);
		LCD_SendWord("Level");
		createInvertedWord("2", 0x67, 1, 7, 0);
		mainMenuIndexTemp = mainMenuIndex;
		mainMenuIndex = 50;
		showUpperText();
		break;
	case 2:
		blockUp = false;
		blockPress = false;
		LCD_CLS_3_8_Lines
		;
		LCD_CLS_4_8_Lines
		;
		LCD_SetLocalization(0x14);
		LCD_SendWord("Start");
		createInvertedWord("Level", 0x54, 5, 0, 0);
		mainMenuIndexTemp = mainMenuIndex;
		mainMenuIndex = 50;
		showUpperText();
		upperText = false;
		break;
	case 3:
		blockUp = false;
		blockPress = false;
		LCD_CLS_3_8_Lines
		;
		LCD_CLS_4_8_Lines
		;
		LCD_SetLocalization(0x14);
		LCD_SendWord("Level");
		createInvertedWord("HiScore", 0x54, 7, 0, 0);
		mainMenuIndexTemp = mainMenuIndex;
		mainMenuIndex = 50;
		showUpperText();
		upperText = false;
		break;
	case 4:
		blockUp = false;
		blockPress = false;
		LCD_CLS_3_8_Lines
		;
		LCD_CLS_4_8_Lines
		;
		LCD_SetLocalization(0x14);
		LCD_SendWord("HiScore");
		createInvertedWord("Credits", 0x54, 7, 0, 0);
		mainMenuIndexTemp = mainMenuIndex;
		mainMenuIndex = 50;
		showUpperText();
		upperText = false;
		break;
	case 5:
		blockUp = false;
		blockPress = false;
		LCD_CLS_3_8_Lines
		;
		LCD_CLS_4_8_Lines
		;
		LCD_SetLocalization(0x14);
		LCD_SendWord("Credits");
		createInvertedWord("Exit", 0x54, 4, 0, 0);
		createInvertedWord("8", 0x67, 1, 7, 0);
		mainMenuIndexTemp = mainMenuIndex;
		mainMenuIndex = 50;
		break;
	default:
		break;
	}
}
void main_Menu_Marked() {
	switch (mainMenuIndexTemp) {
	case 1:
		blockPress = false;
		if (Press == GPIO_PIN_RESET) {
			if (selectedLevel == 'N') {
				lcd_clear();
				LCD_SetLocalization(0x43);
				LCD_SendWord("Firstly select");
				LCD_SetLocalization(0x1A);
				LCD_SendWord("a level!");
				blockUp = true;
				blockDown = true;
				blockPress = true;
				mainMenu = false;
				Fade = true;
				upperText = true;
			} else if ((selectedLevel == 'E') || (selectedLevel == 'M')
					|| (selectedLevel == 'H')) {
				lcd_clear();
				LCD_SetLocalization(0x1A);
				LCD_SendWord("Loading");
				dots = true;
				miniDuel = true;
				enemySpace = true;
			}
		}
		break;
	case 2:
		blockPress = false;
		if (Press == GPIO_PIN_RESET) {
			HAL_GPIO_TogglePin(GPIOB,
			GPIO_PIN_0 | GPIO_PIN_7 | GPIO_PIN_14);
			lcd_cls();
			LCD_SetLocalization(0x04);
			LCD_SendWord("Select level");
			if (selectedLevel == 'E') {
				createInvertedWord("Easy", 0x40, 4, 0, 0);
				levelMenuIndex2 = 1;
			} else {
				LCD_SetLocalization(0x40);
				LCD_SendWord("Easy");
			}
			if (selectedLevel == 'M') {
				createInvertedWord("Medium", 0x14, 6, 0, 0);
				levelMenuIndex2 = 2;
			} else {
				LCD_SetLocalization(0x14);
				LCD_SendWord("Medium");
			}
			if (selectedLevel == 'H') {
				createInvertedWord("Hard", 0x54, 6, 0, 0);
				levelMenuIndex2 = 3;
			} else {
				LCD_SetLocalization(0x54);
				LCD_SendWord("Hard");
			}
			mainMenu = false;
			levelMenu = true;
		}
		levelMenuIndex = 0;
		blockPress = true;
		break;
	case 3:
		blockPress = false;
		if (Press == GPIO_PIN_RESET) {
			highscoresAnim = true;
			hiscoreMenu = true;
			mainMenu = false;
			levelMenu = false;
			hiscoreMenuIndex = 0;
		}
		break;
	case 4:
		blockPress = false;
		if (Press == GPIO_PIN_RESET) {
			creditsMenu = true;
			hiscoreMenu = false;
			mainMenu = false;
			levelMenu = false;
			creditsMenuIndex = 0;
		}
		break;
	case 5:
		blockPress = false;

		break;
	default:
		break;
	}

}

void level_Menu() {

	switch (levelMenuIndex) {
	case 0:
		levelMenuIndexTemp = levelMenuIndex;
		levelMenuIndex = 50;
		blockUp = true;
		if (levelMenuIndex2 == 1)
			levelMenuIndex = 1;
		if (levelMenuIndex2 == 2)
			levelMenuIndex = 2;
		if (levelMenuIndex2 == 3)
			levelMenuIndex = 3;
		break;
	case 1:
		blockUp = false;
		mainMenu = false;
		blockPress = false;
		createInvertedWord("Easy", 0x40, 4, 0, 0);
		levelMenuIndexTemp = levelMenuIndex;
		levelMenuIndex = 50;
		if (medium) {
			LCD_SetLocalization(0x14);
			LCD_SendWord("Medium");
			medium = false;
		}
		pickedLevel = true;
		break;
	case 2:
		blockUp = false;
		LCD_SetLocalization(0x40);
		LCD_SendWord("Easy");
		createInvertedWord("Medium", 0x14, 6, 0, 0);
		if (hard) {
			LCD_SetLocalization(0x54);
			LCD_SendWord("Hard");
			hard = false;
		}
		levelMenuIndexTemp = levelMenuIndex;
		levelMenuIndex = 50;
		medium = true;
		pickedLevel = true;
		break;
	case 3:
		LCD_SetLocalization(0x14);
		LCD_SendWord("Medium");
		createInvertedWord("Hard", 0x54, 6, 0, 0);
		levelMenuIndexTemp = levelMenuIndex;
		levelMenuIndex = 50;
		hard = true;
		pickedLevel = true;
		break;
	default:
		break;
	}
}
void level_Menu_Picked() {
	switch (levelMenuIndexTemp) {
	case 1:
		blockPress = false;
		if (Press == GPIO_PIN_RESET) {
			lcd_cls();
			selectedLevel = 'E';
			LCD_SetLocalization(0x42);
			LCD_SendWord("Selected level:");
			LCD_SetLocalization(0x1C);
			LCD_SendWord("Easy");
			blockJoystick();
			levelMenu = false;
			Fade = true;
			upperText = true;
			pickedLevel = false;
			levelMenuIndex = 1;
			blockJoystick();
		}
		break;
	case 2:
		blockPress = false;
		if (Press == GPIO_PIN_RESET) {
			lcd_cls();
			selectedLevel = 'M';
			LCD_SetLocalization(0x42);
			LCD_SendWord("Selected level:");
			LCD_SetLocalization(0x1B);
			LCD_SendWord("Medium");
			blockJoystick();
			levelMenu = false;
			Fade = true;
			upperText = true;
			pickedLevel = false;
			levelMenuIndex = 2;
			blockJoystick();
		}
		break;
	case 3:
		blockPress = false;
		if (Press == GPIO_PIN_RESET) {
			lcd_cls();
			selectedLevel = 'H';
			LCD_SetLocalization(0x42);
			LCD_SendWord("Selected level:");
			LCD_SetLocalization(0x1C);
			LCD_SendWord("Hard");
			blockJoystick();
			levelMenu = false;
			Fade = true;
			upperText = true;
			pickedLevel = false;
			levelMenuIndex = 3;
			blockJoystick();
		}
		break;
	default:
		break;
	}
}

void Menu_Conditions() {
	if (mainMenuIndex == 0 && !levelMenu)
		mainMenu = true;

	if (levelMenu)
		mainMenu = false;

	if (mainMenu && !levelMenu) {
		blockLeft = true;
		blockRight = true;
		if (mainMenuIndexTemp == 0) {
			blockUp = true;
		} else {
			blockUp = false;
		}
		if (mainMenuIndexTemp == 5) {
			blockDown = true;
		} else {
			blockDown = false;
		}
	}

	if (!mainMenu && levelMenu) {
		blockLeft = true;
		blockRight = true;
		if (levelMenuIndexTemp == 1) {
			blockUp = true;
		} else {
			blockUp = false;
		}
		if (levelMenuIndexTemp == 3) {
			blockDown = true;
		} else {
			blockDown = false;
		}
	}

	if (levelMenuIndexTemp > 0 && levelMenuIndexTemp < 3
			|| mainMenuIndexTemp > 0 && mainMenuIndexTemp < 5)
		blockPress = false;

	if (levelMenuIndexTemp == 0 && !mainMenu) {
		blockPress = true;
		blockUp = true;
	}

	if (hiscoreMenuIndexTemp >= 0 && hiscoreMenuIndexTemp <= 4 && hiscoreMenu)
		blockPress = true;

	if (hiscoreMenuIndexTemp == 5)
		blockPress = false;

	if (hiscoreMenuIndexTemp > 1 && hiscoreMenuIndexTemp < 6 && hiscoreMenu)
		blockUp = false;

	if (creditsMenuIndexTemp == 0)
		blockPress = true;

	if (backPicked)
		blockDown = true;

	if (!backPicked && creditsMenuMarked)
		blockPress = true;

	if (intro) {
		if (Press == GPIO_PIN_RESET) {
			HAL_GPIO_TogglePin(GPIOB,
			GPIO_PIN_0 | GPIO_PIN_7 | GPIO_PIN_14);
			intro = false;
			mainMenu = true;
			lcd_cls();
			mainMenuIndex = 0;
		}
	}
}

void highscoresAnimation() {
	switch (highscoresIndexAnim) {
	case 0:
		reverse = false;
		lcd_clear_1();
		LCD_SetLocalization(0x05);
		LCD_SendWord("HIGHSCORES");
		break;
	case 1:
		if (!reverse) {
			LCD_SetLocalization(0x05);
			LCD_SendWord(" ");
		} else {
			LCD_SetLocalization(0x05);
			LCD_SendWord(" ");
			LCD_SetLocalization(0x06);
			LCD_SendWord("I");
			reverse = false;
		}
		break;
	case 2:
		if (!reverse) {
			LCD_SetLocalization(0x06);
			LCD_SendWord(" ");
			LCD_SetLocalization(0x05);
			LCD_SendWord("H");
		} else {
			LCD_SetLocalization(0x06);
			LCD_SendWord(" ");
			LCD_SetLocalization(0x07);
			LCD_SendWord("G");
		}

		break;
	case 3:
		if (!reverse) {
			LCD_SetLocalization(0x07);
			LCD_SendWord(" ");
			LCD_SetLocalization(0x06);
			LCD_SendWord("I");
		} else {
			LCD_SetLocalization(0x07);
			LCD_SendWord(" ");
			LCD_SetLocalization(0x08);
			LCD_SendWord("H");
		}

		break;
	case 4:
		if (!reverse) {
			LCD_SetLocalization(0x08);
			LCD_SendWord(" ");

			LCD_SetLocalization(0x07);
			LCD_SendWord("G");
		} else {
			LCD_SetLocalization(0x08);
			LCD_SendWord(" ");
			LCD_SetLocalization(0x09);
			LCD_SendWord("S");
		}
		break;
	case 5:
		if (!reverse) {
			LCD_SetLocalization(0x09);
			LCD_SendWord(" ");

			LCD_SetLocalization(0x08);
			LCD_SendWord("H");
		} else {
			LCD_SetLocalization(0x09);
			LCD_SendWord(" ");
			LCD_SetLocalization(0x0A);
			LCD_SendWord("C");
		}
		break;
	case 6:
		if (!reverse) {
			LCD_SetLocalization(0x0A);
			LCD_SendWord(" ");

			LCD_SetLocalization(0x09);
			LCD_SendWord("S");
		} else {
			LCD_SetLocalization(0x0A);
			LCD_SendWord(" ");
			LCD_SetLocalization(0x0B);
			LCD_SendWord("O");
		}
		break;
	case 7:
		if (!reverse) {
			LCD_SetLocalization(0x0B);
			LCD_SendWord(" ");
			LCD_SetLocalization(0x0A);
			LCD_SendWord("C");
		} else {
			LCD_SetLocalization(0x0B);
			LCD_SendWord(" ");
			LCD_SetLocalization(0x0C);
			LCD_SendWord("R");
		}
		break;
	case 8:
		if (!reverse) {
			LCD_SetLocalization(0x0C);
			LCD_SendWord(" ");

			LCD_SetLocalization(0x0B);
			LCD_SendWord("O");
		} else {
			LCD_SetLocalization(0x0C);
			LCD_SendWord(" ");
			LCD_SetLocalization(0x0D);
			LCD_SendWord("E");
		}
		break;
	case 9:
		if (!reverse) {
			LCD_SetLocalization(0x0D);
			LCD_SendWord(" ");

			LCD_SetLocalization(0x0C);
			LCD_SendWord("R");
		} else {
			LCD_SetLocalization(0x0D);
			LCD_SendWord(" ");
			LCD_SetLocalization(0x0E);
			LCD_SendWord("S");
		}
		break;
	case 10:
		if (!reverse) {
			LCD_SetLocalization(0x0E);
			LCD_SendWord(" ");
			LCD_SetLocalization(0x0D);
			LCD_SendWord("E");
			reverse = true;
		}
		break;
	default:
		break;
	}

	if (!reverse)
		highscoresIndexAnim++;
	else
		highscoresIndexAnim--;

}

void hiscore_Menu() {
	switch (hiscoreMenuIndex) {
	case 0:
		highscoresAnim = true;
		hiscoreMenuIndexTemp = hiscoreMenuIndex;
		hiscoreMenuIndex = 50;
		blockUp = true;
		lcd_special_cls();
		LCD_SetLocalization(0x42);
		LCD_SendWord("NAME");
		LCD_SetLocalization(0x14);
		LCD_SendWord("1");
		LCD_SetLocalization(0x54);
		LCD_SendWord("2");
		createInvertedWord("l", 0x15, 1, 1, 2);
		createInvertedWord("l", 0x55, 1, 1, 2);
		LCD_SetLocalization(0x4E);
		LCD_SendWord("Score");
		createInvertedWord("l", 0x21, 1, 1, 2);
		createInvertedWord("l", 0x61, 1, 1, 2);
		createInvertedWord("2", 0x67, 1, 2, 0);
		blockPress = true;
		break;
	case 1:
		hiscoreMenuIndexTemp = hiscoreMenuIndex;
		hiscoreMenuIndex = 50;
		highscoresAnim = false;
		lcd_special_cls();
		LCD_SetLocalization(0x00);
		LCD_SendWord("1");
		LCD_SetLocalization(0x40);
		LCD_SendWord("2");
		LCD_SetLocalization(0x14);
		LCD_SendWord("3");
		LCD_SetLocalization(0x54);
		LCD_SendWord("4");
		createInvertedWord("l", 0x01, 1, 1, 2);
		createInvertedWord("l", 0x41, 1, 1, 2);
		createInvertedWord("l", 0x15, 1, 1, 2);
		createInvertedWord("l", 0x55, 1, 1, 2);

		createInvertedWord("l", 0x0D, 1, 1, 2);
		createInvertedWord("l", 0x4D, 1, 1, 2);
		createInvertedWord("l", 0x21, 1, 1, 2);
		createInvertedWord("l", 0x61, 1, 1, 2);
		blockUp = false;
		blockPress = true;
		break;
	case 2:
		lcd_special_cls();
		LCD_SetLocalization(0x00);
		LCD_SendWord("3");
		LCD_SetLocalization(0x40);
		LCD_SendWord("4");
		LCD_SetLocalization(0x14);
		LCD_SendWord("5");
		LCD_SetLocalization(0x54);
		LCD_SendWord("6");
		createInvertedWord("l", 0x01, 1, 1, 2);
		createInvertedWord("l", 0x41, 1, 1, 2);
		createInvertedWord("l", 0x15, 1, 1, 2);
		createInvertedWord("l", 0x55, 1, 1, 2);

		createInvertedWord("l", 0x0D, 1, 1, 2);
		createInvertedWord("l", 0x4D, 1, 1, 2);
		createInvertedWord("l", 0x21, 1, 1, 2);
		createInvertedWord("l", 0x61, 1, 1, 2);

		hiscoreMenuIndexTemp = hiscoreMenuIndex;
		hiscoreMenuIndex = 50;
		blockPress = true;
		break;
	case 3:
		lcd_special_cls();
		LCD_SetLocalization(0x00);
		LCD_SendWord("5");
		LCD_SetLocalization(0x40);
		LCD_SendWord("6");
		LCD_SetLocalization(0x14);
		LCD_SendWord("7");
		LCD_SetLocalization(0x54);
		LCD_SendWord("8");
		createInvertedWord("l", 0x01, 1, 1, 2);
		createInvertedWord("l", 0x41, 1, 1, 2);
		createInvertedWord("l", 0x15, 1, 1, 2);
		createInvertedWord("l", 0x55, 1, 1, 2);

		createInvertedWord("l", 0x0D, 1, 1, 2);
		createInvertedWord("l", 0x4D, 1, 1, 2);
		createInvertedWord("l", 0x21, 1, 1, 2);
		createInvertedWord("l", 0x61, 1, 1, 2);
		hiscoreMenuIndexTemp = hiscoreMenuIndex;
		hiscoreMenuIndex = 50;
		blockPress = true;
		break;
	case 4:
		lcd_special_cls();
		LCD_SetLocalization(0x00);
		LCD_SendWord("7");
		LCD_SetLocalization(0x40);
		LCD_SendWord("8");
		LCD_SetLocalization(0x14);
		LCD_SendWord("9");

		LCD_SetLocalization(0x54);
		LCD_SendWord("Back");

		createInvertedWord("l", 0x01, 1, 1, 2);
		createInvertedWord("l", 0x41, 1, 1, 2);
		createInvertedWord("l", 0x15, 1, 1, 2);

		createInvertedWord("l", 0x0D, 1, 1, 2);
		createInvertedWord("l", 0x4D, 1, 1, 2);
		createInvertedWord("l", 0x21, 1, 1, 2);

		createInvertedWord("8", 0x67, 1, 2, 0);
		hiscoreMenuIndexTemp = hiscoreMenuIndex;
		hiscoreMenuIndex = 50;
		blockDown = false;
		blockPress = true;
		break;
	case 5:
		lcd_special_cls();
		LCD_SetLocalization(0x00);
		LCD_SendWord("7");
		LCD_SetLocalization(0x40);
		LCD_SendWord("8");
		LCD_SetLocalization(0x14);
		LCD_SendWord("9");

		createInvertedWord("Back", 0x54, 4, 3, 0);

		createInvertedWord("l", 0x01, 1, 1, 2);
		createInvertedWord("l", 0x41, 1, 1, 2);
		createInvertedWord("l", 0x15, 1, 1, 2);

		createInvertedWord("l", 0x0D, 1, 1, 2);
		createInvertedWord("l", 0x4D, 1, 1, 2);
		createInvertedWord("l", 0x21, 1, 1, 2);

		createInvertedWord("8", 0x67, 1, 2, 0);
		hiscoreMenuIndexTemp = hiscoreMenuIndex;
		hiscoreMenuIndex = 50;
		blockDown = true;
		blockPress = false;
		break;
	default:
		break;
	}
	if (Press == GPIO_PIN_RESET) {
		if (hiscoreMenuIndexTemp == 5) {
			mainMenu = true;
			mainMenuIndex = 0;
			blockUp = true;
			blockPress = true;
			hiscoreMenu = false;
			highscoresAnim = false;
		}

	}

}

void creditsAnimation() {
	switch (creditsIndexAnim) {
	case 0:
		reverse2 = false;
		lcd_clear_1();
		LCD_SetLocalization(0x06);
		LCD_SendWord("CREDITS");
		break;
	case 1:
		reverse2 = false;
		break;
	case 2:
		if (!reverse2) {
			LCD_SetLocalization(0x06);
			LCD_SendWord(" ");
			LCD_SetLocalization(0x0C);
			LCD_SendWord(" ");
		}
		break;
	case 3:
		if (!reverse2) {
			LCD_SetLocalization(0x07);
			LCD_SendWord(" ");
			LCD_SetLocalization(0x0B);
			LCD_SendWord(" ");

			LCD_SetLocalization(0x06);
			LCD_SendWord("C");
			LCD_SetLocalization(0x0C);
			LCD_SendWord("S");
		} else {
			LCD_SetLocalization(0x06);
			LCD_SendWord("C");
			LCD_SetLocalization(0x0C);
			LCD_SendWord("S");
		}
		break;
	case 4:
		if (!reverse2) {
			LCD_SetLocalization(0x08);
			LCD_SendWord(" ");
			LCD_SetLocalization(0x0A);
			LCD_SendWord(" ");

			LCD_SetLocalization(0x07);
			LCD_SendWord("R");
			LCD_SetLocalization(0x0B);
			LCD_SendWord("T");
		} else {
			LCD_SetLocalization(0x06);
			LCD_SendWord(" ");
			LCD_SetLocalization(0x0C);
			LCD_SendWord(" ");

			LCD_SetLocalization(0x07);
			LCD_SendWord("R");
			LCD_SetLocalization(0x0B);
			LCD_SendWord("T");
		}
		break;
	case 5:
		if (!reverse2) {
			LCD_SetLocalization(0x09);
			LCD_SendWord(" ");

			LCD_SetLocalization(0x08);
			LCD_SendWord("E");
			LCD_SetLocalization(0x0A);
			LCD_SendWord("I");
		} else {
			LCD_SetLocalization(0x07);
			LCD_SendWord(" ");
			LCD_SetLocalization(0x0B);
			LCD_SendWord(" ");

			LCD_SetLocalization(0x08);
			LCD_SendWord("E");
			LCD_SetLocalization(0x0A);
			LCD_SendWord("I");
		}
		break;
	case 6:
		if (!reverse2) {
			LCD_SetLocalization(0x09);
			LCD_SendWord("D");
		} else {
			LCD_SetLocalization(0x08);
			LCD_SendWord(" ");
			LCD_SetLocalization(0x0A);
			LCD_SendWord(" ");

			LCD_SetLocalization(0x09);
			LCD_SendWord("D");
		}
		break;
	case 7:
		if (!reverse2) {
			LCD_SetLocalization(0x09);
			LCD_SendWord("D");

		} else {
			LCD_SetLocalization(0x09);
			LCD_SendWord(" ");
		}
		break;
	case 8:
		reverse2 = true;
		break;
	default:
		break;
	}

	if (!reverse2)
		creditsIndexAnim++;
	else
		creditsIndexAnim--;

}

void leftArrowAnimation() {
	if (creditsMenuIndexTemp == 1) {
		switch (leftArrowAnimIndex) {
		case 0:
			createInvertedWord("o", 0x4E, 1, 1, 2);
			break;
		case 3:
			LCD_SetLocalization(0x4E);
			LCD_SendWord(" ");
			break;
		default:
			break;
		}
	} else {
		LCD_SetLocalization(0x4E);
		LCD_SendWord(" ");
	}
	if (creditsMenuIndexTemp == 2) {
		switch (leftArrowAnimIndex) {
		case 0:
			createInvertedWord("o", 0x21, 1, 1, 2);
			break;
		case 3:
			LCD_SetLocalization(0x21);
			LCD_SendWord(" ");
			break;
		default:
			break;
		}
	} else {
		LCD_SetLocalization(0x21);
		LCD_SendWord(" ");
	}
	if (creditsMenuIndexTemp == 3) {
		switch (leftArrowAnimIndex) {
		case 0:
			createInvertedWord("o", 0x65, 1, 1, 2);
			break;
		case 3:
			LCD_SetLocalization(0x65);
			LCD_SendWord(" ");
			break;
		default:
			break;
		}
	} else {
		LCD_SetLocalization(0x65);
		LCD_SendWord(" ");
	}
	if (leftArrowAnimIndex == 3) {
		leftArrowAnimIndex = 0;
	} else
		leftArrowAnimIndex++;

}
void credits_Menu() {
	switch (creditsMenuIndex) {
	case 0:
		creditsAnim = true;
		lcd_clear_2();
		lcd_clear_3();
		lcd_clear_4();
		LCD_SetLocalization(0x40);
		LCD_SendWord("Product Owner");
		LCD_SetLocalization(0x14);
		LCD_SendWord("Scrum Master");
		LCD_SetLocalization(0x54);
		LCD_SendWord("Development Team");

		createInvertedWord("2", 0x67, 1, 0, 0);
		blockUp = true;
		blockPress = true;
		creditsMenuIndexTemp = creditsMenuIndex;
		creditsMenuIndex = 50;
		break;
	case 1:
		blockUp = false;
		blockPress = false;
		leftArrowAnim = true;
		creditsMenuIndexTemp = creditsMenuIndex;
		creditsMenuIndex = 50;
		break;
	case 2:
		blockUp = false;
		blockPress = false;
		leftArrowAnim = true;
		creditsMenuIndexTemp = creditsMenuIndex;
		creditsMenuIndex = 50;
		break;
	case 3:
		if (turn) {
			creditsAnim = true;
			lcd_cls();
			LCD_SetLocalization(0x40);
			LCD_SendWord("Product Owner");
			LCD_SetLocalization(0x14);
			LCD_SendWord("Scrum Master");
			LCD_SetLocalization(0x54);
			LCD_SendWord("Development Team");
			createInvertedWord("2", 0x67, 1, 0, 0);
			leftArrowAnim = true;
			turn = false;
		}
		creditsMenuIndexTemp = creditsMenuIndex;
		creditsMenuIndex = 50;
		break;
	case 4:
		lcd_cls();
		creditsAnim = false;
		LCD_SetLocalization(0x00);
		LCD_SendWord("Product Owner");
		LCD_SetLocalization(0x40);
		LCD_SendWord("Scrum Master");
		LCD_SetLocalization(0x14);
		LCD_SendWord("Development Team");
		createInvertedWord("Back", 0x54, 4, 1, 0);
		createInvertedWord("8", 0x67, 1, 0, 0);
		turn = true;
		blockDown = true;
		leftArrowAnim = false;
		creditsMenuIndexTemp = creditsMenuIndex;
		creditsMenuIndex = 50;
		break;
	default:
		break;
	}
	if (Press == GPIO_PIN_RESET) {
		if (creditsMenuIndexTemp == 4) {
			mainMenu = true;
			mainMenuIndex = 0;
			blockUp = true;
			blockPress = true;
			hiscoreMenu = false;
			highscoresAnim = false;
			creditsMenu = false;
		}
		if (creditsMenuIndexTemp == 1) {
			creditsMenu = false;
			creditsMenuMarked = true;
			leftArrowAnim = false;
			creditsMenuIndexTemp2 = 1;
		}
		if (creditsMenuIndexTemp == 2) {
			creditsMenu = false;
			creditsMenuMarked = true;
			leftArrowAnim = false;
			creditsMenuIndexTemp2 = 2;
		}
		if (creditsMenuIndexTemp == 3) {
			creditsMenu = false;
			creditsMenuMarked = true;
			leftArrowAnim = false;
			creditsMenuIndexTemp2 = 3;
		}
	}
}

void credits_Menu_Marked() {
	switch (creditsMenuIndexTemp2) {
	case 1:
		blockUp = true;
		blockPress = false;
		lcd_cls();
		LCD_SetLocalization(0x03);
		LCD_SendWord("Product Owner");
		LCD_SetLocalization(0x40);
		LCD_SendWord("Zbigniew Jaryst");
		LCD_SetLocalization(0x54);
		LCD_SendWord("Back");
		creditsAnim = false;
		leftArrowAnim = false;
		creditsMenu = false;
		creditsMenuIndexTemp = creditsMenuIndexTemp2;
		creditsMenuIndexTemp2 = 50;
		break;
	case 2:
		blockUp = true;
		blockDown = true;
		blockPress = false;
		lcd_cls();
		LCD_SetLocalization(0x04);
		LCD_SendWord("Scrum Master");
		LCD_SetLocalization(0x40);
		LCD_SendWord("Aleksander Galganski");
		LCD_SetLocalization(0x54);
		LCD_SendWord("Back");
		creditsAnim = false;
		leftArrowAnim = false;
		creditsMenu = false;

		creditsMenuIndexTemp = creditsMenuIndexTemp2;
		creditsMenuIndexTemp2 = 50;
		break;
	case 3:
		blockUp = true;
		blockDown = true;
		blockPress = false;
		lcd_cls();
		LCD_SetLocalization(0x02);
		LCD_SendWord("Development Team");
		LCD_SetLocalization(0x40);
		LCD_SendWord("Michal Kapala");
		LCD_SetLocalization(0x14);
		LCD_SendWord("Bartosz Czarnecki");
		LCD_SetLocalization(0x54);
		LCD_SendWord("Back");
		leftArrowAnim = false;
		creditsMenu = false;
		creditsAnim = false;
		creditsMenuIndexTemp = creditsMenuIndexTemp2;
		creditsMenuIndexTemp2 = 50;
		break;
	default:
		break;
	}
	if (backPicked) {
		createInvertedWord("Back", 0x54, 4, 1, 0);
		if (Press == GPIO_PIN_RESET) {
			creditsMenu = true;
			creditsMenuMarked = false;
			creditsMenuIndex = 0;
			backPicked = false;
		}
	}
}

