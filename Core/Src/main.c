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
#include "LCDgameService.h"
#include "gameOver.h"
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

SPI_HandleTypeDef hspi1;
DMA_HandleTypeDef hdma_spi1_tx;

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
static void MX_ADC1_Init(void);
/* USER CODE BEGIN PFP */
struct Diode DiodeArray[256];
uint32_t VR[2];
int gameNotStarted_Blue = 0;
bool gameNotStarted_Reverse = true;
void SpaceInvaders_TIM2() {
	if (!gameStarted) {
		MENU_Animation_TIM2();
	} else {
		if (!playerInitialized && !gameOver) {
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
		if (enemyInitialized && !gameOver
				&& (selectedLevel == 'E' || selectedLevel == 'M')) {
			newRound = false;
			switch (selectedLevel) {
			case 'E':
				switch (gameRound) {
				case 1:
					for (int i = 0; i < 45; i++) {
						enemyMovement();
					}
					break;
				case 2:
					for (int i = 0; i < 55; i++) {
						enemyMovement();
					}
					break;
				case 3:
					for (int i = 0; i < 65; i++) {
						enemyMovement();
					}
					break;
				case 4:
					for (int i = 0; i < 75; i++) {
						enemyMovement();
					}
					break;
				case 5:
					for (int i = 0; i < 85; i++) {
						enemyMovement();
					}
					break;
				case 6:
					for (int i = 0; i < 95; i++) {
						enemyMovement();
					}
					break;
				default:
					break;
				}
				break;
			case 'M':
				switch (gameRound) {
				case 1:
					for (int i = 0; i < 65; i++) {
						enemyMovement();
					}
					break;
				case 2:
					for (int i = 0; i < 75; i++) {
						enemyMovement();
					}
					break;
				case 3:
					for (int i = 0; i < 85; i++) {
						enemyMovement();
					}
					break;
				case 4:
					for (int i = 0; i < 95; i++) {
						enemyMovement();
					}
					break;
				case 5:
					for (int i = 0; i < 105; i++) {
						enemyMovement();
					}
					break;
				case 6:
					for (int i = 0; i < 115; i++) {
						enemyMovement();
					}
					break;
				default:
					break;
				}
				break;
			default:
				break;
			}

		} else if (!gameOver && newRound
				&& (selectedLevel == 'E' || selectedLevel == 'M')) {
			enemyInitialization();
		}
		if (gameOver && waitToDisplayTryAgain <= 3) {
			waitToDisplayTryAgain++;
			blockJoystick();
		}
	}
}
void SpaceInvaders_TIM3() {
	if (gameStarted) {

		if (enemyTotalCount < 40 && !gameOver) {
			initEnemy();
		}

		if (!gameOver) {
			LCD_gameStarted();
		}

		if (gameOver && !LCDtriedAgain && waitToDisplayTryAgain == 3) {
			LCD_tryAgain();
		} else if (gameOver && LCDtriedAgain && waitToDisplayTryAgain == 4) {
			tryAgainCheckForSelectedOption();
		}
		if (Press == GPIO_PIN_RESET && waitToDisplayTryAgain == 4) {
			LCDcheckExecuteOption();
		}

		if (enemyInitialized && !gameOver) {
			refreshEnemies();
			refreshBullets();
			checkForPlayerHit();
			checkForRoundOver();
		}
		if (!gameOver && (!blockLeft || !blockRight)) {
			playerPositioning();
			refreshPlayer();
		}
		if (playerStartShot && !gameOver) {
			checkForBulletCollision();
			checkForEnemyHit();
		}

		if (Press == GPIO_PIN_RESET && !playerStartShot && enemyInitialized) {
			if (!gameOver) {
				playerBulletRoute = 0;
				playerStartShot = true;
			} else {
				tryAgain = true;
			}

		}
	}
}
void SpaceInvaders_TIM4() {
	if (!gameStarted) {
		MENU();
	}
}
void SpaceInvaders_TIM5() {
	if (!gameStarted) {
		MENU_Animation_TIM5();
	} else {
		if (enemyInitialized && !gameOver && selectedLevel == 'M') {
			if (enemyActivateShoot_1) {
				enemyShooting_1();
				enemyDiodeShootRoute_1++;
			}
			if (enemyActivateShoot_2) {
				enemyShooting_2();
				enemyDiodeShootRoute_2++;

			}
			if (enemyActivateShoot_3) {
				enemyShooting_3();
				enemyDiodeShootRoute_3++;
			}
			if (enemyActivateShoot_4) {
				enemyShooting_4();
				enemyDiodeShootRoute_4++;
			}
		}
	}
	if (gameStarted) {
		LCD_gameStartedTitleAnimation();
	}
}
void SpaceInvaders_TIM6() {

}
void SpaceInvaders_TIM7() {
	if (gameStarted) {
		playerNewMove = true;
	}
}
void SpaceInvaders_TIM8() {
	if (gameStarted) {
		if (enemyInitialized && !gameOver) {
			newGameTimeCounter++;
		}
	}
	if (gameOver) {
		gameOverDisappear++;
		if (gameOverDisappear == 5) {
			enableGameOver = false;
		}
	}
}
void SpaceInvaders_TIM9() {
	if (gameStarted && selectedLevel == 'E') {
		if (enemyInitialized && !gameOver) {
			if (enemyActivateShoot_1) {
				enemyShooting_1();
				enemyDiodeShootRoute_1++;
			}
			if (enemyActivateShoot_2) {
				enemyShooting_2();
				enemyDiodeShootRoute_2++;

			}
			if (enemyActivateShoot_3) {
				enemyShooting_3();
				enemyDiodeShootRoute_3++;
			}
			if (enemyActivateShoot_4) {
				enemyShooting_4();
				enemyDiodeShootRoute_4++;
			}
		}
	}
}
void SpaceInvaders_TIM10() {
	if (gameStarted) {
		if (enemyInitialized && !gameOver) {
			initEnemyShooting();
		}
		//Player shooting
		if (playerStartShot && !gameOver && enemyInitialized && !newRound) {
			playerShot();
			playerBulletRoute++;
		}
	}
}
void SpaceInvaders_TIM11() {
	if (gameStarted && selectedLevel == 'H') {
		if (enemyInitialized && !gameOver) {
			if (enemyActivateShoot_1) {
				enemyShooting_1();
				enemyDiodeShootRoute_1++;
			}
			if (enemyActivateShoot_2) {
				enemyShooting_2();
				enemyDiodeShootRoute_2++;

			}
			if (enemyActivateShoot_3) {
				enemyShooting_3();
				enemyDiodeShootRoute_3++;
			}
			if (enemyActivateShoot_4) {
				enemyShooting_4();
				enemyDiodeShootRoute_4++;
			}
		}
	}
}
void SpaceInvaders_TIM12() {
	if (gameStarted) {
//				Yes / No
//				animation
		if (gameOver && LCDtriedAgain && waitToDisplayTryAgain == 4) {
			tryAgainSelectedOptionAnimation();
			if (LCDtryAgainAnimationStep == 0) {
				LCDtryAgainAnimationStep++;
			} else if (LCDtryAgainAnimationStep == 1) {
				LCDtryAgainAnimationStep--;
			}
		}
	}
}
void SpaceInvaders_TIM13() {
	if (gameStarted) {
		if (enemyInitialized && !gameOver && selectedLevel == 'H') {
			newRound = false;
			switch (gameRound) {
			case 1:
				for (int i = 0; i < 75; i++) {
					enemyMovement();
				}
				break;
			case 2:
				for (int i = 0; i < 85; i++) {
					enemyMovement();
				}
				break;
			case 3:
				for (int i = 0; i < 95; i++) {
					enemyMovement();
				}
				break;
			case 4:
				for (int i = 0; i < 105; i++) {
					enemyMovement();
				}
				break;
			case 5:
				for (int i = 0; i < 115; i++) {
					enemyMovement();
				}
				break;
			case 6:
				for (int i = 0; i < 125; i++) {
					enemyMovement();
				}
				break;
			default:
				break;
			}

		} else if (!gameOver && newRound && selectedLevel == 'H') {
			enemyInitialization();
		}
	}
}

void gameNotStartedTheme() {
	if (gameNotStarted_Reverse) {
		gameNotStarted_Blue++;
		if (gameNotStarted_Blue == 30) {
			gameNotStarted_Reverse = !gameNotStarted_Reverse;
		}
	} else {
		gameNotStarted_Blue--;
		if (gameNotStarted_Blue == 15) {
			gameNotStarted_Reverse = !gameNotStarted_Reverse;
		}
	}

	setAllPixelColor(0, 0, gameNotStarted_Blue);
}
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim) {
//PERIOD: 5499
	if (htim->Instance == TIM2) {
		SpaceInvaders_TIM2();

	}

//PERIOD: 299
	if (htim->Instance == TIM3) {
		getJoystickDirection(VR);
		getJoystickLed();
		Press = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_3);

		SpaceInvaders_TIM3();

	}

