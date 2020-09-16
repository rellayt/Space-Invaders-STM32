/* USER CODE BEGIN Header */
/**
 ******************************************************************************
 * @file           : main.c
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "i2c-lcd.h"
#include "lcdchars.h"
#include "lcdcommands.h"
#include "intro.h"
#include "loading.h"
#include "joystick.h"
#include "Menu.h"
#include "stdbool.h"
#include <stdlib.h>
#include <string.h>
#include "ws2812b.h"
#include "spi.h"
#include "dma.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "playerControl.h"
#include "diode.h"
#include "GlobalDefines.h"
#include "playerShootingControl.h"
#include "enemyShootingControl.h"
#include "enemyControl.h"
#include "objectRefresh.h"
#include "game.h"

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
ADC_HandleTypeDef hadc1;
DMA_HandleTypeDef hdma_adc1;

I2C_HandleTypeDef hi2c2;

TIM_HandleTypeDef htim2;
TIM_HandleTypeDef htim3;
TIM_HandleTypeDef htim4;
TIM_HandleTypeDef htim5;
TIM_HandleTypeDef htim6;
TIM_HandleTypeDef htim7;
TIM_HandleTypeDef htim8;
TIM_HandleTypeDef htim9;
TIM_HandleTypeDef htim10;
TIM_HandleTypeDef htim11;
TIM_HandleTypeDef htim12;
TIM_HandleTypeDef htim13;

/* USER CODE BEGIN PV */
uint32_t VR[2];

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
/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_ADC1_Init(void);
static void MX_I2C2_Init(void);
static void MX_TIM3_Init(void);
static void MX_TIM4_Init(void);
static void MX_TIM2_Init(void);
static void MX_TIM5_Init(void);
static void MX_TIM6_Init(void);
static void MX_TIM7_Init(void);
static void MX_TIM8_Init(void);
static void MX_TIM9_Init(void);
static void MX_TIM10_Init(void);
static void MX_TIM11_Init(void);
static void MX_TIM12_Init(void);
static void MX_TIM13_Init(void);
/* USER CODE BEGIN PFP */
struct Diode DiodeArray[256];

bool lcdInitSample = false, LCDtriedAgain = false;
int LCDtitleAnimationStep = 0, waitToDisplayTryAgain = 0,
		LCDtryAgainAnimationStep = 0;
