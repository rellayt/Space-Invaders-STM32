/*
 * loading.c
 *
 *  Created on: May 7, 2020
 *      Author: rella
 */
#include "stdbool.h"
#include "loading.h"
volatile int iDot = 0, iSpace = -1, iSpace2 = 0;
bool dots = false, miniDuel = false, enemySpace = false;
bool gameStarted = false;
void printDots() {
	switch (iDot) {
	case 0:
		LCD_SetLocalization(0x21);
		LCD_SendWord(".");
		lcd_clear_1();
		break;
	case 1:
		LCD_SetLocalization(0x22);
		LCD_SendWord(".");
		break;
	case 2:
		LCD_SetLocalization(0x23);
		LCD_SendWord(".");
		break;
	case 3:
		LCD_SetLocalization(0x21);
		LCD_SendWord("   ");
		break;
	case 4:
		LCD_SetLocalization(0x21);
		LCD_SendWord(".");
		lcd_clear_1();
		break;
	case 5:
		LCD_SetLocalization(0x22);
		LCD_SendWord(".");
		break;
	case 6:
		LCD_SetLocalization(0x23);
		LCD_SendWord(".");
		break;
	case 7:
		LCD_SetLocalization(0x21);
		LCD_SendWord("   ");
		break;
	default:
		break;
	}
	if (iDot >= 0 && iDot < 7) {
		iDot++;

	} else {
		iDot = 0;
		dots = false;
	}
}
void enemyAboveWord() {
	switch (iSpace2) {
	case 0:
		lcd_clear_1();
		createInvertedWord("a", 0x46, 1, 4, 1);
		createInvertedWord("f", 0x47, 1, 5, 1);
		break;
	case 1:
		createInvertedWord("b", 0x46, 1, 4, 1);
		createInvertedWord("g", 0x47, 1, 5, 1);
		createInvertedWord("k", 0x48, 1, 6, 1);
		break;
	case 2:
		createInvertedWord("3", 0x46, 1, 4, 2);
		createInvertedWord("8", 0x47, 1, 5, 2);
		createInvertedWord("B", 0x48, 1, 6, 2);
		break;
	case 3:
		createInvertedWord("4", 0x46, 1, 4, 2);
		createInvertedWord("9", 0x47, 1, 5, 2);
		createInvertedWord("C", 0x48, 1, 6, 2);
		break;
	case 4:
		createInvertedWord("e", 0x46, 1, 4, 1);
		createInvertedWord("j", 0x47, 1, 5, 1);
		createInvertedWord("n", 0x48, 1, 6, 1);
		break;
	case 5:
		LCD_SetLocalization(0x46);
		LCD_SendWord(" ");
		createInvertedWord("a", 0x47, 1, 5, 1);
		createInvertedWord("f", 0x48, 1, 6, 1);
		break;
	case 6:
		createInvertedWord("1", 0x47, 1, 4, 2);
		createInvertedWord("6", 0x48, 1, 5, 2);
		break;
	case 7:
		createInvertedWord("2", 0x47, 1, 4, 2);
		createInvertedWord("7", 0x48, 1, 5, 2);
		createInvertedWord("A", 0x49, 1, 6, 2);
		break;
	case 8:
		createInvertedWord("c", 0x47, 1, 4, 1);
		createInvertedWord("h", 0x48, 1, 5, 1);
		createInvertedWord("l", 0x49, 1, 6, 1);
		break;
	case 9:
		createInvertedWord("d", 0x47, 1, 4, 1);
		createInvertedWord("i", 0x48, 1, 5, 1);
		createInvertedWord("m", 0x49, 1, 6, 1);
		break;
	case 10:
		createInvertedWord("5", 0x47, 1, 4, 2);
		createInvertedWord("0", 0x48, 1, 5, 2);
		createInvertedWord("D", 0x49, 1, 6, 2);
		break;
	case 11:
		LCD_SetLocalization(0x47);
		LCD_SendWord(" ");
		createInvertedWord("1", 0x48, 1, 5, 2);
		createInvertedWord("6", 0x49, 1, 6, 2);
		break; //3
	case 12:
		lcd_clear_1();
		createInvertedWord("a", 0x48, 1, 4, 1);
		createInvertedWord("f", 0x49, 1, 5, 1);
		break;
	case 13:
		createInvertedWord("b", 0x48, 1, 4, 1);
		createInvertedWord("g", 0x49, 1, 5, 1);
		createInvertedWord("k", 0x4A, 1, 6, 1);
		break;
	case 14:
		createInvertedWord("3", 0x48, 1, 4, 2);
		createInvertedWord("8", 0x49, 1, 5, 2);
		createInvertedWord("B", 0x4A, 1, 6, 2);
		break;
	case 15:
		createInvertedWord("d", 0x48, 1, 4, 1);
		createInvertedWord("i", 0x49, 1, 5, 1);
		createInvertedWord("m", 0x4A, 1, 6, 1);
		break;
	case 16:
		createInvertedWord("e", 0x48, 1, 4, 1);
		createInvertedWord("j", 0x49, 1, 5, 1);
		createInvertedWord("n", 0x4A, 1, 6, 1);
		break;
	case 17:
		LCD_SetLocalization(0x48);
		LCD_SendWord(" ");
		createInvertedWord("1", 0x49, 1, 5, 2);
		createInvertedWord("6", 0x4A, 1, 6, 2);
		break;
	case 18:
		gameStarted = true;
		lcd_cls();
		break;
	default:
		break;
	}
	if (iSpace2 >= 0 && iSpace2 < 18) {
		iSpace2++;
	} else {
		iSpace2 = 0;
		enemySpace = false;
	}
}
void miniDuelOfSpaces() {
	switch (iSpace) {
	case 1:
		createInvertedWord("S", 0x15, 1, 0, 1);

		createInvertedWord("L", 0x41, 1, 1, 1);
		createInvertedWord("R", 0x42, 1, 2, 1);
		break;
	case 2:
		createInvertedWord("1", 0x15, 1, 0, 1);
		createInvertedWord("6", 0x16, 1, 3, 1);
		break;
	case 3:
		createInvertedWord("2", 0x15, 1, 0, 1);
		createInvertedWord("7", 0x16, 1, 3, 1);

		break;
	case 4:
		createInvertedWord("3", 0x15, 1, 0, 1);
		createInvertedWord("8", 0x16, 1, 3, 1);

		createInvertedWord("B", 0x41, 1, 1, 1);
		createInvertedWord("A", 0x42, 1, 2, 1);
		break;
	case 5:
		createInvertedWord("4", 0x15, 1, 0, 1);
		createInvertedWord("9", 0x16, 1, 3, 1);
		break;
	case 6:
		createInvertedWord("5", 0x15, 1, 0, 1);
		createInvertedWord("S", 0x16, 1, 3, 1);
		break;
	case 7:
		LCD_SetLocalization(0x15);
		LCD_SendWord(" ");
		createInvertedWord("C", 0x41, 1, 1, 1);
		break;
	case 8:
		createInvertedWord("D", 0x41, 1, 1, 1);
		break;
	case 9:
		LCD_SetLocalization(0x41);
		LCD_SendWord("  ");
		break;
	default:
		break;

	}
	if (iSpace >= -2 && iSpace < 9) {
		iSpace++;
	}
}
void resetLoadingVariables(){
	iDot = 0;
	iSpace = -1;
	iSpace2 = 0;
	dots = false;
	miniDuel = false;
	enemySpace = false;
	gameStarted = false;
}