//PERIOD: 2599
	if (htim->Instance == TIM4) {
		SpaceInvaders_TIM4();
	}

//PERIOD: 1899
	if (htim->Instance == TIM5) {
		SpaceInvaders_TIM5();
	}
//PERIOD: 999
	if (htim->Instance == TIM6) {
		if (gameStarted) {
			if (!gameOver) {
				for (int i = 0; i < 256; i++)
					theme(i);
			}
			if (enableGameOver) {
				SpaceInvaders_gameOver();
			} else {
				diodeArrayInit();
				for (int i = 0; i < 256; i++)
					theme(i);
			}
		} else {
			gameNotStartedTheme();
		}
	}
//PERIOD: 4799
	if (htim->Instance == TIM7) {
		SpaceInvaders_TIM7();
	}

//1s
	if (htim->Instance == TIM8) {
		SpaceInvaders_TIM8();
	}
	if (htim->Instance == TIM9) {
		SpaceInvaders_TIM9();
	}

//PERIOD: 799
	if (htim->Instance == TIM10) {
		SpaceInvaders_TIM10();
	}
	if (htim->Instance == TIM11) {
		SpaceInvaders_TIM11();
	}
	//PERIOD: 6000
	if (htim->Instance == TIM12) {
		SpaceInvaders_TIM12();
	}
	if (htim->Instance == TIM13) {
		SpaceInvaders_TIM13();
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
	MX_ADC1_Init();
	/* USER CODE BEGIN 2 */
	HAL_ADC_Start_DMA(&hadc1, VR, 2);
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
	LCD_Clear
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
	htim3.Init.Period = 19;
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
	htim8.Init.Period = 18999;
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
	htim9.Init.Period = 5699;
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
	htim11.Init.Period = 1899;
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
	htim12.Init.Period = 6000;
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
	htim13.Init.Period = 4199;
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