bool reverseLCDtitleAnimation = false;
char LCDtryAgainOption = 'Y', LCDtryAgainOptionTemp = 'Y';
bool tryAgain = true;
void LCD_gameStarted() {
	if (!lcdInitSample) {
		selectedLevel = 'E';
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
	LCD_Clear_2
	;
	LCD_Clear_3
	;
	LCD_Clear_4
	;
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
		LCD_Clear_2
		;
		LCD_Clear_3
		;
		LCD_Clear_4
		;
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
		LCDtitleAnimationStep = 0;
		waitToDisplayTryAgain = 0;
		LCDtryAgainAnimationStep = 0;
		reverseLCDtitleAnimation = false;
		break;
	case 'N':

		break;
	default:
		break;
	}
}
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim) {
//PERIOD: 5499
	if (htim->Instance == TIM2) {
//		if(!gameStarted)
		MENU_Animation_TIM2();
/*		if (!playerInitialized && !gameOver) {
			initPlayer(VR);
			initPlayerIndex++;
			blockPress = true;
			blockLeft = true;
			blockRight = true;
			if (initPlayerIndex > 2) {
				playerInitialized = true;
				blockPress = false;
				blockLeft = false;
				blockRight = false;
			}
		}
		if (enemyInitialized && !gameOver) {
			newRound = false;
			for (int i = 0; i < 70; i++) {
				enemyMovement();
			}
		} else if (!gameOver && newRound) {
			enemyInitialization();
		}
		if (gameOver && waitToDisplayTryAgain <= 3) {
			waitToDisplayTryAgain++;
			blockJoystick();
		}*/
	}

//PERIOD: 299
	if (htim->Instance == TIM3) {
		getJoystickDirection(VR);
		getJoystickLed();
		Press = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_3);
//		if (enemyTotalCount < 40 && !gameOver) {
//			initEnemy();
//		}
//
//		if (!gameOver) {
//			LCD_gameStarted();
//		}
//
//		if (gameOver && !LCDtriedAgain && waitToDisplayTryAgain == 3) {
//			LCD_tryAgain();
//		} else if (gameOver && LCDtriedAgain && waitToDisplayTryAgain == 4) {
//			tryAgainCheckForSelectedOption();
//		}
//		if (tryAgain) {
//			LCDcheckExecuteOption();
//			tryAgain = false;
//		}
		/*		if (UP()) {
		 }
		 if (DOWN()) {
		 }
		 if (LEFT()) {

		 }
		 if (RIGHT()) {
		 }*/
//		if (enemyInitialized && !gameOver) {
//			refreshEnemies();
//			refreshBullets();
//			checkForPlayerHit();
//			checkForRoundOver();
//		}
//		if (!gameOver && (!blockLeft || !blockRight)) {
//			playerPositioning();
//			refreshPlayer();
//		}
//		if (playerStartShot && !gameOver) {
//			checkForBulletCollision();
//			checkForEnemyHit();
//		}
//		Press = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_3);
//
//		if (Press == GPIO_PIN_RESET && !blockPress && !playerStartShot) {
//			if (!gameOver) {
//				playerBulletRoute = 0;
//				playerStartShot = true;
//			} else {
//				tryAgain = true;
//			}
//
//		}
	}

//PERIOD: 2599
	if (htim->Instance == TIM4) {
		MENU();

	}

//PERIOD: 1899
	if (htim->Instance == TIM5) {
		MENU_Animation_TIM5();

//		if (enemyInitialized && !gameOver) {
//			if (enemyActivateShoot_1) {
//				enemyShooting_1();
//				enemyDiodeShootRoute_1++;
//			}
//			if (enemyActivateShoot_2) {
//				enemyShooting_2();
//				enemyDiodeShootRoute_2++;
//
//			}
//			if (enemyActivateShoot_3) {
//				enemyShooting_3();
//				enemyDiodeShootRoute_3++;
//			}
//			if (enemyActivateShoot_4) {
//				enemyShooting_4();
//				enemyDiodeShootRoute_4++;
//			}
//		}
//		LCD_gameStartedTitleAnimation();
	}
//PERIOD: 999
	if (htim->Instance == TIM6) {
//		if (!gameOver) {
//			for (uint16_t i = 0; i < 256; i++)
//				theme(i);
//		}
//		SpaceInvaders_gameOver();
	}
//PERIOD: 4799
	if (htim->Instance == TIM7) {
//		playerNewMove = true;

	}

//1s
	if (htim->Instance == TIM8) {
//		if (enemyInitialized && !gameOver) {
//			newGameTimeCounter++;
//		}
	}
	if (htim->Instance == TIM9) {

	}

//PERIOD: 799
	if (htim->Instance == TIM10) {

//		if (enemyInitialized && !gameOver) {
//			initEnemyShooting();
//		}
//		//Player shooting
//		if (playerStartShot && !gameOver && enemyInitialized && !newRound) {
//			playerShot();
//			playerBulletRoute++;
//		}
	}
	if (htim->Instance == TIM11) {

	}
	if (htim->Instance == TIM12) {
//		Yes/No animation
//		if (gameOver && LCDtriedAgain && waitToDisplayTryAgain == 4) {
//			tryAgainSelectedOptionAnimation();
//			if (LCDtryAgainAnimationStep == 0) {
//				LCDtryAgainAnimationStep++;
//			} else if (LCDtryAgainAnimationStep == 1) {
//				LCDtryAgainAnimationStep--;
//			}
//		}
	}
	if (htim->Instance == TIM13) {

	}
}

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
 * @brief  The application entry point.
 * @retval int
 */
