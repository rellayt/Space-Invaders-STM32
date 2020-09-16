#include "enemyControl.h"


int initLineStep = -2;
int enemyLineCount = -3;
int enemyTotalCount = -5;
bool blockInitEnemy = false, blockInitFirstLine = false;
bool enemyInitialized = false;
bool newRound = true;

void initEnemy() {
	enemyTotalCount++;
	enemyLineCount++;
	if (enemyLineCount == 8) {
		enemyLineCount = 0;
	}
	int enemyHP = getRand(1, 3);
	int enemySpawn = getRand(1, 2);
	uint16_t startDiodeID = 0;
	switch (enemyLineCount) {
	case 0:
		enemySpawn = getRand(1, 2);
		if (enemySpawn == 1) {
			startDiodeID = 255;
		} else {
			startDiodeID = 254;
		}
		break;
	case 1:
		if (enemySpawn == 1) {
			startDiodeID = 253;
		} else {
			startDiodeID = 252;
		}
		break;
	case 2:
		if (enemySpawn == 1) {
			startDiodeID = 251;
		} else {
			startDiodeID = 250;
		}
		break;
	case 3:
		if (enemySpawn == 1) {
			startDiodeID = 249;
		} else {
			startDiodeID = 248;
		}
		break;
	case 4:
		if (enemySpawn == 1) {
			startDiodeID = 247;
		} else {
			startDiodeID = 246;
		}
		break;
	case 5:
		if (enemySpawn == 1) {
			startDiodeID = 245;
		} else {
			startDiodeID = 244;
		}
		break;
	case 6:
		if (enemySpawn == 1) {
			startDiodeID = 243;
		} else {
			startDiodeID = 242;
		}
		break;
	case 7:
		if (enemySpawn == 1) {
			startDiodeID = 241;
		} else {
			startDiodeID = 240;
		}
		break;
	default:
		break;
	}
	struct Enemy singleEnemy = { enemyTotalCount, enemyHP, startDiodeID };
	if (enemyTotalCount >= 0 && enemyTotalCount < 8) {
		enemyFirstLine[enemyLineCount] = singleEnemy;
	} else if (enemyTotalCount >= 8 && enemyTotalCount < 16) {
		enemySecondLine[enemyLineCount] = singleEnemy;
	} else if (enemyTotalCount >= 16 && enemyTotalCount < 24) {
		enemyThirdLine[enemyLineCount] = singleEnemy;
	} else if (enemyTotalCount >= 24 && enemyTotalCount < 32) {
		enemyFourthLine[enemyLineCount] = singleEnemy;
	} else if (enemyTotalCount >= 32 && enemyTotalCount < 40) {
		enemyFifthLine[enemyLineCount] = singleEnemy;
	}
	if (enemyTotalCount == 40) {
		blockInitEnemy = true;
	}
}
void initEnemyLine(int line) {
	switch (line) {
	case 1:
		for (int i = 0; i < 8; i++) {
			if (enemyFirstLine[i].EnemyHP == 1) {
				DiodeArray[(int) enemyFirstLine[i].EnemyDiodeID].FreeSpace =
				false;
				DiodeArray[(int) enemyFirstLine[i].EnemyDiodeID].Enemy = true;
				setPixelColor(enemyFirstLine[i].EnemyDiodeID, RED);
			} else if (enemyFirstLine[i].EnemyHP == 2) {
				DiodeArray[(int) enemyFirstLine[i].EnemyDiodeID].FreeSpace =
				false;
				DiodeArray[(int) enemyFirstLine[i].EnemyDiodeID].Enemy = true;
				setPixelColor(enemyFirstLine[i].EnemyDiodeID, YELLOW);
			} else if (enemyFirstLine[i].EnemyHP == 3) {
				DiodeArray[(int) enemyFirstLine[i].EnemyDiodeID].FreeSpace =
				false;
				DiodeArray[(int) enemyFirstLine[i].EnemyDiodeID].Enemy = true;
				setPixelColor(enemyFirstLine[i].EnemyDiodeID, GREEN);
			}
		}
		break;
	case 2:
		for (int i = 0; i < 8; i++) {
			if (enemySecondLine[i].EnemyHP == 1) {
				DiodeArray[(int) enemySecondLine[i].EnemyDiodeID].FreeSpace =
				false;
				DiodeArray[(int) enemySecondLine[i].EnemyDiodeID].Enemy = true;
				setPixelColor(enemySecondLine[i].EnemyDiodeID, RED);
			} else if (enemySecondLine[i].EnemyHP == 2) {
				DiodeArray[(int) enemySecondLine[i].EnemyDiodeID].FreeSpace =
				false;
				DiodeArray[(int) enemySecondLine[i].EnemyDiodeID].Enemy = true;
				setPixelColor(enemySecondLine[i].EnemyDiodeID, YELLOW);
			} else if (enemySecondLine[i].EnemyHP == 3) {
				DiodeArray[(int) enemySecondLine[i].EnemyDiodeID].FreeSpace =
				false;
				DiodeArray[(int) enemySecondLine[i].EnemyDiodeID].Enemy = true;
				setPixelColor(enemySecondLine[i].EnemyDiodeID, GREEN);
			}
		}
		break;
	case 3:
		for (int i = 0; i < 8; i++) {
			if (enemyThirdLine[i].EnemyHP == 1) {
				DiodeArray[(int) enemyThirdLine[i].EnemyDiodeID].FreeSpace =
				false;
				DiodeArray[(int) enemyThirdLine[i].EnemyDiodeID].Enemy = true;
				setPixelColor(enemyThirdLine[i].EnemyDiodeID, RED);
			} else if (enemyThirdLine[i].EnemyHP == 2) {
				DiodeArray[(int) enemyThirdLine[i].EnemyDiodeID].FreeSpace =
				false;
				DiodeArray[(int) enemyThirdLine[i].EnemyDiodeID].Enemy = true;
				setPixelColor(enemyThirdLine[i].EnemyDiodeID, YELLOW);
			} else if (enemyThirdLine[i].EnemyHP == 3) {
				DiodeArray[(int) enemyThirdLine[i].EnemyDiodeID].FreeSpace =
				false;
				DiodeArray[(int) enemyThirdLine[i].EnemyDiodeID].Enemy = true;
				setPixelColor(enemyThirdLine[i].EnemyDiodeID, GREEN);
			}
		}
		break;
	case 4:
		for (int i = 0; i < 8; i++) {
			if (enemyFourthLine[i].EnemyHP == 1) {
				DiodeArray[(int) enemyFourthLine[i].EnemyDiodeID].FreeSpace =
				false;
				DiodeArray[(int) enemyFourthLine[i].EnemyDiodeID].Enemy = true;
				setPixelColor(enemyFourthLine[i].EnemyDiodeID, RED);
			} else if (enemyFourthLine[i].EnemyHP == 2) {
				DiodeArray[(int) enemyFourthLine[i].EnemyDiodeID].FreeSpace =
				false;
				DiodeArray[(int) enemyFourthLine[i].EnemyDiodeID].Enemy = true;
				setPixelColor(enemyFourthLine[i].EnemyDiodeID, YELLOW);
			} else if (enemyFourthLine[i].EnemyHP == 3) {
				DiodeArray[(int) enemyFourthLine[i].EnemyDiodeID].FreeSpace =
				false;
				DiodeArray[(int) enemyFourthLine[i].EnemyDiodeID].Enemy = true;
				setPixelColor(enemyFourthLine[i].EnemyDiodeID, GREEN);
			}
		}
		break;
	case 5:
		for (int i = 0; i < 8; i++) {
			if (enemyFifthLine[i].EnemyHP == 1) {
				DiodeArray[(int) enemyFifthLine[i].EnemyDiodeID].FreeSpace =
				false;
				DiodeArray[(int) enemyFifthLine[i].EnemyDiodeID].Enemy = true;
				setPixelColor(enemyFifthLine[i].EnemyDiodeID, RED);
			} else if (enemyFifthLine[i].EnemyHP == 2) {
				DiodeArray[(int) enemyFifthLine[i].EnemyDiodeID].FreeSpace =
				false;
				DiodeArray[(int) enemyFifthLine[i].EnemyDiodeID].Enemy = true;
				setPixelColor(enemyFifthLine[i].EnemyDiodeID, YELLOW);
			} else if (enemyFifthLine[i].EnemyHP == 3) {
				DiodeArray[(int) enemyFifthLine[i].EnemyDiodeID].FreeSpace =
				false;
				DiodeArray[(int) enemyFifthLine[i].EnemyDiodeID].Enemy = true;
				setPixelColor(enemyFifthLine[i].EnemyDiodeID, GREEN);
			}
		}
		break;
	default:
		break;
	}
}
void enemyLineMoveDown(int mainLine, struct Enemy lineToMove[], int targetLine) {
	uint16_t oldDiodeID;
	uint16_t newDiodeID;
	uint16_t newDiodeID_2;
	switch (targetLine) {
	case 2:
		for (int i = 0; i < 8; i++) {
			switch (i) {
			case 0:
				oldDiodeID = 255;
				newDiodeID = 224;
				newDiodeID_2 = 225;
				break;
			case 1:
				oldDiodeID = 253;
				newDiodeID = 226;
				newDiodeID_2 = 227;
				break;
			case 2:
				oldDiodeID = 251;
				newDiodeID = 228;
				newDiodeID_2 = 229;
				break;
			case 3:
				oldDiodeID = 249;
				newDiodeID = 230;
				newDiodeID_2 = 231;
				break;
			case 4:
				oldDiodeID = 247;
				newDiodeID = 232;
				newDiodeID_2 = 233;
				break;
			case 5:
				oldDiodeID = 245;
				newDiodeID = 234;
				newDiodeID_2 = 235;
				break;
			case 6:
				oldDiodeID = 243;
				newDiodeID = 236;
				newDiodeID_2 = 237;
				break;
			case 7:
				oldDiodeID = 241;
				newDiodeID = 238;
				newDiodeID_2 = 239;
				break;
			default:
				break;
			}
			if (lineToMove[i].EnemyDiodeID == oldDiodeID) {
				DiodeArray[lineToMove[i].EnemyDiodeID].Enemy = false;
				DiodeArray[lineToMove[i].EnemyDiodeID].FreeSpace = true;
				setPixelColor(lineToMove[i].EnemyDiodeID, THEME);

				lineToMove[i].EnemyDiodeID = newDiodeID;
				DiodeArray[lineToMove[i].EnemyDiodeID].Enemy = true;
				DiodeArray[lineToMove[i].EnemyDiodeID].FreeSpace = false;
				switch (lineToMove[i].EnemyHP) {
				case 1:
					setPixelColor(lineToMove[i].EnemyDiodeID, RED);
					break;
				case 2:
					setPixelColor(lineToMove[i].EnemyDiodeID, YELLOW);
					break;
				case 3:
					setPixelColor(lineToMove[i].EnemyDiodeID, GREEN);
					break;
				default:
					break;
				}
			} else {
				DiodeArray[lineToMove[i].EnemyDiodeID].Enemy = false;
				DiodeArray[lineToMove[i].EnemyDiodeID].FreeSpace = true;
				setPixelColor(lineToMove[i].EnemyDiodeID, THEME);

				lineToMove[i].EnemyDiodeID = newDiodeID_2;
				DiodeArray[lineToMove[i].EnemyDiodeID].Enemy = true;
				DiodeArray[lineToMove[i].EnemyDiodeID].FreeSpace = false;
				switch (lineToMove[i].EnemyHP) {
				case 1:
					setPixelColor(lineToMove[i].EnemyDiodeID, RED);
					break;
				case 2:
					setPixelColor(lineToMove[i].EnemyDiodeID, YELLOW);
					break;
				case 3:
					setPixelColor(lineToMove[i].EnemyDiodeID, GREEN);
					break;
				default:
					break;
				}
			}
		}
		break;
	case 3:
		for (int i = 0; i < 8; i++) {
			switch (i) {
			case 0:
				oldDiodeID = 224;
				newDiodeID = 223;
				newDiodeID_2 = 222;
				break;
			case 1:
				oldDiodeID = 226;
				newDiodeID = 221;
				newDiodeID_2 = 220;
				break;
			case 2:
				oldDiodeID = 228;
				newDiodeID = 219;
				newDiodeID_2 = 218;
				break;
			case 3:
				oldDiodeID = 230;
				newDiodeID = 217;
				newDiodeID_2 = 216;
				break;
			case 4:
				oldDiodeID = 232;
				newDiodeID = 215;
				newDiodeID_2 = 214;
				break;
			case 5:
				oldDiodeID = 234;
				newDiodeID = 213;
				newDiodeID_2 = 212;
				break;
			case 6:
				oldDiodeID = 236;
				newDiodeID = 211;
				newDiodeID_2 = 210;
				break;
			case 7:
				oldDiodeID = 238;
				newDiodeID = 209;
				newDiodeID_2 = 208;
				break;
			default:
				break;
			}
			if (lineToMove[i].EnemyDiodeID == oldDiodeID) {
				DiodeArray[lineToMove[i].EnemyDiodeID].Enemy = false;
				DiodeArray[lineToMove[i].EnemyDiodeID].FreeSpace = true;
				setPixelColor(lineToMove[i].EnemyDiodeID, THEME);

				lineToMove[i].EnemyDiodeID = newDiodeID;
				DiodeArray[lineToMove[i].EnemyDiodeID].Enemy = true;
				DiodeArray[lineToMove[i].EnemyDiodeID].FreeSpace = false;
				switch (lineToMove[i].EnemyHP) {
				case 1:
					setPixelColor(lineToMove[i].EnemyDiodeID, RED);
					break;
				case 2:
					setPixelColor(lineToMove[i].EnemyDiodeID, YELLOW);
					break;
				case 3:
					setPixelColor(lineToMove[i].EnemyDiodeID, GREEN);
					break;
				default:
					break;
				}
			} else {
				DiodeArray[lineToMove[i].EnemyDiodeID].Enemy = false;
				DiodeArray[lineToMove[i].EnemyDiodeID].FreeSpace = true;
				setPixelColor(lineToMove[i].EnemyDiodeID, THEME);

				lineToMove[i].EnemyDiodeID = newDiodeID_2;
				DiodeArray[lineToMove[i].EnemyDiodeID].Enemy = true;
				DiodeArray[lineToMove[i].EnemyDiodeID].FreeSpace = false;
				switch (lineToMove[i].EnemyHP) {
				case 1:
					setPixelColor(lineToMove[i].EnemyDiodeID, RED);
					break;
				case 2:
					setPixelColor(lineToMove[i].EnemyDiodeID, YELLOW);
					break;
				case 3:
					setPixelColor(lineToMove[i].EnemyDiodeID, GREEN);
					break;
				default:
					break;
				}
			}
		}
		break;
	case 4:
		for (int i = 0; i < 8; i++) {
			switch (i) {
			case 0:
				oldDiodeID = 223;
				newDiodeID = 192;
				newDiodeID_2 = 193;
				break;
			case 1:
				oldDiodeID = 221;
				newDiodeID = 194;
				newDiodeID_2 = 195;
				break;
			case 2:
				oldDiodeID = 219;
				newDiodeID = 196;
				newDiodeID_2 = 197;
				break;
			case 3:
				oldDiodeID = 217;
				newDiodeID = 198;
				newDiodeID_2 = 199;
				break;
			case 4:
				oldDiodeID = 215;
				newDiodeID = 200;
				newDiodeID_2 = 201;
				break;
			case 5:
				oldDiodeID = 213;
				newDiodeID = 202;
				newDiodeID_2 = 203;
				break;
			case 6:
				oldDiodeID = 211;
				newDiodeID = 204;
				newDiodeID_2 = 205;
				break;
			case 7:
				oldDiodeID = 209;
				newDiodeID = 206;
				newDiodeID_2 = 207;
				break;
			default:
				break;
			}
			if (lineToMove[i].EnemyDiodeID == oldDiodeID) {
				DiodeArray[lineToMove[i].EnemyDiodeID].Enemy = false;
				DiodeArray[lineToMove[i].EnemyDiodeID].FreeSpace = true;
				DiodeArray[lineToMove[i].EnemyDiodeID].HP = -1;
				setPixelColor(lineToMove[i].EnemyDiodeID, THEME);

				lineToMove[i].EnemyDiodeID = newDiodeID;
				DiodeArray[lineToMove[i].EnemyDiodeID].Enemy = true;
				DiodeArray[lineToMove[i].EnemyDiodeID].FreeSpace = false;
				switch (lineToMove[i].EnemyHP) {
				case 1:
					setPixelColor(lineToMove[i].EnemyDiodeID, RED);
					DiodeArray[lineToMove[i].EnemyDiodeID].HP = 1;
					break;
				case 2:
					setPixelColor(lineToMove[i].EnemyDiodeID, YELLOW);
					DiodeArray[lineToMove[i].EnemyDiodeID].HP = 2;
					break;
				case 3:
					setPixelColor(lineToMove[i].EnemyDiodeID, GREEN);
					DiodeArray[lineToMove[i].EnemyDiodeID].HP = 3;
					break;
				default:
					break;
				}
			} else {
				DiodeArray[lineToMove[i].EnemyDiodeID].Enemy = false;
				DiodeArray[lineToMove[i].EnemyDiodeID].FreeSpace = true;
				DiodeArray[lineToMove[i].EnemyDiodeID].HP = -1;
				setPixelColor(lineToMove[i].EnemyDiodeID, THEME);

				lineToMove[i].EnemyDiodeID = newDiodeID_2;
				DiodeArray[lineToMove[i].EnemyDiodeID].Enemy = true;
				DiodeArray[lineToMove[i].EnemyDiodeID].FreeSpace = false;
				switch (lineToMove[i].EnemyHP) {
				case 1:
					setPixelColor(lineToMove[i].EnemyDiodeID, RED);
					DiodeArray[lineToMove[i].EnemyDiodeID].HP = 1;
					break;
				case 2:
					setPixelColor(lineToMove[i].EnemyDiodeID, YELLOW);
					DiodeArray[lineToMove[i].EnemyDiodeID].HP = 2;
					break;
				case 3:
					setPixelColor(lineToMove[i].EnemyDiodeID, GREEN);
					DiodeArray[lineToMove[i].EnemyDiodeID].HP = 3;
					break;
				default:
					break;
				}
			}
		}
		break;
	case 5:
		for (int i = 0; i < 8; i++) {
			switch (i) {
			case 0:
				oldDiodeID = 192;
				newDiodeID = 191;
				newDiodeID_2 = 190;
				break;
			case 1:
				oldDiodeID = 194;
				newDiodeID = 189;
				newDiodeID_2 = 188;
				break;
			case 2:
				oldDiodeID = 196;
				newDiodeID = 187;
				newDiodeID_2 = 186;
				break;
			case 3:
				oldDiodeID = 198;
				newDiodeID = 185;
				newDiodeID_2 = 184;
				break;
			case 4:
				oldDiodeID = 200;
				newDiodeID = 183;
				newDiodeID_2 = 182;
				break;
			case 5:
				oldDiodeID = 202;
				newDiodeID = 181;
				newDiodeID_2 = 180;
				break;
			case 6:
				oldDiodeID = 204;
				newDiodeID = 179;
				newDiodeID_2 = 178;
				break;
			case 7:
				oldDiodeID = 206;
				newDiodeID = 177;
				newDiodeID_2 = 176;
				break;
			default:
				break;
			}
			if (lineToMove[i].EnemyDiodeID == oldDiodeID) {
				DiodeArray[lineToMove[i].EnemyDiodeID].Enemy = false;
				DiodeArray[lineToMove[i].EnemyDiodeID].FreeSpace = true;
				DiodeArray[lineToMove[i].EnemyDiodeID].HP = -1;
				setPixelColor(lineToMove[i].EnemyDiodeID, THEME);

				lineToMove[i].EnemyDiodeID = newDiodeID;
				DiodeArray[lineToMove[i].EnemyDiodeID].Enemy = true;
				DiodeArray[lineToMove[i].EnemyDiodeID].FreeSpace = false;
				switch (lineToMove[i].EnemyHP) {
				case 1:
					setPixelColor(lineToMove[i].EnemyDiodeID, RED);
					DiodeArray[lineToMove[i].EnemyDiodeID].HP = 1;
					break;
				case 2:
					setPixelColor(lineToMove[i].EnemyDiodeID, YELLOW);
					DiodeArray[lineToMove[i].EnemyDiodeID].HP = 2;
					break;
				case 3:
					setPixelColor(lineToMove[i].EnemyDiodeID, GREEN);
					DiodeArray[lineToMove[i].EnemyDiodeID].HP = 3;
					break;
				default:
					break;
				}
			} else {
				DiodeArray[lineToMove[i].EnemyDiodeID].Enemy = false;
				DiodeArray[lineToMove[i].EnemyDiodeID].FreeSpace = true;
				DiodeArray[lineToMove[i].EnemyDiodeID].HP = -1;
				setPixelColor(lineToMove[i].EnemyDiodeID, THEME);

				lineToMove[i].EnemyDiodeID = newDiodeID_2;
				DiodeArray[lineToMove[i].EnemyDiodeID].Enemy = true;
				DiodeArray[lineToMove[i].EnemyDiodeID].FreeSpace = false;
				switch (lineToMove[i].EnemyHP) {
				case 1:
					setPixelColor(lineToMove[i].EnemyDiodeID, RED);
					DiodeArray[lineToMove[i].EnemyDiodeID].HP = 1;
					break;
				case 2:
					setPixelColor(lineToMove[i].EnemyDiodeID, YELLOW);
					DiodeArray[lineToMove[i].EnemyDiodeID].HP = 2;
					break;
				case 3:
					setPixelColor(lineToMove[i].EnemyDiodeID, GREEN);
					DiodeArray[lineToMove[i].EnemyDiodeID].HP = 3;
					break;
				default:
					break;
				}
			}
		}
		break;
	case 6:
		for (int i = 0; i < 8; i++) {
			switch (i) {
			case 0:
				oldDiodeID = 191;
				newDiodeID = 160;
				newDiodeID_2 = 161;
				break;
			case 1:
				oldDiodeID = 189;
				newDiodeID = 162;
				newDiodeID_2 = 163;
				break;
			case 2:
				oldDiodeID = 187;
				newDiodeID = 164;
				newDiodeID_2 = 165;
				break;
			case 3:
				oldDiodeID = 185;
				newDiodeID = 166;
				newDiodeID_2 = 167;
				break;
			case 4:
				oldDiodeID = 183;
				newDiodeID = 168;
				newDiodeID_2 = 169;
				break;
			case 5:
				oldDiodeID = 181;
				newDiodeID = 170;
				newDiodeID_2 = 171;
				break;
			case 6:
				oldDiodeID = 179;
				newDiodeID = 172;
				newDiodeID_2 = 173;
				break;
			case 7:
				oldDiodeID = 177;
				newDiodeID = 174;
				newDiodeID_2 = 175;
				break;
			default:
				break;
			}
			if (lineToMove[i].EnemyDiodeID == oldDiodeID) {
				DiodeArray[lineToMove[i].EnemyDiodeID].Enemy = false;
				DiodeArray[lineToMove[i].EnemyDiodeID].FreeSpace = true;
				DiodeArray[lineToMove[i].EnemyDiodeID].HP = -1;
				setPixelColor(lineToMove[i].EnemyDiodeID, THEME);

				lineToMove[i].EnemyDiodeID = newDiodeID;
				DiodeArray[lineToMove[i].EnemyDiodeID].Enemy = true;
				DiodeArray[lineToMove[i].EnemyDiodeID].FreeSpace = false;
				switch (lineToMove[i].EnemyHP) {
				case 1:
					setPixelColor(lineToMove[i].EnemyDiodeID, RED);
					DiodeArray[lineToMove[i].EnemyDiodeID].HP = 1;
					break;
				case 2:
					setPixelColor(lineToMove[i].EnemyDiodeID, YELLOW);
					DiodeArray[lineToMove[i].EnemyDiodeID].HP = 2;
					break;
				case 3:
					setPixelColor(lineToMove[i].EnemyDiodeID, GREEN);
					DiodeArray[lineToMove[i].EnemyDiodeID].HP = 3;
					break;
				default:
					break;
				}
			} else {
				DiodeArray[lineToMove[i].EnemyDiodeID].Enemy = false;
				DiodeArray[lineToMove[i].EnemyDiodeID].FreeSpace = true;
				DiodeArray[lineToMove[i].EnemyDiodeID].HP = -1;
				setPixelColor(lineToMove[i].EnemyDiodeID, THEME);

				lineToMove[i].EnemyDiodeID = newDiodeID_2;
				DiodeArray[lineToMove[i].EnemyDiodeID].Enemy = true;
				DiodeArray[lineToMove[i].EnemyDiodeID].FreeSpace = false;
				switch (lineToMove[i].EnemyHP) {
				case 1:
					setPixelColor(lineToMove[i].EnemyDiodeID, RED);
					DiodeArray[lineToMove[i].EnemyDiodeID].HP = 1;
					break;
				case 2:
					setPixelColor(lineToMove[i].EnemyDiodeID, YELLOW);
					DiodeArray[lineToMove[i].EnemyDiodeID].HP = 2;
					break;
				case 3:
					setPixelColor(lineToMove[i].EnemyDiodeID, GREEN);
					DiodeArray[lineToMove[i].EnemyDiodeID].HP = 3;
					break;
				default:
					break;
				}
			}
		}
		break;
	case 7:
		for (int i = 0; i < 8; i++) {
			switch (i) {
			case 0:
				oldDiodeID = 160;
				newDiodeID = 159;
				newDiodeID_2 = 158;
				break;
			case 1:
				oldDiodeID = 162;
				newDiodeID = 157;
				newDiodeID_2 = 156;
				break;
			case 2:
				oldDiodeID = 164;
				newDiodeID = 155;
				newDiodeID_2 = 154;
				break;
			case 3:
				oldDiodeID = 166;
				newDiodeID = 153;
				newDiodeID_2 = 152;
				break;
			case 4:
				oldDiodeID = 168;
				newDiodeID = 151;
				newDiodeID_2 = 150;
				break;
			case 5:
				oldDiodeID = 170;
				newDiodeID = 149;
				newDiodeID_2 = 148;
				break;
			case 6:
				oldDiodeID = 172;
				newDiodeID = 147;
				newDiodeID_2 = 146;
				break;
			case 7:
				oldDiodeID = 174;
				newDiodeID = 145;
				newDiodeID_2 = 144;
				break;
			default:
				break;
			}
			if (lineToMove[i].EnemyDiodeID == oldDiodeID) {
				DiodeArray[lineToMove[i].EnemyDiodeID].Enemy = false;
				DiodeArray[lineToMove[i].EnemyDiodeID].FreeSpace = true;
				DiodeArray[lineToMove[i].EnemyDiodeID].HP = -1;
				setPixelColor(lineToMove[i].EnemyDiodeID, THEME);

				lineToMove[i].EnemyDiodeID = newDiodeID;
				DiodeArray[lineToMove[i].EnemyDiodeID].Enemy = true;
				DiodeArray[lineToMove[i].EnemyDiodeID].FreeSpace = false;
				switch (lineToMove[i].EnemyHP) {
				case 1:
					setPixelColor(lineToMove[i].EnemyDiodeID, RED);
					DiodeArray[lineToMove[i].EnemyDiodeID].HP = 1;
					break;
				case 2:
					setPixelColor(lineToMove[i].EnemyDiodeID, YELLOW);
					DiodeArray[lineToMove[i].EnemyDiodeID].HP = 2;
					break;
				case 3:
					setPixelColor(lineToMove[i].EnemyDiodeID, GREEN);
					DiodeArray[lineToMove[i].EnemyDiodeID].HP = 3;
					break;
				default:
					break;
				}
			} else {
				DiodeArray[lineToMove[i].EnemyDiodeID].Enemy = false;
				DiodeArray[lineToMove[i].EnemyDiodeID].FreeSpace = true;
				DiodeArray[lineToMove[i].EnemyDiodeID].HP = -1;
				setPixelColor(lineToMove[i].EnemyDiodeID, THEME);

				lineToMove[i].EnemyDiodeID = newDiodeID_2;
				DiodeArray[lineToMove[i].EnemyDiodeID].Enemy = true;
				DiodeArray[lineToMove[i].EnemyDiodeID].FreeSpace = false;
				switch (lineToMove[i].EnemyHP) {
				case 1:
					setPixelColor(lineToMove[i].EnemyDiodeID, RED);
					DiodeArray[lineToMove[i].EnemyDiodeID].HP = 1;
					break;
				case 2:
					setPixelColor(lineToMove[i].EnemyDiodeID, YELLOW);
					DiodeArray[lineToMove[i].EnemyDiodeID].HP = 2;
					break;
				case 3:
					setPixelColor(lineToMove[i].EnemyDiodeID, GREEN);
					DiodeArray[lineToMove[i].EnemyDiodeID].HP = 3;
					break;
				default:
					break;
				}
			}
		}
		break;
	case 8:
		for (int i = 0; i < 8; i++) {
			switch (i) {
			case 0:
				oldDiodeID = 159;
				newDiodeID = 128;
				newDiodeID_2 = 129;
				break;
			case 1:
				oldDiodeID = 157;
				newDiodeID = 130;
				newDiodeID_2 = 131;
				break;
			case 2:
				oldDiodeID = 155;
				newDiodeID = 132;
				newDiodeID_2 = 133;
				break;
			case 3:
				oldDiodeID = 153;
				newDiodeID = 134;
				newDiodeID_2 = 135;
				break;
			case 4:
				oldDiodeID = 151;
				newDiodeID = 136;
				newDiodeID_2 = 137;
				break;
			case 5:
				oldDiodeID = 149;
				newDiodeID = 138;
				newDiodeID_2 = 139;
				break;
			case 6:
				oldDiodeID = 147;
				newDiodeID = 140;
				newDiodeID_2 = 141;
				break;
			case 7:
				oldDiodeID = 145;
				newDiodeID = 142;
				newDiodeID_2 = 143;
				break;
			default:
				break;
			}
			if (lineToMove[i].EnemyDiodeID == oldDiodeID) {
				DiodeArray[lineToMove[i].EnemyDiodeID].Enemy = false;
				DiodeArray[lineToMove[i].EnemyDiodeID].FreeSpace = true;
				DiodeArray[lineToMove[i].EnemyDiodeID].HP = -1;
				setPixelColor(lineToMove[i].EnemyDiodeID, THEME);

				lineToMove[i].EnemyDiodeID = newDiodeID;
				DiodeArray[lineToMove[i].EnemyDiodeID].Enemy = true;
				DiodeArray[lineToMove[i].EnemyDiodeID].FreeSpace = false;
				switch (lineToMove[i].EnemyHP) {
				case 1:
					setPixelColor(lineToMove[i].EnemyDiodeID, RED);
					DiodeArray[lineToMove[i].EnemyDiodeID].HP = 1;
					break;
				case 2:
					setPixelColor(lineToMove[i].EnemyDiodeID, YELLOW);
					DiodeArray[lineToMove[i].EnemyDiodeID].HP = 2;
					break;
				case 3:
					setPixelColor(lineToMove[i].EnemyDiodeID, GREEN);
					DiodeArray[lineToMove[i].EnemyDiodeID].HP = 3;
					break;
				default:
					break;
				}
			} else {
				DiodeArray[lineToMove[i].EnemyDiodeID].Enemy = false;
				DiodeArray[lineToMove[i].EnemyDiodeID].FreeSpace = true;
				DiodeArray[lineToMove[i].EnemyDiodeID].HP = -1;
				setPixelColor(lineToMove[i].EnemyDiodeID, THEME);

				lineToMove[i].EnemyDiodeID = newDiodeID_2;
				DiodeArray[lineToMove[i].EnemyDiodeID].Enemy = true;
				DiodeArray[lineToMove[i].EnemyDiodeID].FreeSpace = false;
				switch (lineToMove[i].EnemyHP) {
				case 1:
					setPixelColor(lineToMove[i].EnemyDiodeID, RED);
					DiodeArray[lineToMove[i].EnemyDiodeID].HP = 1;
					break;
				case 2:
					setPixelColor(lineToMove[i].EnemyDiodeID, YELLOW);
					DiodeArray[lineToMove[i].EnemyDiodeID].HP = 2;
					break;
				case 3:
					setPixelColor(lineToMove[i].EnemyDiodeID, GREEN);
					DiodeArray[lineToMove[i].EnemyDiodeID].HP = 3;
					break;
				default:
					break;
				}
			}
		}
		break;
	default:
		break;
	}
	switch (mainLine) {
	case 1:
		memcpy(&enemyFirstLine, &lineToMove, sizeof &enemyFirstLine);
		break;
	case 2:
		memcpy(&enemyFirstLine, &lineToMove, sizeof &enemySecondLine);
		break;
	case 3:
		memcpy(&enemyFirstLine, &lineToMove, sizeof &enemyThirdLine);
		break;
	case 4:
		memcpy(&enemyFirstLine, &lineToMove, sizeof &enemyFourthLine);
		break;
	case 5:
		memcpy(&enemyFifthLine, &lineToMove, sizeof &enemyFifthLine);
		break;
	default:
		break;
	}
}
void enemyInitialization() {
	switch (initLineStep) {
	case 0:
		initEnemyLine(1);
		break;
	case 1:
		enemyLineMoveDown(1, enemyFirstLine, 2);
		initEnemyLine(2);
		break;
	case 2:
		enemyLineMoveDown(1, enemyFirstLine, 3);
		enemyLineMoveDown(2, enemySecondLine, 2);
		initEnemyLine(3);
		break;
	case 3:
		enemyLineMoveDown(1, enemyFirstLine, 4);
		enemyLineMoveDown(2, enemySecondLine, 3);
		enemyLineMoveDown(3, enemyThirdLine, 2);
		initEnemyLine(4);
		break;
	case 4:
		enemyLineMoveDown(1, enemyFirstLine, 5);
		enemyLineMoveDown(2, enemySecondLine, 4);
		enemyLineMoveDown(3, enemyThirdLine, 3);
		enemyLineMoveDown(4, enemyFourthLine, 2);
		initEnemyLine(5);
		break;
	case 5:
		enemyLineMoveDown(1, enemyFirstLine, 6);
		enemyLineMoveDown(2, enemySecondLine, 5);
		enemyLineMoveDown(3, enemyThirdLine, 4);
		enemyLineMoveDown(4, enemyFourthLine, 3);
		enemyLineMoveDown(5, enemyFifthLine, 2);
		break;
	case 6:
		enemyLineMoveDown(1, enemyFirstLine, 7);
		enemyLineMoveDown(2, enemySecondLine, 6);
		enemyLineMoveDown(3, enemyThirdLine, 5);
		enemyLineMoveDown(4, enemyFourthLine, 4);
		enemyLineMoveDown(5, enemyFifthLine, 3);
		break;
	case 7:
		enemyLineMoveDown(1, enemyFirstLine, 8);
		enemyLineMoveDown(2, enemySecondLine, 7);
		enemyLineMoveDown(3, enemyThirdLine, 6);
		enemyLineMoveDown(4, enemyFourthLine, 5);
		enemyLineMoveDown(5, enemyFifthLine, 4);
		enemyInitialized = true;
		break;
	default:
		break;
	}
	if (initLineStep < 8) {
		initLineStep++;
	}
}
void enemyMovement() {

	int enemyDiodeID = getRand(96, 207);

	int newDiodeID;
	int enemyDirection;
	int currentLine = 0;
	enemyDirection = getRand(1, 4);

	if (enemyDiodeID >= 192 && enemyDiodeID <= 207) {
		currentLine = 1;
	} else if (enemyDiodeID <= 191 && enemyDiodeID >= 176) {
		currentLine = 2;
	} else if (enemyDiodeID >= 160 && enemyDiodeID <= 175) {
		currentLine = 3;
	} else if (enemyDiodeID <= 159 && enemyDiodeID >= 144) {
		currentLine = 4;
	} else if (enemyDiodeID >= 128 && enemyDiodeID <= 143) {
		currentLine = 5;
	} else if (enemyDiodeID <= 127 && enemyDiodeID >= 112) {
		currentLine = 6;
	} else if (enemyDiodeID >= 96 && enemyDiodeID <= 111) {
		currentLine = 7;
	}

	if (DiodeArray[enemyDiodeID].Enemy) {
		newDiodeID = 0;
		switch (currentLine) {
		case 1:
			if (enemyDiodeID == 192) {
				enemyDirection = getRand(1, 3);
				if (enemyDirection == 1) {
					newDiodeID = enemyDiodeID - 1;
				} else {
					newDiodeID = enemyDiodeID + 1;
				}
			} else if (enemyDiodeID == 207) {
				enemyDirection = getRand(1, 3);
				if (enemyDirection == 1) {
					newDiodeID = enemyDiodeID - 31;
				} else {
					newDiodeID = enemyDiodeID - 1;
				}
			} else {
				enemyDirection = getRand(1, 5);
				uint16_t leftDiodeID = 192;
				uint16_t rightDiodeID = 194;
				uint16_t bottomDiodeID = 190;
				uint16_t diodeValue = 0;
				switch (enemyDiodeID) {
				case 193:
					switch (enemyDirection) {
					case 1:
						newDiodeID = leftDiodeID;
						break;
					case 2:
						newDiodeID = rightDiodeID;
						break;
					case 3:
						newDiodeID = bottomDiodeID;
						break;
					case 4:
						newDiodeID = leftDiodeID;
						break;
					case 5:
						newDiodeID = rightDiodeID;
						break;
					default:
						break;
					}
					break;
				case 194:
					diodeValue = 1;
					switch (enemyDirection) {
					case 1:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 5:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				case 195:
					diodeValue = 2;
					switch (enemyDirection) {
					case 1:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID - diodeValue;
						break;
					case 4:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 5:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				case 196:
					diodeValue = 3;
					switch (enemyDirection) {
					case 1:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID - diodeValue;
						break;
					case 4:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 5:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				case 197:
					diodeValue = 4;
					switch (enemyDirection) {
					case 1:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID - diodeValue;
						break;
					case 4:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 5:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				case 198:
					diodeValue = 5;
					switch (enemyDirection) {
					case 1:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID - diodeValue;
						break;
					case 4:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 5:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				case 199:
					diodeValue = 6;
					switch (enemyDirection) {
					case 1:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID - diodeValue;
						break;
					case 4:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 5:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				case 200:
					diodeValue = 7;
					switch (enemyDirection) {
					case 1:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID - diodeValue;
						break;
					case 4:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 5:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				case 201:
					diodeValue = 8;
					switch (enemyDirection) {
					case 1:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID - diodeValue;
						break;
					case 4:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 5:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				case 202:
					diodeValue = 9;
					switch (enemyDirection) {
					case 1:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID - diodeValue;
						break;
					case 4:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 5:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				case 203:
					diodeValue = 10;
					switch (enemyDirection) {
					case 1:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID - diodeValue;
						break;
					case 4:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 5:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				case 204:
					diodeValue = 11;
					switch (enemyDirection) {
					case 1:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID - diodeValue;
						break;
					case 4:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 5:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				case 205:
					diodeValue = 12;
					switch (enemyDirection) {
					case 1:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID - diodeValue;
						break;
					case 4:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 5:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				case 206:
					diodeValue = 13;
					switch (enemyDirection) {
					case 1:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID - diodeValue;
						break;
					case 4:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 5:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				default:
					break;
				}
			}
			break;
		case 2:
			if (enemyDiodeID == 191) {
				enemyDirection = getRand(1, 4);
				if (enemyDirection == 1) {
					newDiodeID = enemyDiodeID + 1;
				} else if (enemyDirection == 2 || enemyDirection == 4) {
					newDiodeID = enemyDiodeID - 1;
				} else {
					newDiodeID = enemyDiodeID - 31;
				}
			} else if (enemyDiodeID == 176) {
				enemyDirection = getRand(1, 4);
				if (enemyDirection == 1 || enemyDirection == 4) {
					newDiodeID = enemyDiodeID + 1;
				} else if (enemyDirection == 2) {
					newDiodeID = enemyDiodeID - 1;
				} else {
					newDiodeID = enemyDiodeID + 31;
				}
			} else {
				enemyDirection = getRand(1, 6);
				uint16_t topDiodeID = 193;
				uint16_t rightDiodeID = 189;
				uint16_t bottomDiodeID = 161;
				uint16_t leftDiodeID = 191;
				uint16_t diodeValue;
				switch (enemyDiodeID) {
				case 190:
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID;
						break;
					case 2:
						newDiodeID = rightDiodeID;
						break;
					case 3:
						newDiodeID = bottomDiodeID;
						break;
					case 4:
						newDiodeID = leftDiodeID;
						break;
					case 5:
						newDiodeID = rightDiodeID;
						break;
					case 6:
						newDiodeID = leftDiodeID;
						break;
					default:
						break;
					}
					break;
				case 189:
					diodeValue = 1;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					default:
						break;
					}
					break;
				case 188:
					diodeValue = 2;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					default:
						break;
					}
					break;
				case 187:
					diodeValue = 3;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					default:
						break;
					}
					break;
				case 186:
					diodeValue = 4;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					default:
						break;
					}
					break;
				case 185:
					diodeValue = 5;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					default:
						break;
					}
					break;
				case 184:
					diodeValue = 6;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					default:
						break;
					}
					break;
				case 183:
					diodeValue = 7;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					default:
						break;
					}
					break;
				case 182:
					diodeValue = 8;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					default:
						break;
					}
					break;
				case 181:
					diodeValue = 9;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					default:
						break;
					}
					break;
				case 180:
					diodeValue = 10;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					default:
						break;
					}
					break;
				case 179:
					diodeValue = 11;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					default:
						break;
					}
					break;
				case 178:
					diodeValue = 12;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					default:
						break;
					}
					break;
				case 177:
					diodeValue = 13;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					default:
						break;
					}
					break;
				default:
					break;
				}
			}
			break;
		case 3:
			if (enemyDiodeID == 160) {
				enemyDirection = getRand(1, 4);
				if (enemyDirection == 1) {
					newDiodeID = enemyDiodeID + 31;
				} else if (enemyDirection == 2 || enemyDirection == 4) {
					newDiodeID = enemyDiodeID + 1;
				} else {
					newDiodeID = enemyDiodeID - 1;
				}
			} else if (enemyDiodeID == 175) {
				enemyDirection = getRand(1, 3);
				if (enemyDirection == 1) {
					newDiodeID = enemyDiodeID + 1;
				} else if (enemyDirection == 2 || enemyDirection == 4) {
					newDiodeID = enemyDiodeID - 1;
				} else {
					newDiodeID = enemyDiodeID - 31;
				}
			} else {
				enemyDirection = getRand(1, 6);
				uint16_t topDiodeID = 190;
				uint16_t rightDiodeID = 162;
				uint16_t bottomDiodeID = 158;
				uint16_t leftDiodeID = 160;
				uint16_t diodeValue;
				switch (enemyDiodeID) {
				case 161:
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID;
						break;
					case 2:
						newDiodeID = rightDiodeID;
						break;
					case 3:
						newDiodeID = bottomDiodeID;
						break;
					case 4:
						newDiodeID = leftDiodeID;
						break;
					case 5:
						newDiodeID = rightDiodeID;
						break;
					case 6:
						newDiodeID = leftDiodeID;
						break;
					default:
						break;
					}
					break;
				case 162:
					diodeValue = 1;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID - diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID - diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				case 163:
					diodeValue = 2;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID - diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID - diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				case 164:
					diodeValue = 3;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID - diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID - diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				case 165:
					diodeValue = 4;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID - diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID - diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				case 166:
					diodeValue = 5;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID - diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID - diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				case 167:
					diodeValue = 6;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID - diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID - diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				case 168:
					diodeValue = 7;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID - diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID - diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				case 169:
					diodeValue = 8;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID - diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID - diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				case 170:
					diodeValue = 9;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID - diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID - diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				case 171:
					diodeValue = 10;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID - diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID - diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				case 172:
					diodeValue = 11;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID - diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID - diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				case 173:
					diodeValue = 12;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID - diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID - diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				case 174:
					diodeValue = 13;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID - diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID - diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				default:
					break;
				}
			}
			break;
		case 4:
			if (enemyDiodeID == 159) {
				enemyDirection = getRand(1, 4);
				if (enemyDirection == 1 || enemyDirection == 4) {
					newDiodeID = enemyDiodeID - 1;
				} else if (enemyDirection == 2) {
					newDiodeID = enemyDiodeID + 1;
				} else {
					newDiodeID = enemyDiodeID - 31;
				}
			} else if (enemyDiodeID == 144) {
				enemyDirection = getRand(1, 4);
				if (enemyDirection == 1) {
					newDiodeID = enemyDiodeID + 31;
				} else if (enemyDirection == 2 || enemyDirection == 4) {
					newDiodeID = enemyDiodeID + 1;
				} else {
					newDiodeID = enemyDiodeID - 1;
				}
			} else {
				enemyDirection = getRand(1, 6);
				uint16_t topDiodeID = 161;
				uint16_t rightDiodeID = 157;
				uint16_t bottomDiodeID = 129;
				uint16_t leftDiodeID = 159;
				uint16_t diodeValue;
				switch (enemyDiodeID) {
				case 158:
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID;
						break;
					case 2:
						newDiodeID = rightDiodeID;
						break;
					case 3:
						newDiodeID = bottomDiodeID;
						break;
					case 4:
						newDiodeID = leftDiodeID;
						break;
					case 5:
						newDiodeID = rightDiodeID;
						break;
					case 6:
						newDiodeID = leftDiodeID;
						break;
					default:
						break;
					}
					break;
				case 157:
					diodeValue = 1;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					default:
						break;
					}
					break;
				case 156:
					diodeValue = 2;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					default:
						break;
					}
					break;
				case 155:
					diodeValue = 3;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					default:
						break;
					}
					break;
				case 154:
					diodeValue = 4;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					default:
						break;
					}
					break;
				case 153:
					diodeValue = 5;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					default:
						break;
					}
					break;
				case 152:
					diodeValue = 6;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					default:
						break;
					}
					break;
				case 151:
					diodeValue = 7;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					default:
						break;
					}
					break;
				case 150:
					diodeValue = 8;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					default:
						break;
					}
					break;
				case 149:
					diodeValue = 9;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					default:
						break;
					}
					break;
				case 148:
					diodeValue = 10;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					default:
						break;
					}
					break;
				case 147:
					diodeValue = 11;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					default:
						break;
					}
					break;
				case 146:
					diodeValue = 12;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					default:
						break;
					}
					break;
				case 145:
					diodeValue = 13;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					default:
						break;
					}
					break;
				default:
					break;
				}
			}
			break;
		case 5:
			if (enemyDiodeID == 128) {
				enemyDirection = getRand(1, 3);
				if (enemyDirection == 1) {
					newDiodeID = enemyDiodeID + 31;
				} else if (enemyDirection == 2) {
					newDiodeID = enemyDiodeID + 1;
				} else {
					newDiodeID = enemyDiodeID - 1;
				}
			} else if (enemyDiodeID == 143) {
				enemyDirection = getRand(1, 3);
				if (enemyDirection == 1) {
					newDiodeID = enemyDiodeID + 1;
				} else if (enemyDirection == 2) {
					newDiodeID = enemyDiodeID - 1;
				} else {
					newDiodeID = enemyDiodeID - 31;
				}
			} else {
				enemyDirection = getRand(1, 4);
				uint16_t topDiodeID = 158;
				uint16_t rightDiodeID = 130;
				uint16_t bottomDiodeID = 126;
				uint16_t leftDiodeID = 128;
				uint16_t diodeValue;
				switch (enemyDiodeID) {
				case 129:
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID;
						break;
					case 2:
						newDiodeID = rightDiodeID;
						break;
					case 3:
						newDiodeID = bottomDiodeID;
						break;
					case 4:
						newDiodeID = leftDiodeID;
						break;
					default:
						break;
					}
					break;
				case 130:
					diodeValue = 1;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID - diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID - diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				case 131:
					diodeValue = 2;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID - diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID - diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				case 132:
					diodeValue = 3;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID - diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID - diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				case 133:
					diodeValue = 4;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID - diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID - diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				case 134:
					diodeValue = 5;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID - diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID - diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				case 135:
					diodeValue = 6;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID - diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID - diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				case 136:
					diodeValue = 7;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID - diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID - diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				case 137:
					diodeValue = 8;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID - diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID - diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				case 138:
					diodeValue = 9;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID - diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID - diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				case 139:
					diodeValue = 10;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID - diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID - diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				case 140:
					diodeValue = 11;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID - diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID - diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				case 141:
					diodeValue = 12;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID - diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID - diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				case 142:
					diodeValue = 13;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID - diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID - diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				default:
					break;
				}
			}
			break;
		case 6:
			if (enemyDiodeID == 127) {
				enemyDirection = getRand(1, 4);
				if (enemyDirection == 1) {
					newDiodeID = enemyDiodeID + 1;
				} else if (enemyDirection == 2 || enemyDirection == 4) {
					newDiodeID = enemyDiodeID - 1;
				} else {
					newDiodeID = enemyDiodeID - 31;
				}
			} else if (enemyDiodeID == 112) {
				enemyDirection = getRand(1, 4);
				if (enemyDirection == 1) {
					newDiodeID = enemyDiodeID + 31;
				} else if (enemyDirection == 2 || enemyDirection == 4) {
					newDiodeID = enemyDiodeID + 1;
				} else {
					newDiodeID = enemyDiodeID - 1;
				}
			} else {
				enemyDirection = getRand(1, 6);
				uint16_t topDiodeID = 129;
				uint16_t rightDiodeID = 125;
				uint16_t bottomDiodeID = 97;
				uint16_t leftDiodeID = 127;
				uint16_t diodeValue;
				switch (enemyDiodeID) {
				case 126:
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID;
						break;
					case 2:
						newDiodeID = rightDiodeID;
						break;
					case 3:
						newDiodeID = bottomDiodeID;
						break;
					case 4:
						newDiodeID = leftDiodeID;
						break;
					case 5:
						newDiodeID = rightDiodeID;
						break;
					case 6:
						newDiodeID = leftDiodeID;
						break;
					default:
						break;
					}
					break;
				case 125:
					diodeValue = 1;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					default:
						break;
					}
					break;
				case 124:
					diodeValue = 2;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					default:
						break;
					}
					break;
				case 123:
					diodeValue = 3;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					default:
						break;
					}
					break;
				case 122:
					diodeValue = 4;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					default:
						break;
					}
					break;
				case 121:
					diodeValue = 5;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					default:
						break;
					}
					break;
				case 120:
					diodeValue = 6;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					default:
						break;
					}
					break;
				case 119:
					diodeValue = 7;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					default:
						break;
					}
					break;
				case 118:
					diodeValue = 8;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					default:
						break;
					}
					break;
				case 117:
					diodeValue = 9;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					default:
						break;
					}
					break;
				case 116:
					diodeValue = 10;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					default:
						break;
					}
					break;
				case 115:
					diodeValue = 11;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					default:
						break;
					}
					break;
				case 114:
					diodeValue = 12;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					default:
						break;
					}
					break;
				case 113:
					diodeValue = 13;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID + diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 3:
						newDiodeID = bottomDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					case 5:
						newDiodeID = rightDiodeID - diodeValue;
						break;
					case 6:
						newDiodeID = leftDiodeID - diodeValue;
						break;
					default:
						break;
					}
					break;
				default:
					break;
				}
			}
			break;
		case 7:
			if (enemyDiodeID == 96) {
				enemyDirection = getRand(1, 3);
				if (enemyDirection == 1 || enemyDirection == 3) {
					newDiodeID = enemyDiodeID + 1;
				} else {
					newDiodeID = enemyDiodeID + 31;
				}
			} else if (enemyDiodeID == 111) {
				enemyDirection = getRand(1, 3);
				if (enemyDirection == 1 || enemyDirection == 3) {
					newDiodeID = enemyDiodeID + 1;
				} else {
					newDiodeID = enemyDiodeID - 1;
				}
			} else {
				enemyDirection = getRand(1, 5);
				uint16_t topDiodeID = 126;
				uint16_t rightDiodeID = 98;
				uint16_t leftDiodeID = 96;
				uint16_t diodeValue;
				switch (enemyDiodeID) {
				case 97:
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID;
						break;
					case 2:
						newDiodeID = rightDiodeID;
						break;
					case 3:
						newDiodeID = leftDiodeID;
						break;
					case 4:
						newDiodeID = rightDiodeID;
						break;
					case 5:
						newDiodeID = leftDiodeID;
						break;
					default:
						break;
					}
					break;
				case 98:
					diodeValue = 1;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID - diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 5:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				case 99:
					diodeValue = 2;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID - diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 5:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				case 100:
					diodeValue = 3;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID - diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 5:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				case 101:
					diodeValue = 4;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID - diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 5:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				case 102:
					diodeValue = 5;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID - diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 5:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				case 103:
					diodeValue = 6;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID - diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 5:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				case 104:
					diodeValue = 7;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID - diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 5:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				case 105:
					diodeValue = 8;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID - diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 5:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				case 106:
					diodeValue = 9;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID - diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 5:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				case 107:
					diodeValue = 10;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID - diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 5:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				case 108:
					diodeValue = 11;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID - diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 5:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				case 109:
					diodeValue = 12;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID - diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 5:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				case 110:
					diodeValue = 13;
					switch (enemyDirection) {
					case 1:
						newDiodeID = topDiodeID - diodeValue;
						break;
					case 2:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 3:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					case 4:
						newDiodeID = rightDiodeID + diodeValue;
						break;
					case 5:
						newDiodeID = leftDiodeID + diodeValue;
						break;
					default:
						break;
					}
					break;
				default:
					break;
				}
			}
			break;
		default:
			break;
		}
		if (DiodeArray[newDiodeID].FreeSpace && newDiodeID != 0) {
			DiodeArray[newDiodeID].HP = DiodeArray[enemyDiodeID].HP;
			DiodeArray[newDiodeID].Enemy = true;
			DiodeArray[newDiodeID].FreeSpace = false;
			switch (DiodeArray[newDiodeID].HP) {
			case 1:
				setPixelColor((uint16_t) newDiodeID, RED);
				break;
			case 2:
				setPixelColor((uint16_t) newDiodeID, YELLOW);
				break;
			case 3:
				setPixelColor((uint16_t) newDiodeID, GREEN);
				break;
			default:
				break;
			}
			DiodeArray[enemyDiodeID].HP = -1;
			DiodeArray[enemyDiodeID].Enemy = false;
			DiodeArray[enemyDiodeID].FreeSpace = true;
			setPixelColor((uint16_t) enemyDiodeID, THEME);
		}
	}
}
void checkForEnemyHit() {
	int currentPlayerBulletIndex = 0;
	int enemyToHitIndex = 0;
	for (int i = 80; i < 256; i++) {
		if (DiodeArray[i].PlayerBullet) {
			currentPlayerBulletIndex = (int) i;
		}
	}
	switch (currentPlayerBulletIndex) {
	case 95:
		if (DiodeArray[96].Enemy) {
			enemyToHitIndex = 96;
		}
		break;
	case 96:
		if (DiodeArray[127].Enemy) {
			enemyToHitIndex = 127;
		}
		break;
	case 127:
		if (DiodeArray[128].Enemy) {
			enemyToHitIndex = 128;
		}
		break;
	case 128:
		if (DiodeArray[159].Enemy) {
			enemyToHitIndex = 159;
		}
		break;
	case 159:
		if (DiodeArray[160].Enemy) {
			enemyToHitIndex = 160;
		}
		break;
	case 160:
		if (DiodeArray[191].Enemy) {
			enemyToHitIndex = 191;
		}
		break;
	case 191:
		if (DiodeArray[192].Enemy) {
			enemyToHitIndex = 192;
		}
		break;
	case 94:
		if (DiodeArray[97].Enemy) {
			enemyToHitIndex = 97;
		}
		break;
	case 97:
		if (DiodeArray[126].Enemy) {
			enemyToHitIndex = 126;
		}
		break;
	case 126:
		if (DiodeArray[129].Enemy) {
			enemyToHitIndex = 129;
		}
		break;
	case 129:
		if (DiodeArray[158].Enemy) {
			enemyToHitIndex = 158;
		}
		break;
	case 158:
		if (DiodeArray[161].Enemy) {
			enemyToHitIndex = 161;
		}
		break;
	case 161:
		if (DiodeArray[190].Enemy) {
			enemyToHitIndex = 190;
		}
		break;
	case 190:
		if (DiodeArray[193].Enemy) {
			enemyToHitIndex = 193;
		}
		break;
	case 93:
		if (DiodeArray[98].Enemy) {
			enemyToHitIndex = 98;
		}
		break;
	case 98:
		if (DiodeArray[125].Enemy) {
			enemyToHitIndex = 125;
		}
		break;
	case 125:
		if (DiodeArray[130].Enemy) {
			enemyToHitIndex = 130;
		}
		break;
	case 130:
		if (DiodeArray[157].Enemy) {
			enemyToHitIndex = 157;
		}
		break;
	case 157:
		if (DiodeArray[162].Enemy) {
			enemyToHitIndex = 162;
		}
		break;
	case 162:
		if (DiodeArray[189].Enemy) {
			enemyToHitIndex = 189;
		}
		break;
	case 189:
		if (DiodeArray[194].Enemy) {
			enemyToHitIndex = 194;
		}
		break;
	case 92:
		if (DiodeArray[99].Enemy) {
			enemyToHitIndex = 99;
		}
		break;
	case 99:
		if (DiodeArray[124].Enemy) {
			enemyToHitIndex = 124;
		}
		break;
	case 124:
		if (DiodeArray[131].Enemy) {
			enemyToHitIndex = 131;
		}
		break;
	case 131:
		if (DiodeArray[156].Enemy) {
			enemyToHitIndex = 156;
		}
		break;
	case 156:
		if (DiodeArray[163].Enemy) {
			enemyToHitIndex = 163;
		}
		break;
	case 163:
		if (DiodeArray[188].Enemy) {
			enemyToHitIndex = 188;
		}
		break;
	case 188:
		if (DiodeArray[195].Enemy) {
			enemyToHitIndex = 195;
		}
		break;
	case 91:
		if (DiodeArray[100].Enemy) {
			enemyToHitIndex = 100;
		}
		break;
	case 100:
		if (DiodeArray[123].Enemy) {
			enemyToHitIndex = 123;
		}
		break;
	case 123:
		if (DiodeArray[132].Enemy) {
			enemyToHitIndex = 132;
		}
		break;
	case 132:
		if (DiodeArray[155].Enemy) {
			enemyToHitIndex = 155;
		}
		break;
	case 155:
		if (DiodeArray[164].Enemy) {
			enemyToHitIndex = 164;
		}
		break;
	case 164:
		if (DiodeArray[187].Enemy) {
			enemyToHitIndex = 187;
		}
		break;
	case 187:
		if (DiodeArray[196].Enemy) {
			enemyToHitIndex = 196;
		}
		break;
	case 90:
		if (DiodeArray[101].Enemy) {
			enemyToHitIndex = 101;
		}
		break;
	case 101:
		if (DiodeArray[122].Enemy) {
			enemyToHitIndex = 122;
		}
		break;
	case 122:
		if (DiodeArray[133].Enemy) {
			enemyToHitIndex = 133;
		}
		break;
	case 133:
		if (DiodeArray[154].Enemy) {
			enemyToHitIndex = 154;
		}
		break;
	case 154:
		if (DiodeArray[165].Enemy) {
			enemyToHitIndex = 165;
		}
		break;
	case 165:
		if (DiodeArray[186].Enemy) {
			enemyToHitIndex = 186;
		}
		break;
	case 186:
		if (DiodeArray[197].Enemy) {
			enemyToHitIndex = 197;
		}
		break;
	case 89:
		if (DiodeArray[102].Enemy) {
			enemyToHitIndex = 102;
		}
		break;
	case 102:
		if (DiodeArray[121].Enemy) {
			enemyToHitIndex = 121;
		}
		break;
	case 121:
		if (DiodeArray[134].Enemy) {
			enemyToHitIndex = 134;
		}
		break;
	case 134:
		if (DiodeArray[153].Enemy) {
			enemyToHitIndex = 153;
		}
		break;
	case 153:
		if (DiodeArray[166].Enemy) {
			enemyToHitIndex = 166;
		}
		break;
	case 166:
		if (DiodeArray[185].Enemy) {
			enemyToHitIndex = 185;
		}
		break;
	case 185:
		if (DiodeArray[198].Enemy) {
			enemyToHitIndex = 198;
		}
		break;
	case 88:
		if (DiodeArray[103].Enemy) {
			enemyToHitIndex = 103;
		}
		break;
	case 103:
		if (DiodeArray[120].Enemy) {
			enemyToHitIndex = 120;
		}
		break;
	case 120:
		if (DiodeArray[135].Enemy) {
			enemyToHitIndex = 135;
		}
		break;
	case 135:
		if (DiodeArray[152].Enemy) {
			enemyToHitIndex = 152;
		}
		break;
	case 152:
		if (DiodeArray[167].Enemy) {
			enemyToHitIndex = 167;
		}
		break;
	case 167:
		if (DiodeArray[184].Enemy) {
			enemyToHitIndex = 184;
		}
		break;
	case 184:
		if (DiodeArray[199].Enemy) {
			enemyToHitIndex = 199;
		}
		break;
	case 87:
		if (DiodeArray[104].Enemy) {
			enemyToHitIndex = 104;
		}
		break;
	case 104:
		if (DiodeArray[119].Enemy) {
			enemyToHitIndex = 119;
		}
		break;
	case 119:
		if (DiodeArray[136].Enemy) {
			enemyToHitIndex = 136;
		}
		break;
	case 136:
		if (DiodeArray[151].Enemy) {
			enemyToHitIndex = 151;
		}
		break;
	case 151:
		if (DiodeArray[168].Enemy) {
			enemyToHitIndex = 168;
		}
		break;
	case 168:
		if (DiodeArray[183].Enemy) {
			enemyToHitIndex = 183;
		}
		break;
	case 183:
		if (DiodeArray[200].Enemy) {
			enemyToHitIndex = 200;
		}
		break;
	case 86:
		if (DiodeArray[105].Enemy) {
			enemyToHitIndex = 105;
		}
		break;
	case 105:
		if (DiodeArray[118].Enemy) {
			enemyToHitIndex = 118;
		}
		break;
	case 118:
		if (DiodeArray[137].Enemy) {
			enemyToHitIndex = 137;
		}
		break;
	case 137:
		if (DiodeArray[150].Enemy) {
			enemyToHitIndex = 150;
		}
		break;
	case 150:
		if (DiodeArray[169].Enemy) {
			enemyToHitIndex = 169;
		}
		break;
	case 169:
		if (DiodeArray[182].Enemy) {
			enemyToHitIndex = 182;
		}
		break;
	case 182:
		if (DiodeArray[201].Enemy) {
			enemyToHitIndex = 201;
		}
		break;
	case 85:
		if (DiodeArray[106].Enemy) {
			enemyToHitIndex = 106;
		}
		break;
	case 106:
		if (DiodeArray[117].Enemy) {
			enemyToHitIndex = 117;
		}
		break;
	case 117:
		if (DiodeArray[138].Enemy) {
			enemyToHitIndex = 138;
		}
		break;
	case 138:
		if (DiodeArray[149].Enemy) {
			enemyToHitIndex = 149;
		}
		break;
	case 149:
		if (DiodeArray[170].Enemy) {
			enemyToHitIndex = 170;
		}
		break;
	case 170:
		if (DiodeArray[181].Enemy) {
			enemyToHitIndex = 181;
		}
		break;
	case 181:
		if (DiodeArray[202].Enemy) {
			enemyToHitIndex = 202;
		}
		break;
	case 84:
		if (DiodeArray[107].Enemy) {
			enemyToHitIndex = 107;
		}
		break;
	case 107:
		if (DiodeArray[116].Enemy) {
			enemyToHitIndex = 116;
		}
		break;
	case 116:
		if (DiodeArray[139].Enemy) {
			enemyToHitIndex = 139;
		}
		break;
	case 139:
		if (DiodeArray[148].Enemy) {
			enemyToHitIndex = 148;
		}
		break;
	case 148:
		if (DiodeArray[171].Enemy) {
			enemyToHitIndex = 171;
		}
		break;
	case 171:
		if (DiodeArray[180].Enemy) {
			enemyToHitIndex = 180;
		}
		break;
	case 180:
		if (DiodeArray[203].Enemy) {
			enemyToHitIndex = 203;
		}
		break;
	case 83:
		if (DiodeArray[108].Enemy) {
			enemyToHitIndex = 108;
		}
		break;
	case 108:
		if (DiodeArray[115].Enemy) {
			enemyToHitIndex = 115;
		}
		break;
	case 115:
		if (DiodeArray[140].Enemy) {
			enemyToHitIndex = 140;
		}
		break;
	case 140:
		if (DiodeArray[147].Enemy) {
			enemyToHitIndex = 147;
		}
		break;
	case 147:
		if (DiodeArray[172].Enemy) {
			enemyToHitIndex = 172;
		}
		break;
	case 172:
		if (DiodeArray[179].Enemy) {
			enemyToHitIndex = 179;
		}
		break;
	case 179:
		if (DiodeArray[204].Enemy) {
			enemyToHitIndex = 204;
		}
		break;
	case 82:
		if (DiodeArray[109].Enemy) {
			enemyToHitIndex = 109;
		}
		break;
	case 109:
		if (DiodeArray[114].Enemy) {
			enemyToHitIndex = 114;
		}
		break;
	case 114:
		if (DiodeArray[141].Enemy) {
			enemyToHitIndex = 141;
		}
		break;
	case 141:
		if (DiodeArray[146].Enemy) {
			enemyToHitIndex = 146;
		}
		break;
	case 146:
		if (DiodeArray[173].Enemy) {
			enemyToHitIndex = 173;
		}
		break;
	case 173:
		if (DiodeArray[178].Enemy) {
			enemyToHitIndex = 178;
		}
		break;
	case 178:
		if (DiodeArray[205].Enemy) {
			enemyToHitIndex = 205;
		}
		break;
	case 81:
		if (DiodeArray[110].Enemy) {
			enemyToHitIndex = 110;
		}
		break;
	case 110:
		if (DiodeArray[113].Enemy) {
			enemyToHitIndex = 113;
		}
		break;
	case 113:
		if (DiodeArray[142].Enemy) {
			enemyToHitIndex = 142;
		}
		break;
	case 142:
		if (DiodeArray[145].Enemy) {
			enemyToHitIndex = 145;
		}
		break;
	case 145:
		if (DiodeArray[174].Enemy) {
			enemyToHitIndex = 174;
		}
		break;
	case 174:
		if (DiodeArray[177].Enemy) {
			enemyToHitIndex = 177;
		}
		break;
	case 177:
		if (DiodeArray[206].Enemy) {
			enemyToHitIndex = 206;
		}
		break;
	case 80:
		if (DiodeArray[111].Enemy) {
			enemyToHitIndex = 111;
		}
		break;
	case 111:
		if (DiodeArray[112].Enemy) {
			enemyToHitIndex = 112;
		}
		break;
	case 112:
		if (DiodeArray[143].Enemy) {
			enemyToHitIndex = 143;
		}
		break;
	case 143:
		if (DiodeArray[144].Enemy) {
			enemyToHitIndex = 144;
		}
		break;
	case 144:
		if (DiodeArray[175].Enemy) {
			enemyToHitIndex = 175;
		}
		break;
	case 175:
		if (DiodeArray[176].Enemy) {
			enemyToHitIndex = 176;
		}
		break;
	case 176:
		if (DiodeArray[207].Enemy) {
			enemyToHitIndex = 207;
		}
		break;
	default:
		break;
	}

	if (enemyToHitIndex != 0 && currentPlayerBulletIndex != 0) {
		shotFromID = 0;
		playerBulletRoute = 0;
		playerStartShot = false;

		DiodeArray[currentPlayerBulletIndex].PlayerBullet = false;
		DiodeArray[currentPlayerBulletIndex].Enemy = false;
		DiodeArray[currentPlayerBulletIndex].FreeSpace = true;
		setPixelColor(currentPlayerBulletIndex, THEME);

		newScore++;

		switch (DiodeArray[enemyToHitIndex].HP) {
		case 1:
			DiodeArray[enemyToHitIndex].HP = -1;
			DiodeArray[enemyToHitIndex].FreeSpace = true;
			DiodeArray[enemyToHitIndex].Enemy = false;
			DiodeArray[enemyToHitIndex].PlayerBullet = false;

			setPixelColor(enemyToHitIndex, THEME);
			break;
		case 2:
			DiodeArray[enemyToHitIndex].HP = 1;
			setPixelColor(enemyToHitIndex, RED);
			break;
		case 3:
			DiodeArray[enemyToHitIndex].HP = 2;
			setPixelColor(enemyToHitIndex, YELLOW);
			break;
		default:
			break;
		}
	}
}
int getEnemyBulletLine(int enemyDiodeID) {
	int enemyBulletLine;
	switch (enemyDiodeID) {
	case 192:
		enemyBulletLine = 1;
		break;
	case 191:
		enemyBulletLine = 1;
		break;
	case 160:
		enemyBulletLine = 1;
		break;
	case 159:
		enemyBulletLine = 1;
		break;
	case 128:
		enemyBulletLine = 1;
		break;
	case 127:
		enemyBulletLine = 1;
		break;
	case 96:
		enemyBulletLine = 1;
		break;
	case 95:
		enemyBulletLine = 1;
		break;
	case 64:
		enemyBulletLine = 1;
		break;
	case 63:
		enemyBulletLine = 1;
		break;
	case 32:
		enemyBulletLine = 1;
		break;
	case 193:
		enemyBulletLine = 2;
		break;
	case 190:
		enemyBulletLine = 2;
		break;
	case 161:
		enemyBulletLine = 2;
		break;
	case 158:
		enemyBulletLine = 2;
		break;
	case 129:
		enemyBulletLine = 2;
		break;
	case 126:
		enemyBulletLine = 2;
		break;
	case 97:
		enemyBulletLine = 2;
		break;
	case 94:
		enemyBulletLine = 2;
		break;
	case 65:
		enemyBulletLine = 2;
		break;
	case 62:
		enemyBulletLine = 2;
		break;
	case 33:
		enemyBulletLine = 2;
		break;
	case 194:
		enemyBulletLine = 3;
		break;
	case 189:
		enemyBulletLine = 3;
		break;
	case 162:
		enemyBulletLine = 3;
		break;
	case 157:
		enemyBulletLine = 3;
		break;
	case 130:
		enemyBulletLine = 3;
		break;
	case 125:
		enemyBulletLine = 3;
		break;
	case 98:
		enemyBulletLine = 3;
		break;
	case 93:
		enemyBulletLine = 3;
		break;
	case 66:
		enemyBulletLine = 3;
		break;
	case 61:
		enemyBulletLine = 3;
		break;
	case 34:
		enemyBulletLine = 3;
		break;
	case 195:
		enemyBulletLine = 4;
		break;
	case 188:
		enemyBulletLine = 4;
		break;
	case 163:
		enemyBulletLine = 4;
		break;
	case 156:
		enemyBulletLine = 4;
		break;
	case 131:
		enemyBulletLine = 4;
		break;
	case 124:
		enemyBulletLine = 4;
		break;
	case 99:
		enemyBulletLine = 4;
		break;
	case 92:
		enemyBulletLine = 4;
		break;
	case 67:
		enemyBulletLine = 4;
		break;
	case 60:
		enemyBulletLine = 4;
		break;
	case 35:
		enemyBulletLine = 4;
		break;
	case 196:
		enemyBulletLine = 5;
		break;
	case 187:
		enemyBulletLine = 5;
		break;
	case 164:
		enemyBulletLine = 5;
		break;
	case 155:
		enemyBulletLine = 5;
		break;
	case 132:
		enemyBulletLine = 5;
		break;
	case 123:
		enemyBulletLine = 5;
		break;
	case 100:
		enemyBulletLine = 5;
		break;
	case 91:
		enemyBulletLine = 5;
		break;
	case 68:
		enemyBulletLine = 5;
		break;
	case 59:
		enemyBulletLine = 5;
		break;
	case 36:
		enemyBulletLine = 5;
		break;
	case 197:
		enemyBulletLine = 6;
		break;
	case 186:
		enemyBulletLine = 6;
		break;
	case 165:
		enemyBulletLine = 6;
		break;
	case 154:
		enemyBulletLine = 6;
		break;
	case 133:
		enemyBulletLine = 6;
		break;
	case 122:
		enemyBulletLine = 6;
		break;
	case 101:
		enemyBulletLine = 6;
		break;
	case 90:
		enemyBulletLine = 6;
		break;
	case 69:
		enemyBulletLine = 6;
		break;
	case 58:
		enemyBulletLine = 6;
		break;
	case 37:
		enemyBulletLine = 6;
		break;
	case 198:
		enemyBulletLine = 7;
		break;
	case 185:
		enemyBulletLine = 7;
		break;
	case 166:
		enemyBulletLine = 7;
		break;
	case 153:
		enemyBulletLine = 7;
		break;
	case 134:
		enemyBulletLine = 7;
		break;
	case 121:
		enemyBulletLine = 7;
		break;
	case 102:
		enemyBulletLine = 7;
		break;
	case 89:
		enemyBulletLine = 7;
		break;
	case 70:
		enemyBulletLine = 7;
		break;
	case 57:
		enemyBulletLine = 7;
		break;
	case 38:
		enemyBulletLine = 7;
		break;
	case 199:
		enemyBulletLine = 8;
		break;
	case 184:
		enemyBulletLine = 8;
		break;
	case 167:
		enemyBulletLine = 8;
		break;
	case 152:
		enemyBulletLine = 8;
		break;
	case 135:
		enemyBulletLine = 8;
		break;
	case 120:
		enemyBulletLine = 8;
		break;
	case 103:
		enemyBulletLine = 8;
		break;
	case 88:
		enemyBulletLine = 8;
		break;
	case 71:
		enemyBulletLine = 8;
		break;
	case 56:
		enemyBulletLine = 8;
		break;
	case 39:
		enemyBulletLine = 8;
		break;
	case 200:
		enemyBulletLine = 9;
		break;
	case 183:
		enemyBulletLine = 9;
		break;
	case 168:
		enemyBulletLine = 9;
		break;
	case 151:
		enemyBulletLine = 9;
		break;
	case 136:
		enemyBulletLine = 9;
		break;
	case 119:
		enemyBulletLine = 9;
		break;
	case 104:
		enemyBulletLine = 9;
		break;
	case 87:
		enemyBulletLine = 9;
		break;
	case 72:
		enemyBulletLine = 9;
		break;
	case 55:
		enemyBulletLine = 9;
		break;
	case 40:
		enemyBulletLine = 9;
		break;
	case 201:
		enemyBulletLine = 10;
		break;
	case 182:
		enemyBulletLine = 10;
		break;
	case 169:
		enemyBulletLine = 10;
		break;
	case 150:
		enemyBulletLine = 10;
		break;
	case 137:
		enemyBulletLine = 10;
		break;
	case 118:
		enemyBulletLine = 10;
		break;
	case 105:
		enemyBulletLine = 10;
		break;
	case 86:
		enemyBulletLine = 10;
		break;
	case 73:
		enemyBulletLine = 10;
		break;
	case 54:
		enemyBulletLine = 10;
		break;
	case 41:
		enemyBulletLine = 10;
		break;
	case 202:
		enemyBulletLine = 11;
		break;
	case 181:
		enemyBulletLine = 11;
		break;
	case 170:
		enemyBulletLine = 11;
		break;
	case 149:
		enemyBulletLine = 11;
		break;
	case 138:
		enemyBulletLine = 11;
		break;
	case 117:
		enemyBulletLine = 11;
		break;
	case 106:
		enemyBulletLine = 11;
		break;
	case 85:
		enemyBulletLine = 11;
		break;
	case 74:
		enemyBulletLine = 11;
		break;
	case 53:
		enemyBulletLine = 11;
		break;
	case 42:
		enemyBulletLine = 11;
		break;
	case 203:
		enemyBulletLine = 12;
		break;
	case 180:
		enemyBulletLine = 12;
		break;
	case 171:
		enemyBulletLine = 12;
		break;
	case 148:
		enemyBulletLine = 12;
		break;
	case 139:
		enemyBulletLine = 12;
		break;
	case 116:
		enemyBulletLine = 12;
		break;
	case 107:
		enemyBulletLine = 12;
		break;
	case 84:
		enemyBulletLine = 12;
		break;
	case 75:
		enemyBulletLine = 12;
		break;
	case 52:
		enemyBulletLine = 12;
		break;
	case 43:
		enemyBulletLine = 12;
		break;
	case 204:
		enemyBulletLine = 13;
		break;
	case 179:
		enemyBulletLine = 13;
		break;
	case 172:
		enemyBulletLine = 13;
		break;
	case 147:
		enemyBulletLine = 13;
		break;
	case 140:
		enemyBulletLine = 13;
		break;
	case 115:
		enemyBulletLine = 13;
		break;
	case 108:
		enemyBulletLine = 13;
		break;
	case 83:
		enemyBulletLine = 13;
		break;
	case 76:
		enemyBulletLine = 13;
		break;
	case 51:
		enemyBulletLine = 13;
		break;
	case 44:
		enemyBulletLine = 13;
		break;
	case 205:
		enemyBulletLine = 14;
		break;
	case 178:
		enemyBulletLine = 14;
		break;
	case 173:
		enemyBulletLine = 14;
		break;
	case 146:
		enemyBulletLine = 14;
		break;
	case 141:
		enemyBulletLine = 14;
		break;
	case 114:
		enemyBulletLine = 14;
		break;
	case 109:
		enemyBulletLine = 14;
		break;
	case 82:
		enemyBulletLine = 14;
		break;
	case 77:
		enemyBulletLine = 14;
		break;
	case 50:
		enemyBulletLine = 14;
		break;
	case 45:
		enemyBulletLine = 14;
		break;
	case 206:
		enemyBulletLine = 15;
		break;
	case 177:
		enemyBulletLine = 15;
		break;
	case 174:
		enemyBulletLine = 15;
		break;
	case 145:
		enemyBulletLine = 15;
		break;
	case 142:
		enemyBulletLine = 15;
		break;
	case 113:
		enemyBulletLine = 15;
		break;
	case 110:
		enemyBulletLine = 15;
		break;
	case 81:
		enemyBulletLine = 15;
		break;
	case 78:
		enemyBulletLine = 15;
		break;
	case 49:
		enemyBulletLine = 15;
		break;
	case 46:
		enemyBulletLine = 15;
		break;
	case 207:
		enemyBulletLine = 16;
		break;
	case 176:
		enemyBulletLine = 16;
		break;
	case 175:
		enemyBulletLine = 16;
		break;
	case 144:
		enemyBulletLine = 16;
		break;
	case 143:
		enemyBulletLine = 16;
		break;
	case 112:
		enemyBulletLine = 16;
		break;
	case 111:
		enemyBulletLine = 16;
		break;
	case 80:
		enemyBulletLine = 16;
		break;
	case 79:
		enemyBulletLine = 16;
		break;
	case 48:
		enemyBulletLine = 16;
		break;
	case 47:
		enemyBulletLine = 16;
		break;
	default:
		break;
	}
	return enemyBulletLine;
}
void checkForBulletCollision() {
	int currentPlayerBulletIndex = 0;
	int enemyBulletIndex = 0;
	for (int i = 0; i < 256; i++) {
		if (DiodeArray[i].PlayerBullet) {
			currentPlayerBulletIndex = (int) i;
		}
	}
	switch (currentPlayerBulletIndex) {
	case 32:
		if (DiodeArray[63].EnemyBullet) {
			enemyBulletIndex = 63;
		}
		break;
	case 63:
		if (DiodeArray[64].EnemyBullet) {
			enemyBulletIndex = 64;
		}
		break;
	case 64:
		if (DiodeArray[95].EnemyBullet) {
			enemyBulletIndex = 95;
		}
		break;
	case 95:
		if (DiodeArray[96].EnemyBullet) {
			enemyBulletIndex = 96;
		}
		break;
	case 96:
		if (DiodeArray[127].EnemyBullet) {
			enemyBulletIndex = 127;
		}
		break;
	case 127:
		if (DiodeArray[128].EnemyBullet) {
			enemyBulletIndex = 128;
		}
		break;
	case 128:
		if (DiodeArray[159].EnemyBullet) {
			enemyBulletIndex = 159;
		}
		break;
	case 159:
		if (DiodeArray[160].EnemyBullet) {
			enemyBulletIndex = 160;
		}
		break;
	case 160:
		if (DiodeArray[191].EnemyBullet) {
			enemyBulletIndex = 191;
		}
		break;
	case 191:
		if (DiodeArray[192].EnemyBullet) {
			enemyBulletIndex = 192;
		}
		break;
	case 33:
		if (DiodeArray[62].EnemyBullet) {
			enemyBulletIndex = 62;
		}
		break;
	case 62:
		if (DiodeArray[65].EnemyBullet) {
			enemyBulletIndex = 65;
		}
		break;
	case 65:
		if (DiodeArray[94].EnemyBullet) {
			enemyBulletIndex = 94;
		}
		break;
	case 94:
		if (DiodeArray[97].EnemyBullet) {
			enemyBulletIndex = 97;
		}
		break;
	case 97:
		if (DiodeArray[126].EnemyBullet) {
			enemyBulletIndex = 126;
		}
		break;
	case 126:
		if (DiodeArray[129].EnemyBullet) {
			enemyBulletIndex = 129;
		}
		break;
	case 129:
		if (DiodeArray[158].EnemyBullet) {
			enemyBulletIndex = 158;
		}
		break;
	case 158:
		if (DiodeArray[161].EnemyBullet) {
			enemyBulletIndex = 161;
		}
		break;
	case 161:
		if (DiodeArray[190].EnemyBullet) {
			enemyBulletIndex = 190;
		}
		break;
	case 190:
		if (DiodeArray[193].EnemyBullet) {
			enemyBulletIndex = 193;
		}
		break;
	case 34:
		if (DiodeArray[61].EnemyBullet) {
			enemyBulletIndex = 61;
		}
		break;
	case 61:
		if (DiodeArray[66].EnemyBullet) {
			enemyBulletIndex = 66;
		}
		break;
	case 66:
		if (DiodeArray[93].EnemyBullet) {
			enemyBulletIndex = 93;
		}
		break;
	case 93:
		if (DiodeArray[98].EnemyBullet) {
			enemyBulletIndex = 98;
		}
		break;
	case 98:
		if (DiodeArray[125].EnemyBullet) {
			enemyBulletIndex = 125;
		}
		break;
	case 125:
		if (DiodeArray[130].EnemyBullet) {
			enemyBulletIndex = 130;
		}
		break;
	case 130:
		if (DiodeArray[157].EnemyBullet) {
			enemyBulletIndex = 157;
		}
		break;
	case 157:
		if (DiodeArray[162].EnemyBullet) {
			enemyBulletIndex = 162;
		}
		break;
	case 162:
		if (DiodeArray[189].EnemyBullet) {
			enemyBulletIndex = 189;
		}
		break;
	case 189:
		if (DiodeArray[194].EnemyBullet) {
			enemyBulletIndex = 194;
		}
		break;
	case 35:
		if (DiodeArray[60].EnemyBullet) {
			enemyBulletIndex = 60;
		}
		break;
	case 60:
		if (DiodeArray[67].EnemyBullet) {
			enemyBulletIndex = 67;
		}
		break;
	case 67:
		if (DiodeArray[92].EnemyBullet) {
			enemyBulletIndex = 92;
		}
		break;
	case 92:
		if (DiodeArray[99].EnemyBullet) {
			enemyBulletIndex = 99;
		}
		break;
	case 99:
		if (DiodeArray[124].EnemyBullet) {
			enemyBulletIndex = 124;
		}
		break;
	case 124:
		if (DiodeArray[131].EnemyBullet) {
			enemyBulletIndex = 131;
		}
		break;
	case 131:
		if (DiodeArray[156].EnemyBullet) {
			enemyBulletIndex = 156;
		}
		break;
	case 156:
		if (DiodeArray[163].EnemyBullet) {
			enemyBulletIndex = 163;
		}
		break;
	case 163:
		if (DiodeArray[188].EnemyBullet) {
			enemyBulletIndex = 188;
		}
		break;
	case 188:
		if (DiodeArray[195].EnemyBullet) {
			enemyBulletIndex = 195;
		}
		break;
	case 36:
		if (DiodeArray[59].EnemyBullet) {
			enemyBulletIndex = 59;
		}
		break;
	case 59:
		if (DiodeArray[68].EnemyBullet) {
			enemyBulletIndex = 68;
		}
		break;
	case 68:
		if (DiodeArray[91].EnemyBullet) {
			enemyBulletIndex = 91;
		}
		break;
	case 91:
		if (DiodeArray[100].EnemyBullet) {
			enemyBulletIndex = 100;
		}
		break;
	case 100:
		if (DiodeArray[123].EnemyBullet) {
			enemyBulletIndex = 123;
		}
		break;
	case 123:
		if (DiodeArray[132].EnemyBullet) {
			enemyBulletIndex = 132;
		}
		break;
	case 132:
		if (DiodeArray[155].EnemyBullet) {
			enemyBulletIndex = 155;
		}
		break;
	case 155:
		if (DiodeArray[164].EnemyBullet) {
			enemyBulletIndex = 164;
		}
		break;
	case 164:
		if (DiodeArray[187].EnemyBullet) {
			enemyBulletIndex = 187;
		}
		break;
	case 187:
		if (DiodeArray[196].EnemyBullet) {
			enemyBulletIndex = 196;
		}
		break;
	case 37:
		if (DiodeArray[58].EnemyBullet) {
			enemyBulletIndex = 58;
		}
		break;
	case 58:
		if (DiodeArray[69].EnemyBullet) {
			enemyBulletIndex = 69;
		}
		break;
	case 69:
		if (DiodeArray[90].EnemyBullet) {
			enemyBulletIndex = 90;
		}
		break;
	case 90:
		if (DiodeArray[101].EnemyBullet) {
			enemyBulletIndex = 101;
		}
		break;
	case 101:
		if (DiodeArray[122].EnemyBullet) {
			enemyBulletIndex = 122;
		}
		break;
	case 122:
		if (DiodeArray[133].EnemyBullet) {
			enemyBulletIndex = 133;
		}
		break;
	case 133:
		if (DiodeArray[154].EnemyBullet) {
			enemyBulletIndex = 154;
		}
		break;
	case 154:
		if (DiodeArray[165].EnemyBullet) {
			enemyBulletIndex = 165;
		}
		break;
	case 165:
		if (DiodeArray[186].EnemyBullet) {
			enemyBulletIndex = 186;
		}
		break;
	case 186:
		if (DiodeArray[197].EnemyBullet) {
			enemyBulletIndex = 197;
		}
		break;
	case 38:
		if (DiodeArray[57].EnemyBullet) {
			enemyBulletIndex = 57;
		}
		break;
	case 57:
		if (DiodeArray[70].EnemyBullet) {
			enemyBulletIndex = 70;
		}
		break;
	case 70:
		if (DiodeArray[89].EnemyBullet) {
			enemyBulletIndex = 89;
		}
		break;
	case 89:
		if (DiodeArray[102].EnemyBullet) {
			enemyBulletIndex = 102;
		}
		break;
	case 102:
		if (DiodeArray[121].EnemyBullet) {
			enemyBulletIndex = 121;
		}
		break;
	case 121:
		if (DiodeArray[134].EnemyBullet) {
			enemyBulletIndex = 134;
		}
		break;
	case 134:
		if (DiodeArray[153].EnemyBullet) {
			enemyBulletIndex = 153;
		}
		break;
	case 153:
		if (DiodeArray[166].EnemyBullet) {
			enemyBulletIndex = 166;
		}
		break;
	case 166:
		if (DiodeArray[185].EnemyBullet) {
			enemyBulletIndex = 185;
		}
		break;
	case 185:
		if (DiodeArray[198].EnemyBullet) {
			enemyBulletIndex = 198;
		}
		break;
	case 39:
		if (DiodeArray[56].EnemyBullet) {
			enemyBulletIndex = 56;
		}
		break;
	case 56:
		if (DiodeArray[71].EnemyBullet) {
			enemyBulletIndex = 71;
		}
		break;
	case 71:
		if (DiodeArray[88].EnemyBullet) {
			enemyBulletIndex = 88;
		}
		break;
	case 88:
		if (DiodeArray[103].EnemyBullet) {
			enemyBulletIndex = 103;
		}
		break;
	case 103:
		if (DiodeArray[120].EnemyBullet) {
			enemyBulletIndex = 120;
		}
		break;
	case 120:
		if (DiodeArray[135].EnemyBullet) {
			enemyBulletIndex = 135;
		}
		break;
	case 135:
		if (DiodeArray[152].EnemyBullet) {
			enemyBulletIndex = 152;
		}
		break;
	case 152:
		if (DiodeArray[167].EnemyBullet) {
			enemyBulletIndex = 167;
		}
		break;
	case 167:
		if (DiodeArray[184].EnemyBullet) {
			enemyBulletIndex = 184;
		}
		break;
	case 184:
		if (DiodeArray[199].EnemyBullet) {
			enemyBulletIndex = 199;
		}
		break;
	case 40:
		if (DiodeArray[55].EnemyBullet) {
			enemyBulletIndex = 55;
		}
		break;
	case 55:
		if (DiodeArray[72].EnemyBullet) {
			enemyBulletIndex = 72;
		}
		break;
	case 72:
		if (DiodeArray[87].EnemyBullet) {
			enemyBulletIndex = 87;
		}
		break;
	case 87:
		if (DiodeArray[104].EnemyBullet) {
			enemyBulletIndex = 104;
		}
		break;
	case 104:
		if (DiodeArray[119].EnemyBullet) {
			enemyBulletIndex = 119;
		}
		break;
	case 119:
		if (DiodeArray[136].EnemyBullet) {
			enemyBulletIndex = 136;
		}
		break;
	case 136:
		if (DiodeArray[151].EnemyBullet) {
			enemyBulletIndex = 151;
		}
		break;
	case 151:
		if (DiodeArray[168].EnemyBullet) {
			enemyBulletIndex = 168;
		}
		break;
	case 168:
		if (DiodeArray[183].EnemyBullet) {
			enemyBulletIndex = 183;
		}
		break;
	case 183:
		if (DiodeArray[200].EnemyBullet) {
			enemyBulletIndex = 200;
		}
		break;
	case 41:
		if (DiodeArray[54].EnemyBullet) {
			enemyBulletIndex = 54;
		}
		break;
	case 54:
		if (DiodeArray[73].EnemyBullet) {
			enemyBulletIndex = 73;
		}
		break;
	case 73:
		if (DiodeArray[86].EnemyBullet) {
			enemyBulletIndex = 86;
		}
		break;
	case 86:
		if (DiodeArray[105].EnemyBullet) {
			enemyBulletIndex = 105;
		}
		break;
	case 105:
		if (DiodeArray[118].EnemyBullet) {
			enemyBulletIndex = 118;
		}
		break;
	case 118:
		if (DiodeArray[137].EnemyBullet) {
			enemyBulletIndex = 137;
		}
		break;
	case 137:
		if (DiodeArray[150].EnemyBullet) {
			enemyBulletIndex = 150;
		}
		break;
	case 150:
		if (DiodeArray[169].EnemyBullet) {
			enemyBulletIndex = 169;
		}
		break;
	case 169:
		if (DiodeArray[182].EnemyBullet) {
			enemyBulletIndex = 182;
		}
		break;
	case 182:
		if (DiodeArray[201].EnemyBullet) {
			enemyBulletIndex = 201;
		}
		break;
	case 42:
		if (DiodeArray[53].EnemyBullet) {
			enemyBulletIndex = 53;
		}
		break;
	case 53:
		if (DiodeArray[74].EnemyBullet) {
			enemyBulletIndex = 74;
		}
		break;
	case 74:
		if (DiodeArray[85].EnemyBullet) {
			enemyBulletIndex = 85;
		}
		break;
	case 85:
		if (DiodeArray[106].EnemyBullet) {
			enemyBulletIndex = 106;
		}
		break;
	case 106:
		if (DiodeArray[117].EnemyBullet) {
			enemyBulletIndex = 117;
		}
		break;
	case 117:
		if (DiodeArray[138].EnemyBullet) {
			enemyBulletIndex = 138;
		}
		break;
	case 138:
		if (DiodeArray[149].EnemyBullet) {
			enemyBulletIndex = 149;
		}
		break;
	case 149:
		if (DiodeArray[170].EnemyBullet) {
			enemyBulletIndex = 170;
		}
		break;
	case 170:
		if (DiodeArray[181].EnemyBullet) {
			enemyBulletIndex = 181;
		}
		break;
	case 181:
		if (DiodeArray[202].EnemyBullet) {
			enemyBulletIndex = 202;
		}
		break;
	case 43:
		if (DiodeArray[52].EnemyBullet) {
			enemyBulletIndex = 52;
		}
		break;
	case 52:
		if (DiodeArray[75].EnemyBullet) {
			enemyBulletIndex = 75;
		}
		break;
	case 75:
		if (DiodeArray[84].EnemyBullet) {
			enemyBulletIndex = 84;
		}
		break;
	case 84:
		if (DiodeArray[107].EnemyBullet) {
			enemyBulletIndex = 107;
		}
		break;
	case 107:
		if (DiodeArray[116].EnemyBullet) {
			enemyBulletIndex = 116;
		}
		break;
	case 116:
		if (DiodeArray[139].EnemyBullet) {
			enemyBulletIndex = 139;
		}
		break;
	case 139:
		if (DiodeArray[148].EnemyBullet) {
			enemyBulletIndex = 148;
		}
		break;
	case 148:
		if (DiodeArray[171].EnemyBullet) {
			enemyBulletIndex = 171;
		}
		break;
	case 171:
		if (DiodeArray[180].EnemyBullet) {
			enemyBulletIndex = 180;
		}
		break;
	case 180:
		if (DiodeArray[203].EnemyBullet) {
			enemyBulletIndex = 203;
		}
		break;
	case 44:
		if (DiodeArray[51].EnemyBullet) {
			enemyBulletIndex = 51;
		}
		break;
	case 51:
		if (DiodeArray[76].EnemyBullet) {
			enemyBulletIndex = 76;
		}
		break;
	case 76:
		if (DiodeArray[83].EnemyBullet) {
			enemyBulletIndex = 83;
		}
		break;
	case 83:
		if (DiodeArray[108].EnemyBullet) {
			enemyBulletIndex = 108;
		}
		break;
	case 108:
		if (DiodeArray[115].EnemyBullet) {
			enemyBulletIndex = 115;
		}
		break;
	case 115:
		if (DiodeArray[140].EnemyBullet) {
			enemyBulletIndex = 140;
		}
		break;
	case 140:
		if (DiodeArray[147].EnemyBullet) {
			enemyBulletIndex = 147;
		}
		break;
	case 147:
		if (DiodeArray[172].EnemyBullet) {
			enemyBulletIndex = 172;
		}
		break;
	case 172:
		if (DiodeArray[179].EnemyBullet) {
			enemyBulletIndex = 179;
		}
		break;
	case 179:
		if (DiodeArray[204].EnemyBullet) {
			enemyBulletIndex = 204;
		}
		break;
	case 45:
		if (DiodeArray[50].EnemyBullet) {
			enemyBulletIndex = 50;
		}
		break;
	case 50:
		if (DiodeArray[77].EnemyBullet) {
			enemyBulletIndex = 77;
		}
		break;
	case 77:
		if (DiodeArray[82].EnemyBullet) {
			enemyBulletIndex = 82;
		}
		break;
	case 82:
		if (DiodeArray[109].EnemyBullet) {
			enemyBulletIndex = 109;
		}
		break;
	case 109:
		if (DiodeArray[114].EnemyBullet) {
			enemyBulletIndex = 114;
		}
		break;
	case 114:
		if (DiodeArray[141].EnemyBullet) {
			enemyBulletIndex = 141;
		}
		break;
	case 141:
		if (DiodeArray[146].EnemyBullet) {
			enemyBulletIndex = 146;
		}
		break;
	case 146:
		if (DiodeArray[173].EnemyBullet) {
			enemyBulletIndex = 173;
		}
		break;
	case 173:
		if (DiodeArray[178].EnemyBullet) {
			enemyBulletIndex = 178;
		}
		break;
	case 178:
		if (DiodeArray[205].EnemyBullet) {
			enemyBulletIndex = 205;
		}
		break;
	case 46:
		if (DiodeArray[49].EnemyBullet) {
			enemyBulletIndex = 49;
		}
		break;
	case 49:
		if (DiodeArray[78].EnemyBullet) {
			enemyBulletIndex = 78;
		}
		break;
	case 78:
		if (DiodeArray[81].EnemyBullet) {
			enemyBulletIndex = 81;
		}
		break;
	case 81:
		if (DiodeArray[110].EnemyBullet) {
			enemyBulletIndex = 110;
		}
		break;
	case 110:
		if (DiodeArray[113].EnemyBullet) {
			enemyBulletIndex = 113;
		}
		break;
	case 113:
		if (DiodeArray[142].EnemyBullet) {
			enemyBulletIndex = 142;
		}
		break;
	case 142:
		if (DiodeArray[145].EnemyBullet) {
			enemyBulletIndex = 145;
		}
		break;
	case 145:
		if (DiodeArray[174].EnemyBullet) {
			enemyBulletIndex = 174;
		}
		break;
	case 174:
		if (DiodeArray[177].EnemyBullet) {
			enemyBulletIndex = 177;
		}
		break;
	case 177:
		if (DiodeArray[206].EnemyBullet) {
			enemyBulletIndex = 206;
		}
		break;
	case 47:
		if (DiodeArray[48].EnemyBullet) {
			enemyBulletIndex = 48;
		}
		break;
	case 48:
		if (DiodeArray[79].EnemyBullet) {
			enemyBulletIndex = 79;
		}
		break;
	case 79:
		if (DiodeArray[80].EnemyBullet) {
			enemyBulletIndex = 80;
		}
		break;
	case 80:
		if (DiodeArray[111].EnemyBullet) {
			enemyBulletIndex = 111;
		}
		break;
	case 111:
		if (DiodeArray[112].EnemyBullet) {
			enemyBulletIndex = 112;
		}
		break;
	case 112:
		if (DiodeArray[143].EnemyBullet) {
			enemyBulletIndex = 143;
		}
		break;
	case 143:
		if (DiodeArray[144].EnemyBullet) {
			enemyBulletIndex = 144;
		}
		break;
	case 144:
		if (DiodeArray[175].EnemyBullet) {
			enemyBulletIndex = 175;
		}
		break;
	case 175:
		if (DiodeArray[176].EnemyBullet) {
			enemyBulletIndex = 176;
		}
		break;
	case 176:
		if (DiodeArray[207].EnemyBullet) {
			enemyBulletIndex = 207;
		}
		break;
	default:
		break;
	}

	if (enemyBulletIndex != 0 && currentPlayerBulletIndex != 0) {
		shotFromID = 0;
		playerBulletRoute = 0;
		playerStartShot = false;
		int shootIndex;

		if (enemyCurrentShootDiode_1 == enemyBulletIndex) {
			shootIndex = 1;
		} else if (enemyCurrentShootDiode_2 == enemyBulletIndex) {
			shootIndex = 2;
		} else if (enemyCurrentShootDiode_3 == enemyBulletIndex) {
			shootIndex = 3;
		} else if (enemyCurrentShootDiode_4 == enemyBulletIndex) {
			shootIndex = 4;
		}

		DiodeArray[currentPlayerBulletIndex].PlayerBullet = false;
		DiodeArray[currentPlayerBulletIndex].EnemyBullet = false;
		DiodeArray[currentPlayerBulletIndex].FreeSpace = true;
		setPixelColor(currentPlayerBulletIndex, THEME);

		DiodeArray[enemyBulletIndex].EnemyBullet = false;
		DiodeArray[enemyBulletIndex].FreeSpace = true;
		setPixelColor(enemyBulletIndex, THEME);

		switch (shootIndex) {
		case 1:
			enemyShootFirstDiode_1 = true;
			enemyShootInit_1 = true;
			enemyActivateShoot_1 = false;
			enemyDiodeShootRoute_1 = -15;
			enemyBulletIndex = 0;
			currentPlayerBulletIndex = 0;
			break;
		case 2:
			enemyShootFirstDiode_2 = true;
			enemyShootInit_2 = true;
			enemyActivateShoot_2 = false;
			enemyDiodeShootRoute_2 = -15;
			enemyBulletIndex = 0;
			currentPlayerBulletIndex = 0;
			break;
		case 3:
			enemyShootFirstDiode_3 = true;
			enemyShootInit_3 = true;
			enemyActivateShoot_3 = false;
			enemyDiodeShootRoute_3 = -15;
			enemyBulletIndex = 0;
			currentPlayerBulletIndex = 0;
			break;
		case 4:
			enemyShootFirstDiode_4 = true;
			enemyShootInit_4 = true;
			enemyActivateShoot_4 = false;
			enemyDiodeShootRoute_4 = -15;
			enemyBulletIndex = 0;
			currentPlayerBulletIndex = 0;
			break;
		default:
			break;
		}
	}
}
