#include "LCDgameService.h"

bool lcdInitSample = false, LCDtriedAgain = false;
int LCDtitleAnimationStep = 0, waitToDisplayTryAgain = 0,
		LCDtryAgainAnimationStep = 0;
bool reverseLCDtitleAnimation = false;
char LCDtryAgainOption = 'Y', LCDtryAgainOptionTemp = 'Y';
bool tryAgain = true;

void LCD_gameStarted() {
	if (!lcdInitSample) {
		LCD_SetLocalization(0x03);
		LCD_SendWord("Space Invaders");
		LCD_SetLocalization(0x40);
		LCD_SendWord("Level: ");
		LCD_SetLocalization(0x47);
		switch (selectedLevel) {
		case 'E':
			LCD_SendWord("Easy");
			break;
		case 'M':
			LCD_SendWord("Medium");
			break;
		case 'H':
			LCD_SendWord("Hard");
			break;
		default:
			break;
		}
		LCD_SetLocalization(0x14);
		LCD_SendWord("Score: 0");
		LCD_SetLocalization(0x54);
		LCD_SendWord("Time: 0s");
		lcdInitSample = true;
	}
	if (currentScore != newScore) {
		currentScore = newScore;
		char word[4];
		LCD_SetLocalization(0x1B);
		sprintf(word, "%d", currentScore);
		LCD_SendWord(word);
	}
	if (currentGameTimeCounter != newGameTimeCounter) {
		currentGameTimeCounter = newGameTimeCounter;
		char word[4];
		if (currentGameTimeCounter >= 0 && currentGameTimeCounter <= 9) {
			if (currentGameTimeCounter == 0) {
				LCD_SetLocalization(0x5B);
				LCD_SendWord("s");
			}
			sprintf(word, "%d", currentGameTimeCounter);
			LCD_SetLocalization(0x5A);
			LCD_SendWord(word);

		} else if (currentGameTimeCounter >= 10
				&& currentGameTimeCounter <= 99) {
			if (currentGameTimeCounter == 10) {
				LCD_SetLocalization(0x5C);
				LCD_SendWord("s");
			}
			sprintf(word, "%d", currentGameTimeCounter);
			LCD_SetLocalization(0x5A);
			LCD_SendWord(word);
		} else if (currentGameTimeCounter >= 100
				&& currentGameTimeCounter <= 999) {
			if (currentGameTimeCounter == 100) {
				LCD_SetLocalization(0x5D);
				LCD_SendWord("s");
			}
			sprintf(word, "%d", currentGameTimeCounter);
			LCD_SetLocalization(0x5A);
			LCD_SendWord(word);
		}
	}
}
void LCD_gameStartedTitleAnimation() {
	if (lcdInitSample) {
		switch (LCDtitleAnimationStep) {
		case 0:
			LCD_SetLocalization(0x03);
			LCD_SendWord("S");
			break;
		case 1:
			LCD_SetLocalization(0x03);
			LCD_SendWord(" ");
			break;
		case 2:
			LCD_SetLocalization(0x03);
			LCD_SendWord("S");
			LCD_SetLocalization(0x04);
			LCD_SendWord(" ");
			break;
		case 3:
			LCD_SetLocalization(0x04);
			LCD_SendWord("p");
			LCD_SetLocalization(0x05);
			LCD_SendWord(" ");
			break;
		case 4:
			LCD_SetLocalization(0x05);
			LCD_SendWord("a");
			LCD_SetLocalization(0x06);
			LCD_SendWord(" ");
			break;
		case 5:
			LCD_SetLocalization(0x06);
			LCD_SendWord("c");
			LCD_SetLocalization(0x07);
			LCD_SendWord(" ");
			break;
		case 6:
			LCD_SetLocalization(0x07);
			LCD_SendWord("e");
			break;
		case 7:
			LCD_SetLocalization(0x09);
			LCD_SendWord(" ");
			break;
		case 8:
			LCD_SetLocalization(0x09);
			LCD_SendWord("I");
			LCD_SetLocalization(0x0A);
			LCD_SendWord(" ");
			break;
		case 9:
			LCD_SetLocalization(0x0A);
			LCD_SendWord("n");
			LCD_SetLocalization(0x0B);
			LCD_SendWord(" ");
			break;
		case 10:
			LCD_SetLocalization(0x0B);
			LCD_SendWord("v");
			LCD_SetLocalization(0x0C);
			LCD_SendWord(" ");
			break;
		case 11:
			LCD_SetLocalization(0x0C);
			LCD_SendWord("a");
			LCD_SetLocalization(0x0D);
			LCD_SendWord(" ");
			break;
		case 12:
			LCD_SetLocalization(0x0D);
			LCD_SendWord("d");
			LCD_SetLocalization(0x0E);
			LCD_SendWord(" ");
			break;
		case 13:
			LCD_SetLocalization(0x0E);
			LCD_SendWord("e");
			LCD_SetLocalization(0x0F);
			LCD_SendWord(" ");
			break;
		case 14:
			LCD_SetLocalization(0x0F);
			LCD_SendWord("r");
			LCD_SetLocalization(0x10);
			LCD_SendWord(" ");
			break;
		case 15:
			LCD_SetLocalization(0x10);
			LCD_SendWord("s");
			break;
		case 16:
			break;
		case 17:
			LCD_SetLocalization(0x10);
			LCD_SendWord(" ");
			break;
		case 18:
			LCD_SetLocalization(0x10);
			LCD_SendWord("s");
			LCD_SetLocalization(0x0F);
			LCD_SendWord(" ");
			break;
		case 19:
			LCD_SetLocalization(0x0F);
			LCD_SendWord("r");
			LCD_SetLocalization(0x0E);
			LCD_SendWord(" ");
			break;
		case 20:
			LCD_SetLocalization(0x0E);
			LCD_SendWord("e");
			LCD_SetLocalization(0x0D);
			LCD_SendWord(" ");
			break;
		case 21:
			LCD_SetLocalization(0x0D);
			LCD_SendWord("d");
			LCD_SetLocalization(0x0C);
			LCD_SendWord(" ");
			break;
		case 22:
			LCD_SetLocalization(0x0C);
			LCD_SendWord("a");
			LCD_SetLocalization(0x0B);
			LCD_SendWord(" ");
			break;
		case 23:
			LCD_SetLocalization(0x0B);
			LCD_SendWord("v");
			LCD_SetLocalization(0x0A);
			LCD_SendWord(" ");
			break;
		case 24:
			LCD_SetLocalization(0x0A);
			LCD_SendWord("n");
			LCD_SetLocalization(0x09);
			LCD_SendWord(" ");
			break;
		case 25:
			LCD_SetLocalization(0x09);
			LCD_SendWord("I");
			break;
		case 26:
			LCD_SetLocalization(0x07);
			LCD_SendWord(" ");
			break;
		case 27:
			LCD_SetLocalization(0x07);
			LCD_SendWord("e");
			LCD_SetLocalization(0x06);
			LCD_SendWord(" ");
			break;
		case 28:
			LCD_SetLocalization(0x06);
			LCD_SendWord("c");
			LCD_SetLocalization(0x05);
			LCD_SendWord(" ");
			break;
		case 29:
			LCD_SetLocalization(0x05);
			LCD_SendWord("a");
			LCD_SetLocalization(0x04);
			LCD_SendWord(" ");
			break;
		case 30:
			LCD_SetLocalization(0x04);
			LCD_SendWord("p");
			LCD_SetLocalization(0x03);
			LCD_SendWord(" ");
			break;
		case 31:
			LCD_SetLocalization(0x03);
			LCD_SendWord("S");
			break;
		default:
			break;
		}
		LCDtitleAnimationStep++;
		if (LCDtitleAnimationStep == 32) {
			LCDtitleAnimationStep = -1;
		}
	}

}
void LCD_tryAgain() {
	lcd_clear_2();
	lcd_clear_3();
	lcd_clear_4();
	LCD_SetLocalization(0x54);
	LCD_SendWord("Score: ");
	char word[4];
	sprintf(word, "%d", currentScore);
	LCD_SetLocalization(0x5B);
	LCD_SendWord(word);
	LCD_SetLocalization(0x45);
	LCD_SendWord("Try again?");
	LCD_SetLocalization(0x18);
	LCD_SendWord("Yes");
	LCD_SetLocalization(0x22);
	LCD_SendWord("No");
	LCDtriedAgain = true;
}
void tryAgainCheckForSelectedOption() {
	if (LEFT()) {
		if (LCDtryAgainOption != LCDtryAgainOptionTemp) {
			LCDtryAgainOptionTemp = LCDtryAgainOption;
			LCD_SetLocalization(0x22);
			LCD_SendWord("No");
			LCDtryAgainAnimationStep = 0;
		}
		LCDtryAgainOption = 'Y';
	}
	if (RIGHT()) {
		if (LCDtryAgainOption != LCDtryAgainOptionTemp) {
			LCDtryAgainOptionTemp = LCDtryAgainOption;
			LCD_SetLocalization(0x18);
			LCD_SendWord("Yes");
			LCDtryAgainAnimationStep = 0;
		}
		LCDtryAgainOption = 'N';
	}
}
void tryAgainSelectedOptionAnimation() {
	switch (LCDtryAgainAnimationStep) {
	case 0:
		switch (LCDtryAgainOption) {
		case 'Y':
			LCD_SetLocalization(0x18);
			createInvertedWord("Yes", 0x18, 3, 0, 0);
			blockPress = false;
			blockRight = false;
			blockLeft = false;
			break;
		case 'N':
			LCD_SetLocalization(0x22);
			createInvertedWord("No", 0x22, 3, 0, 0);
			blockPress = false;
			blockRight = false;
			blockLeft = false;
			break;
		default:
			break;

		}
		break;
	case 1:
		switch (LCDtryAgainOption) {
		case 'Y':
			LCD_SetLocalization(0x18);
			LCD_SendWord("   ");
			break;
		case 'N':
			LCD_SetLocalization(0x22);
			LCD_SendWord("  ");
			break;
		default:
			break;
		}
		break;
	default:
		break;
	}
}
void LCDcheckExecuteOption() {
	switch (LCDtryAgainOption) {
	case 'Y':
		lcd_clear_2();
		lcd_clear_3();
		lcd_clear_4();
		diodeArrayInit();
		playerRandomPos = 0;
		playerInitialized = false;
		initPlayerIndex = 0;
		playerSetPosition = false;
		playerActivateLeft = false;
		playerActivateRight = false;
		playerSpawn = ' ';
		playerDirection = ' ';
		playerNewMove = false;
		gameOver = false;
		initLineStep = -2;
		enemyLineCount = -3;
		enemyTotalCount = -5;
		blockInitEnemy = false;
		blockInitFirstLine = false;
		enemyInitialized = false;
		newRound = true;
		enemyActivateShoot_1 = false;
		enemyActivateShoot_2 = false;
		enemyActivateShoot_3 = false;
		enemyActivateShoot_4 = false;
		enemyShootInit_1 = true;
		enemyShootInit_2 = true;
		enemyShootInit_3 = true;
		enemyShootInit_4 = true;
		enemyShootFirstDiode_1 = true;
		enemyShootFirstDiode_2 = true;
		enemyShootFirstDiode_3 = true;
		enemyShootFirstDiode_4 = true;
		lcdInitSample = false;
		LCDtriedAgain = false;
		LCDtitleAnimationStep = 0;
		waitToDisplayTryAgain = 0;
		LCDtryAgainAnimationStep = 0;
		reverseLCDtitleAnimation = false;
		currentScore = 0;
		newScore = 0;
		reverseLED = false;
		themeID = 0;
		themeID_temp = 0;
		newGameTimeCounter = 0;
		currentGameTimeCounter = 0;
		gameOver_reset();
		animationRound = 11;
		lcdInitSample = false;
		LCDtriedAgain = false;
		tryAgain = true;
		LCDtryAgainOption = 'Y';
		LCDtryAgainOptionTemp = 'Y';
		gameRound = 1;
		gameOverDisappear = 0;
		enableGameOver = true;
		break;
	case 'N':
		diodeArrayInit();
		playerRandomPos = 0;
		playerInitialized = false;
		initPlayerIndex = 0;
		playerSetPosition = false;
		playerActivateLeft = false;
		playerActivateRight = false;
		playerSpawn = ' ';
		playerDirection = ' ';
		playerNewMove = false;
		gameOver = false;
		initLineStep = -2;
		enemyLineCount = -3;
		enemyTotalCount = -5;
		blockInitEnemy = false;
		blockInitFirstLine = false;
		enemyInitialized = false;
		newRound = true;
		enemyActivateShoot_1 = false;
		enemyActivateShoot_2 = false;
		enemyActivateShoot_3 = false;
		enemyActivateShoot_4 = false;
		enemyShootInit_1 = true;
		enemyShootInit_2 = true;
		enemyShootInit_3 = true;
		enemyShootInit_4 = true;
		enemyShootFirstDiode_1 = true;
		enemyShootFirstDiode_2 = true;
		enemyShootFirstDiode_3 = true;
		enemyShootFirstDiode_4 = true;
		lcdInitSample = false;
		LCDtriedAgain = false;
		LCDtitleAnimationStep = 0;
		waitToDisplayTryAgain = 0;
		LCDtryAgainAnimationStep = 0;
		reverseLCDtitleAnimation = false;
		currentScore = 0;
		newScore = 0;
		reverseLED = false;
		themeID = 0;
		themeID_temp = 0;
		newGameTimeCounter = 0;
		currentGameTimeCounter = 0;
		gameOver_reset();
		animationRound = 11;
		lcdInitSample = false;
		LCDtriedAgain = false;
		tryAgain = true;
		LCDtryAgainOption = 'Y';
		LCDtryAgainOptionTemp = 'Y';
		lcd_cls();
		gameStarted = false;
		menuResetVariables();
		gameRound = 1;
		gameOverDisappear = 0;
		enableGameOver = true;
		break;
	default:
		break;
	}
}