int main(void) {
	/* USER CODE BEGIN 1 */

	/* USER CODE END 1 */

	/* MCU Configuration--------------------------------------------------------*/

	/* Reset of all peripherals, Initializes the Flash interface and the Systick. */
	HAL_Init();

	/* USER CODE BEGIN Init */

	/* USER CODE END Init */

	/* Configure the system clock */
	SystemClock_Config();

	/* USER CODE BEGIN SysInit */

	/* USER CODE END SysInit */

	/* Initialize all configured peripherals */
	MX_GPIO_Init();
	MX_DMA_Init();
	MX_ADC1_Init();
	MX_I2C2_Init();
	MX_TIM3_Init();
	MX_TIM4_Init();
	MX_TIM2_Init();
	MX_TIM5_Init();
	MX_SPI1_Init();
	MX_TIM6_Init();
	MX_TIM7_Init();
	MX_TIM8_Init();
	MX_TIM9_Init();
	MX_TIM10_Init();
	MX_TIM11_Init();
	MX_TIM12_Init();
	MX_TIM13_Init();
	/* USER CODE BEGIN 2 */

	lcd_init();
	HAL_TIM_Base_Start_IT(&htim2);
	HAL_TIM_Base_Start_IT(&htim3);
	HAL_TIM_Base_Start_IT(&htim4);
	HAL_TIM_Base_Start_IT(&htim5);
	HAL_TIM_Base_Start_IT(&htim6);
	HAL_TIM_Base_Start_IT(&htim7);
	HAL_TIM_Base_Start_IT(&htim8);
	HAL_TIM_Base_Start_IT(&htim9);
	HAL_TIM_Base_Start_IT(&htim10);
	HAL_TIM_Base_Start_IT(&htim11);
	HAL_TIM_Base_Start_IT(&htim12);
	HAL_TIM_Base_Start_IT(&htim13);
	HAL_ADC_Start_DMA(&hadc1, VR, 2);
	setAllPixelColor(0, 0, 0);
	diodeArrayInit();
	srand((int) VR[0] + (int) VR[1] + 5);

	/* USER CODE END 2 */

	/* Infinite loop */
	/* USER CODE BEGIN WHILE */
	initLEDMOSI();
	while (1) {

		/* USER CODE END WHILE */

		/* USER CODE BEGIN 3 */

	}
	/* USER CODE END 3 */
}

/**
 * @brief System Clock Configuration
 * @retval None
 */
void SystemClock_Config(void) {
	RCC_OscInitTypeDef RCC_OscInitStruct = { 0 };
	RCC_ClkInitTypeDef RCC_ClkInitStruct = { 0 };
	RCC_PeriphCLKInitTypeDef PeriphClkInitStruct = { 0 };

	/** Configure the main internal regulator output voltage
	 */
	__HAL_RCC_PWR_CLK_ENABLE();
	__HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);
	/** Initializes the CPU, AHB and APB busses clocks
	 */
	RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
	RCC_OscInitStruct.HSEState = RCC_HSE_ON;
	RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
	RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
	RCC_OscInitStruct.PLL.PLLM = 4;
	RCC_OscInitStruct.PLL.PLLN = 192;
	RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
	RCC_OscInitStruct.PLL.PLLQ = 2;
	if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK) {
		Error_Handler();
	}
	/** Activate the Over-Drive mode
	 */
	if (HAL_PWREx_EnableOverDrive() != HAL_OK) {
		Error_Handler();
	}
	/** Initializes the CPU, AHB and APB busses clocks
	 */
	RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK
			| RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2;
	RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
	RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
	RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
	RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

	if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_6) != HAL_OK) {
		Error_Handler();
	}
	PeriphClkInitStruct.PeriphClockSelection = RCC_PERIPHCLK_I2C2;
	PeriphClkInitStruct.I2c2ClockSelection = RCC_I2C2CLKSOURCE_PCLK1;
	if (HAL_RCCEx_PeriphCLKConfig(&PeriphClkInitStruct) != HAL_OK) {
		Error_Handler();
	}
}

/**
 * @brief ADC1 Initialization Function
 * @param None
 * @retval None
 */
static void MX_ADC1_Init(void) {

	/* USER CODE BEGIN ADC1_Init 0 */

	/* USER CODE END ADC1_Init 0 */

	ADC_ChannelConfTypeDef sConfig = { 0 };

	/* USER CODE BEGIN ADC1_Init 1 */

	/* USER CODE END ADC1_Init 1 */
	/** Configure the global features of the ADC (Clock, Resolution, Data Alignment and number of conversion)
	 */
	hadc1.Instance = ADC1;
	hadc1.Init.ClockPrescaler = ADC_CLOCK_SYNC_PCLK_DIV4;
	hadc1.Init.Resolution = ADC_RESOLUTION_12B;
	hadc1.Init.ScanConvMode = ADC_SCAN_ENABLE;
	hadc1.Init.ContinuousConvMode = ENABLE;
	hadc1.Init.DiscontinuousConvMode = DISABLE;
	hadc1.Init.ExternalTrigConvEdge = ADC_EXTERNALTRIGCONVEDGE_NONE;
	hadc1.Init.ExternalTrigConv = ADC_SOFTWARE_START;
	hadc1.Init.DataAlign = ADC_DATAALIGN_RIGHT;
	hadc1.Init.NbrOfConversion = 2;
	hadc1.Init.DMAContinuousRequests = ENABLE;
	hadc1.Init.EOCSelection = ADC_EOC_SINGLE_CONV;
	if (HAL_ADC_Init(&hadc1) != HAL_OK) {
		Error_Handler();
	}
	/** Configure for the selected ADC regular channel its corresponding rank in the sequencer and its sample time.
	 */
	sConfig.Channel = ADC_CHANNEL_4;
	sConfig.Rank = ADC_REGULAR_RANK_1;
	sConfig.SamplingTime = ADC_SAMPLETIME_480CYCLES;
	if (HAL_ADC_ConfigChannel(&hadc1, &sConfig) != HAL_OK) {
		Error_Handler();
	}
	/** Configure for the selected ADC regular channel its corresponding rank in the sequencer and its sample time.
	 */
	sConfig.Channel = ADC_CHANNEL_5;
	sConfig.Rank = ADC_REGULAR_RANK_2;
	if (HAL_ADC_ConfigChannel(&hadc1, &sConfig) != HAL_OK) {
		Error_Handler();
	}
	/* USER CODE BEGIN ADC1_Init 2 */

	/* USER CODE END ADC1_Init 2 */

}

/**
 * @brief I2C2 Initialization Function
 * @param None
 * @retval None
 */
static void MX_I2C2_Init(void) {

	/* USER CODE BEGIN I2C2_Init 0 */

	/* USER CODE END I2C2_Init 0 */

	/* USER CODE BEGIN I2C2_Init 1 */

	/* USER CODE END I2C2_Init 1 */
	hi2c2.Instance = I2C2;
	hi2c2.Init.Timing = 0x20303E5D;
	hi2c2.Init.OwnAddress1 = 0;
	hi2c2.Init.AddressingMode = I2C_ADDRESSINGMODE_7BIT;
	hi2c2.Init.DualAddressMode = I2C_DUALADDRESS_DISABLE;
	hi2c2.Init.OwnAddress2 = 0;
	hi2c2.Init.OwnAddress2Masks = I2C_OA2_NOMASK;
	hi2c2.Init.GeneralCallMode = I2C_GENERALCALL_DISABLE;
	hi2c2.Init.NoStretchMode = I2C_NOSTRETCH_DISABLE;
	if (HAL_I2C_Init(&hi2c2) != HAL_OK) {
		Error_Handler();
	}
	/** Configure Analogue filter
	 */
	if (HAL_I2CEx_ConfigAnalogFilter(&hi2c2, I2C_ANALOGFILTER_ENABLE)
			!= HAL_OK) {
		Error_Handler();
	}
	/** Configure Digital filter
	 */
	if (HAL_I2CEx_ConfigDigitalFilter(&hi2c2, 0) != HAL_OK) {
		Error_Handler();
	}
	/* USER CODE BEGIN I2C2_Init 2 */

	/* USER CODE END I2C2_Init 2 */

}

/**
 * @brief TIM2 Initialization Function
 * @param None
 * @retval None
 */
static void MX_TIM2_Init(void) {

	/* USER CODE BEGIN TIM2_Init 0 */

	/* USER CODE END TIM2_Init 0 */

	TIM_ClockConfigTypeDef sClockSourceConfig = { 0 };
	TIM_MasterConfigTypeDef sMasterConfig = { 0 };

	/* USER CODE BEGIN TIM2_Init 1 */

	/* USER CODE END TIM2_Init 1 */
	htim2.Instance = TIM2;
	htim2.Init.Prescaler = 9599;
	htim2.Init.CounterMode = TIM_COUNTERMODE_UP;
	htim2.Init.Period = 5499;
	htim2.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
	htim2.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
	if (HAL_TIM_Base_Init(&htim2) != HAL_OK) {
		Error_Handler();
	}
	sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
	if (HAL_TIM_ConfigClockSource(&htim2, &sClockSourceConfig) != HAL_OK) {
		Error_Handler();
	}
	sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
	sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
	if (HAL_TIMEx_MasterConfigSynchronization(&htim2, &sMasterConfig)
			!= HAL_OK) {
		Error_Handler();
	}
	/* USER CODE BEGIN TIM2_Init 2 */

	/* USER CODE END TIM2_Init 2 */

}

/**
 * @brief TIM3 Initialization Function
 * @param None
 * @retval None
 */
static void MX_TIM3_Init(void) {

	/* USER CODE BEGIN TIM3_Init 0 */

	/* USER CODE END TIM3_Init 0 */

	TIM_ClockConfigTypeDef sClockSourceConfig = { 0 };
	TIM_MasterConfigTypeDef sMasterConfig = { 0 };

	/* USER CODE BEGIN TIM3_Init 1 */

	/* USER CODE END TIM3_Init 1 */
	htim3.Instance = TIM3;
	htim3.Init.Prescaler = 9599;
	htim3.Init.CounterMode = TIM_COUNTERMODE_UP;
	htim3.Init.Period = 39;
	htim3.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
	htim3.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
	if (HAL_TIM_Base_Init(&htim3) != HAL_OK) {
		Error_Handler();
	}
	sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
	if (HAL_TIM_ConfigClockSource(&htim3, &sClockSourceConfig) != HAL_OK) {
		Error_Handler();
	}
	sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
	sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
	if (HAL_TIMEx_MasterConfigSynchronization(&htim3, &sMasterConfig)
			!= HAL_OK) {
		Error_Handler();
	}
	/* USER CODE BEGIN TIM3_Init 2 */

	/* USER CODE END TIM3_Init 2 */

}

/**
 * @brief TIM4 Initialization Function
 * @param None
 * @retval None
 */
static void MX_TIM4_Init(void) {

	/* USER CODE BEGIN TIM4_Init 0 */

	/* USER CODE END TIM4_Init 0 */

	TIM_ClockConfigTypeDef sClockSourceConfig = { 0 };
	TIM_MasterConfigTypeDef sMasterConfig = { 0 };

	/* USER CODE BEGIN TIM4_Init 1 */

	/* USER CODE END TIM4_Init 1 */
	htim4.Instance = TIM4;
	htim4.Init.Prescaler = 9599;
	htim4.Init.CounterMode = TIM_COUNTERMODE_UP;
	htim4.Init.Period = 2599;
	htim4.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
	htim4.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
	if (HAL_TIM_Base_Init(&htim4) != HAL_OK) {
		Error_Handler();
	}
	sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
	if (HAL_TIM_ConfigClockSource(&htim4, &sClockSourceConfig) != HAL_OK) {
		Error_Handler();
	}
	sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
	sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
	if (HAL_TIMEx_MasterConfigSynchronization(&htim4, &sMasterConfig)
			!= HAL_OK) {
		Error_Handler();
	}
	/* USER CODE BEGIN TIM4_Init 2 */

	/* USER CODE END TIM4_Init 2 */

}

/**
 * @brief TIM5 Initialization Function
 * @param None
 * @retval None
 */
static void MX_TIM5_Init(void) {

	/* USER CODE BEGIN TIM5_Init 0 */

	/* USER CODE END TIM5_Init 0 */

	TIM_ClockConfigTypeDef sClockSourceConfig = { 0 };
	TIM_MasterConfigTypeDef sMasterConfig = { 0 };

	/* USER CODE BEGIN TIM5_Init 1 */

	/* USER CODE END TIM5_Init 1 */
	htim5.Instance = TIM5;
	htim5.Init.Prescaler = 9599;
	htim5.Init.CounterMode = TIM_COUNTERMODE_UP;
	htim5.Init.Period = 1899;
	htim5.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
	htim5.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
	if (HAL_TIM_Base_Init(&htim5) != HAL_OK) {
		Error_Handler();
	}
	sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
	if (HAL_TIM_ConfigClockSource(&htim5, &sClockSourceConfig) != HAL_OK) {
		Error_Handler();
	}
	sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
	sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
	if (HAL_TIMEx_MasterConfigSynchronization(&htim5, &sMasterConfig)
			!= HAL_OK) {
		Error_Handler();
	}
	/* USER CODE BEGIN TIM5_Init 2 */

	/* USER CODE END TIM5_Init 2 */

}

/**
 * @brief TIM6 Initialization Function
 * @param None
 * @retval None
 */
static void MX_TIM6_Init(void) {

	/* USER CODE BEGIN TIM6_Init 0 */

	/* USER CODE END TIM6_Init 0 */

	TIM_MasterConfigTypeDef sMasterConfig = { 0 };

	/* USER CODE BEGIN TIM6_Init 1 */

	/* USER CODE END TIM6_Init 1 */
	htim6.Instance = TIM6;
	htim6.Init.Prescaler = 9599;
	htim6.Init.CounterMode = TIM_COUNTERMODE_UP;
	htim6.Init.Period = 999;
	htim6.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
	if (HAL_TIM_Base_Init(&htim6) != HAL_OK) {
		Error_Handler();
	}
	sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
	sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
	if (HAL_TIMEx_MasterConfigSynchronization(&htim6, &sMasterConfig)
			!= HAL_OK) {
		Error_Handler();
	}
	/* USER CODE BEGIN TIM6_Init 2 */

	/* USER CODE END TIM6_Init 2 */

}

/**
 * @brief TIM7 Initialization Function
 * @param None
 * @retval None
 */
static void MX_TIM7_Init(void) {

	/* USER CODE BEGIN TIM7_Init 0 */

	/* USER CODE END TIM7_Init 0 */

	TIM_MasterConfigTypeDef sMasterConfig = { 0 };

	/* USER CODE BEGIN TIM7_Init 1 */

	/* USER CODE END TIM7_Init 1 */
	htim7.Instance = TIM7;
	htim7.Init.Prescaler = 9599;
	htim7.Init.CounterMode = TIM_COUNTERMODE_UP;
	htim7.Init.Period = 4799;
	htim7.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
	if (HAL_TIM_Base_Init(&htim7) != HAL_OK) {
		Error_Handler();
	}
	sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
	sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
	if (HAL_TIMEx_MasterConfigSynchronization(&htim7, &sMasterConfig)
			!= HAL_OK) {
		Error_Handler();
	}
	/* USER CODE BEGIN TIM7_Init 2 */

	/* USER CODE END TIM7_Init 2 */

}

/**
 * @brief TIM8 Initialization Function
 * @param None
 * @retval None
 */
static void MX_TIM8_Init(void) {

	/* USER CODE BEGIN TIM8_Init 0 */

	/* USER CODE END TIM8_Init 0 */

	TIM_ClockConfigTypeDef sClockSourceConfig = { 0 };
	TIM_MasterConfigTypeDef sMasterConfig = { 0 };

	/* USER CODE BEGIN TIM8_Init 1 */

	/* USER CODE END TIM8_Init 1 */
	htim8.Instance = TIM8;
	htim8.Init.Prescaler = 9599;
	htim8.Init.CounterMode = TIM_COUNTERMODE_UP;
	htim8.Init.Period = 19998;
	htim8.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
	htim8.Init.RepetitionCounter = 0;
	htim8.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
	if (HAL_TIM_Base_Init(&htim8) != HAL_OK) {
		Error_Handler();
	}
	sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
	if (HAL_TIM_ConfigClockSource(&htim8, &sClockSourceConfig) != HAL_OK) {
		Error_Handler();
	}
	sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
	sMasterConfig.MasterOutputTrigger2 = TIM_TRGO2_RESET;
	sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
	if (HAL_TIMEx_MasterConfigSynchronization(&htim8, &sMasterConfig)
			!= HAL_OK) {
		Error_Handler();
	}
	/* USER CODE BEGIN TIM8_Init 2 */

	/* USER CODE END TIM8_Init 2 */

}

/**
 * @brief TIM9 Initialization Function
 * @param None
 * @retval None
 */
static void MX_TIM9_Init(void) {

	/* USER CODE BEGIN TIM9_Init 0 */

	/* USER CODE END TIM9_Init 0 */

	TIM_ClockConfigTypeDef sClockSourceConfig = { 0 };

	/* USER CODE BEGIN TIM9_Init 1 */

	/* USER CODE END TIM9_Init 1 */
	htim9.Instance = TIM9;
	htim9.Init.Prescaler = 9599;
	htim9.Init.CounterMode = TIM_COUNTERMODE_UP;
	htim9.Init.Period = 2099;
	htim9.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
	htim9.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
	if (HAL_TIM_Base_Init(&htim9) != HAL_OK) {
		Error_Handler();
	}
	sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
	if (HAL_TIM_ConfigClockSource(&htim9, &sClockSourceConfig) != HAL_OK) {
		Error_Handler();
	}
	/* USER CODE BEGIN TIM9_Init 2 */

	/* USER CODE END TIM9_Init 2 */

}

/**
 * @brief TIM10 Initialization Function
 * @param None
 * @retval None
 */
static void MX_TIM10_Init(void) {

	/* USER CODE BEGIN TIM10_Init 0 */

	/* USER CODE END TIM10_Init 0 */

	/* USER CODE BEGIN TIM10_Init 1 */

	/* USER CODE END TIM10_Init 1 */
	htim10.Instance = TIM10;
	htim10.Init.Prescaler = 9599;
	htim10.Init.CounterMode = TIM_COUNTERMODE_UP;
	htim10.Init.Period = 1199;
	htim10.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
	htim10.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
	if (HAL_TIM_Base_Init(&htim10) != HAL_OK) {
		Error_Handler();
	}
	/* USER CODE BEGIN TIM10_Init 2 */

	/* USER CODE END TIM10_Init 2 */

}

/**
 * @brief TIM11 Initialization Function
 * @param None
 * @retval None
 */
static void MX_TIM11_Init(void) {

	/* USER CODE BEGIN TIM11_Init 0 */

	/* USER CODE END TIM11_Init 0 */

	/* USER CODE BEGIN TIM11_Init 1 */

	/* USER CODE END TIM11_Init 1 */
	htim11.Instance = TIM11;
	htim11.Init.Prescaler = 9599;
	htim11.Init.CounterMode = TIM_COUNTERMODE_UP;
	htim11.Init.Period = 2599;
	htim11.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
	htim11.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
	if (HAL_TIM_Base_Init(&htim11) != HAL_OK) {
		Error_Handler();
	}
	/* USER CODE BEGIN TIM11_Init 2 */

	/* USER CODE END TIM11_Init 2 */

}

/**
 * @brief TIM12 Initialization Function
 * @param None
 * @retval None
 */
static void MX_TIM12_Init(void) {

	/* USER CODE BEGIN TIM12_Init 0 */

	/* USER CODE END TIM12_Init 0 */

	TIM_ClockConfigTypeDef sClockSourceConfig = { 0 };

	/* USER CODE BEGIN TIM12_Init 1 */

	/* USER CODE END TIM12_Init 1 */
	htim12.Instance = TIM12;
	htim12.Init.Prescaler = 9599;
	htim12.Init.CounterMode = TIM_COUNTERMODE_UP;
	htim12.Init.Period = 4300;
	htim12.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
	htim12.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
	if (HAL_TIM_Base_Init(&htim12) != HAL_OK) {
		Error_Handler();
	}
	sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
	if (HAL_TIM_ConfigClockSource(&htim12, &sClockSourceConfig) != HAL_OK) {
		Error_Handler();
	}
	/* USER CODE BEGIN TIM12_Init 2 */

	/* USER CODE END TIM12_Init 2 */

}

/**
 * @brief TIM13 Initialization Function
 * @param None
 * @retval None
 */
static void MX_TIM13_Init(void) {

	/* USER CODE BEGIN TIM13_Init 0 */

	/* USER CODE END TIM13_Init 0 */

	/* USER CODE BEGIN TIM13_Init 1 */

	/* USER CODE END TIM13_Init 1 */
	htim13.Instance = TIM13;
	htim13.Init.Prescaler = 9599;
	htim13.Init.CounterMode = TIM_COUNTERMODE_UP;
	htim13.Init.Period = 1099;
	htim13.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
	htim13.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
	if (HAL_TIM_Base_Init(&htim13) != HAL_OK) {
		Error_Handler();
	}
	/* USER CODE BEGIN TIM13_Init 2 */

	/* USER CODE END TIM13_Init 2 */

}
/**
 * @brief GPIO Initialization Function
 * @param None
 * @retval None
 */
static void MX_GPIO_Init(void) {
	GPIO_InitTypeDef GPIO_InitStruct = { 0 };

	/* GPIO Ports Clock Enable */
	__HAL_RCC_GPIOF_CLK_ENABLE();
	__HAL_RCC_GPIOH_CLK_ENABLE();
	__HAL_RCC_GPIOA_CLK_ENABLE();
	__HAL_RCC_GPIOB_CLK_ENABLE();

	/*Configure GPIO pin Output Level */
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0 | GPIO_PIN_14 | GPIO_PIN_7,
			GPIO_PIN_RESET);

	/*Configure GPIO pin : PA3 */
	GPIO_InitStruct.Pin = GPIO_PIN_3;
	GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
	GPIO_InitStruct.Pull = GPIO_PULLUP;
	HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

	/*Configure GPIO pins : PB0 PB14 PB7 */
	GPIO_InitStruct.Pin = GPIO_PIN_0 | GPIO_PIN_14 | GPIO_PIN_7;
	GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
	GPIO_InitStruct.Pull = GPIO_NOPULL;
	GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
	HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
 * @brief  This function is executed in case of error occurrence.
 * @retval None
 */
void Error_Handler(void) {
	/* USER CODE BEGIN Error_Handler_Debug */
	/* User can add his own implementation to report the HAL error return state */

	/* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{ 
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     tex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
