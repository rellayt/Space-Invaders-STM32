#include "playerControl.h"

int playerRandomPos = 0;
bool playerInitialized = false;

int initPlayerIndex = 0;
int playerPosition, playerPositionTemp;
bool playerSetPosition = false, playerActivateLeft = false,
		playerActivateRight = false;
char playerSpawn = ' ', playerDirection = ' ';
bool playerNewMove = false;

void checkForPlayerHit() {
	int playerPositionToHit;
	for (int i = 16; i <= 31; i++) {
		if (DiodeArray[i].Player) {
			switch (i) {
			case 31:
				playerPositionToHit = 1;
				break;
			case 30:
				playerPositionToHit = 2;
				break;
			case 29:
				playerPositionToHit = 3;
				break;
			case 28:
				playerPositionToHit = 4;
				break;
			case 27:
				playerPositionToHit = 5;
				break;
			case 26:
				playerPositionToHit = 6;
				break;
			case 25:
				playerPositionToHit = 7;
				break;
			case 24:
				playerPositionToHit = 8;
				break;
			case 23:
				playerPositionToHit = 9;
				break;
			case 22:
				playerPositionToHit = 10;
				break;
			case 21:
				playerPositionToHit = 11;
				break;
			case 20:
				playerPositionToHit = 12;
				break;
			case 19:
				playerPositionToHit = 13;
				break;
			case 18:
				playerPositionToHit = 14;
				break;
			case 17:
				playerPositionToHit = 15;
				break;
			case 16:
				playerPositionToHit = 16;
				break;
			default:
				break;
			}
		}
	}
	switch (playerPositionToHit) {
	case 1:
		if (DiodeArray[31].EnemyBullet || DiodeArray[1].EnemyBullet) {
			gameOver = true;
			blockJoystick();
		}
		break;
	case 2:
		if (DiodeArray[30].EnemyBullet || DiodeArray[0].EnemyBullet
				|| DiodeArray[2].EnemyBullet) {
			gameOver = true;
			blockJoystick();
		}
		break;
	case 3:
		if (DiodeArray[29].EnemyBullet || DiodeArray[1].EnemyBullet
				|| DiodeArray[3].EnemyBullet) {
			gameOver = true;
			blockJoystick();
		}
		break;
	case 4:
		if (DiodeArray[28].EnemyBullet || DiodeArray[2].EnemyBullet
				|| DiodeArray[4].EnemyBullet) {
			gameOver = true;
			blockJoystick();
		}
		break;
	case 5:
		if (DiodeArray[27].EnemyBullet || DiodeArray[3].EnemyBullet
				|| DiodeArray[5].EnemyBullet) {
			gameOver = true;
			blockJoystick();
		}
		break;
	case 6:
		if (DiodeArray[26].EnemyBullet || DiodeArray[4].EnemyBullet
				|| DiodeArray[6].EnemyBullet) {
			gameOver = true;
			blockJoystick();
		}
		break;
	case 7:
		if (DiodeArray[25].EnemyBullet || DiodeArray[5].EnemyBullet
				|| DiodeArray[7].EnemyBullet) {
			gameOver = true;
			blockJoystick();
		}
		break;
	case 8:
		if (DiodeArray[24].EnemyBullet || DiodeArray[6].EnemyBullet
				|| DiodeArray[8].EnemyBullet) {
			gameOver = true;
			blockJoystick();
		}
		break;
	case 9:
		if (DiodeArray[23].EnemyBullet || DiodeArray[7].EnemyBullet
				|| DiodeArray[9].EnemyBullet) {
			gameOver = true;
			blockJoystick();
		}
		break;
	case 10:
		if (DiodeArray[22].EnemyBullet || DiodeArray[8].EnemyBullet
				|| DiodeArray[10].EnemyBullet) {
			gameOver = true;
			blockJoystick();
		}
		break;
	case 11:
		if (DiodeArray[21].EnemyBullet || DiodeArray[9].EnemyBullet
				|| DiodeArray[11].EnemyBullet) {
			gameOver = true;
			blockJoystick();
		}
		break;
	case 12:
		if (DiodeArray[20].EnemyBullet || DiodeArray[10].EnemyBullet
				|| DiodeArray[12].EnemyBullet) {
			gameOver = true;
			blockJoystick();
		}
		break;
	case 13:
		if (DiodeArray[19].EnemyBullet || DiodeArray[11].EnemyBullet
				|| DiodeArray[13].EnemyBullet) {
			gameOver = true;
			blockJoystick();
		}
		break;
	case 14:
		if (DiodeArray[18].EnemyBullet || DiodeArray[12].EnemyBullet
				|| DiodeArray[14].EnemyBullet) {
			gameOver = true;
			blockJoystick();
		}
		break;
	case 15:
		if (DiodeArray[17].EnemyBullet || DiodeArray[13].EnemyBullet
				|| DiodeArray[15].EnemyBullet) {
			gameOver = true;
			blockJoystick();
		}
		break;
	case 16:
		if (DiodeArray[16].EnemyBullet || DiodeArray[14].EnemyBullet) {
			gameOver = true;
			blockJoystick();
		}
		break;
	default:
		break;
	}
}

void playerChangePosition() {
	if (playerDirection == 'L') {
		switch (playerPositionTemp) {
		case -7:
			setPixelColor(0, PLAYER);

			DiodeArray[2].FreeSpace = true;
			DiodeArray[2].Player = false;
			setPixelColor(2, THEME);
			DiodeArray[30].FreeSpace = true;
			DiodeArray[30].Player = false;
			setPixelColor(30, THEME);
			DiodeArray[31].FreeSpace = false;
			DiodeArray[31].Player = true;
			setPixelColor(31, PLAYER);
			break;
		case -6:
			setPixelColor(1, PLAYER);

			DiodeArray[3].FreeSpace = true;
			DiodeArray[3].Player = false;
			setPixelColor(3, THEME);
			DiodeArray[29].FreeSpace = true;
			DiodeArray[29].Player = false;
			setPixelColor(29, THEME);
			DiodeArray[30].FreeSpace = false;
			DiodeArray[30].Player = true;
			setPixelColor(30, PLAYER);
			DiodeArray[0].FreeSpace = false;
			DiodeArray[0].Player = true;
			setPixelColor(0, PLAYER);
			break;
		case -5:
			setPixelColor(2, PLAYER);

			DiodeArray[4].FreeSpace = true;
			DiodeArray[4].Player = false;
			setPixelColor(4, THEME);
			DiodeArray[28].FreeSpace = true;
			DiodeArray[28].Player = false;
			setPixelColor(28, THEME);
			DiodeArray[29].FreeSpace = false;
			DiodeArray[29].Player = true;
			setPixelColor(29, PLAYER);
			DiodeArray[1].FreeSpace = false;
			DiodeArray[1].Player = true;
			setPixelColor(1, PLAYER);
			break;
		case -4:
			setPixelColor(3, PLAYER);

			DiodeArray[5].FreeSpace = true;
			DiodeArray[5].Player = false;
			setPixelColor(5, THEME);
			DiodeArray[27].FreeSpace = true;
			DiodeArray[27].Player = false;
			setPixelColor(27, THEME);
			DiodeArray[28].FreeSpace = false;
			DiodeArray[28].Player = true;
			setPixelColor(28, PLAYER);
			DiodeArray[2].FreeSpace = false;
			DiodeArray[2].Player = true;
			setPixelColor(2, PLAYER);
			break;
		case -3:
			setPixelColor(4, PLAYER);

			DiodeArray[6].FreeSpace = true;
			DiodeArray[6].Player = false;
			setPixelColor(6, THEME);
			DiodeArray[26].FreeSpace = true;
			DiodeArray[26].Player = false;
			setPixelColor(26, THEME);
			DiodeArray[27].FreeSpace = false;
			DiodeArray[27].Player = true;
			setPixelColor(27, PLAYER);
			DiodeArray[3].FreeSpace = false;
			DiodeArray[3].Player = true;
			setPixelColor(3, PLAYER);
			break;
		case -2:
			setPixelColor(5, PLAYER);

			DiodeArray[7].FreeSpace = true;
			DiodeArray[7].Player = false;
			setPixelColor(7, THEME);
			DiodeArray[25].FreeSpace = true;
			DiodeArray[25].Player = false;
			setPixelColor(25, THEME);
			DiodeArray[26].FreeSpace = false;
			DiodeArray[26].Player = true;
			setPixelColor(26, PLAYER);
			DiodeArray[4].FreeSpace = false;
			DiodeArray[4].Player = true;
			setPixelColor(4, PLAYER);
			break;
		case -1:
			setPixelColor(6, PLAYER);

			DiodeArray[8].FreeSpace = true;
			DiodeArray[8].Player = false;
			setPixelColor(8, THEME);
			DiodeArray[24].FreeSpace = true;
			DiodeArray[24].Player = false;
			setPixelColor(24, THEME);
			DiodeArray[25].FreeSpace = false;
			DiodeArray[25].Player = true;
			setPixelColor(25, PLAYER);
			DiodeArray[5].FreeSpace = false;
			DiodeArray[5].Player = true;
			setPixelColor(5, PLAYER);
			break;
		case 0:
			setPixelColor(7, PLAYER);

			DiodeArray[9].FreeSpace = true;
			DiodeArray[9].Player = false;
			setPixelColor(9, THEME);
			DiodeArray[23].FreeSpace = true;
			DiodeArray[23].Player = false;
			setPixelColor(23, THEME);
			DiodeArray[24].FreeSpace = false;
			DiodeArray[24].Player = true;
			setPixelColor(24, PLAYER);
			DiodeArray[6].FreeSpace = false;
			DiodeArray[6].Player = true;
			setPixelColor(6, PLAYER);
			break;
		case 1:
			setPixelColor(8, PLAYER);

			DiodeArray[10].FreeSpace = true;
			DiodeArray[10].Player = false;
			setPixelColor(10, THEME);
			DiodeArray[22].FreeSpace = true;
			DiodeArray[22].Player = false;
			setPixelColor(22, THEME);
			DiodeArray[23].FreeSpace = false;
			DiodeArray[23].Player = true;
			setPixelColor(23, PLAYER);
			DiodeArray[7].FreeSpace = false;
			DiodeArray[7].Player = true;
			setPixelColor(7, PLAYER);
			break;
		case 2:
			setPixelColor(9, PLAYER);

			DiodeArray[11].FreeSpace = true;
			DiodeArray[11].Player = false;
			setPixelColor(11, THEME);
			DiodeArray[21].FreeSpace = true;
			DiodeArray[21].Player = false;
			setPixelColor(21, THEME);
			DiodeArray[22].FreeSpace = false;
			DiodeArray[22].Player = true;
			setPixelColor(22, PLAYER);
			DiodeArray[8].FreeSpace = false;
			DiodeArray[8].Player = true;
			setPixelColor(8, PLAYER);
			break;
		case 3:
			setPixelColor(10, PLAYER);
			DiodeArray[12].FreeSpace = true;
			DiodeArray[12].Player = false;
			setPixelColor(12, THEME);
			DiodeArray[20].FreeSpace = true;
			DiodeArray[20].Player = false;
			setPixelColor(20, THEME);
			DiodeArray[21].FreeSpace = false;
			DiodeArray[21].Player = true;
			setPixelColor(21, PLAYER);
			DiodeArray[9].FreeSpace = false;
			DiodeArray[9].Player = true;
			setPixelColor(9, PLAYER);
			break;
		case 4:
			setPixelColor(11, PLAYER);

			DiodeArray[13].FreeSpace = true;
			DiodeArray[13].Player = false;
			setPixelColor(13, THEME);
			DiodeArray[19].FreeSpace = true;
			DiodeArray[19].Player = false;
			setPixelColor(19, THEME);
			DiodeArray[20].FreeSpace = false;
			DiodeArray[20].Player = true;
			setPixelColor(20, PLAYER);
			DiodeArray[10].FreeSpace = false;
			DiodeArray[10].Player = true;
			setPixelColor(10, PLAYER);
			break;
		case 5:
			setPixelColor(12, PLAYER);

			DiodeArray[14].FreeSpace = true;
			DiodeArray[14].Player = false;
			setPixelColor(14, THEME);
			DiodeArray[18].FreeSpace = true;
			DiodeArray[18].Player = false;
			setPixelColor(18, THEME);
			DiodeArray[19].FreeSpace = false;
			DiodeArray[19].Player = true;
			setPixelColor(19, PLAYER);
			DiodeArray[11].FreeSpace = false;
			DiodeArray[11].Player = true;
			setPixelColor(11, PLAYER);
			break;
		case 6:
			setPixelColor(13, PLAYER);

			DiodeArray[15].FreeSpace = true;
			DiodeArray[15].Player = false;
			setPixelColor(15, THEME);
			DiodeArray[17].FreeSpace = true;
			DiodeArray[17].Player = false;
			setPixelColor(17, THEME);
			DiodeArray[18].FreeSpace = false;
			DiodeArray[18].Player = true;
			setPixelColor(18, PLAYER);
			DiodeArray[12].FreeSpace = false;
			DiodeArray[12].Player = true;
			setPixelColor(12, PLAYER);
			break;
		case 7:
			setPixelColor(14, PLAYER);

			DiodeArray[16].FreeSpace = true;
			DiodeArray[16].Player = false;
			setPixelColor(16, THEME);
			DiodeArray[16].FreeSpace = true;
			DiodeArray[16].Player = false;
			setPixelColor(16, THEME);
			DiodeArray[17].FreeSpace = false;
			DiodeArray[17].Player = true;
			setPixelColor(17, PLAYER);
			DiodeArray[13].FreeSpace = false;
			DiodeArray[13].Player = true;
			setPixelColor(13, PLAYER);
			break;
		default:
			break;
		}
		playerSetPosition = false;
		playerNewMove = false;
		playerDirection = ' ';
	}
	if (playerDirection == 'R') {
		switch (playerPositionTemp) {
		case -8:
			setPixelColor(1, PLAYER);

			DiodeArray[31].FreeSpace = true;
			DiodeArray[31].Player = false;
			setPixelColor(31, THEME);

			DiodeArray[30].FreeSpace = false;
			DiodeArray[30].Player = true;
			setPixelColor(30, PLAYER);

			DiodeArray[2].FreeSpace = false;
			DiodeArray[2].Player = true;
			setPixelColor(2, PLAYER);
			break;
		case -7:
			setPixelColor(2, PLAYER);

			DiodeArray[0].FreeSpace = true;
			DiodeArray[0].Player = false;
			setPixelColor(0, THEME);

			DiodeArray[30].FreeSpace = true;
			DiodeArray[30].Player = false;
			setPixelColor(30, THEME);

			DiodeArray[29].FreeSpace = false;
			DiodeArray[29].Player = true;
			setPixelColor(29, PLAYER);

			DiodeArray[3].FreeSpace = false;
			DiodeArray[3].Player = true;
			setPixelColor(3, PLAYER);
			break;
		case -6:
			setPixelColor(3, PLAYER);

			DiodeArray[1].FreeSpace = true;
			DiodeArray[1].Player = false;
			setPixelColor(1, THEME);

			DiodeArray[29].FreeSpace = true;
			DiodeArray[29].Player = false;
			setPixelColor(29, THEME);

			DiodeArray[28].FreeSpace = false;
			DiodeArray[28].Player = true;
			setPixelColor(28, PLAYER);

			DiodeArray[4].FreeSpace = false;
			DiodeArray[4].Player = true;
			setPixelColor(4, PLAYER);
			break;
		case -5:
			setPixelColor(4, PLAYER);

			DiodeArray[2].FreeSpace = true;
			DiodeArray[2].Player = false;
			setPixelColor(2, THEME);

			DiodeArray[28].FreeSpace = true;
			DiodeArray[28].Player = false;
			setPixelColor(28, THEME);

			DiodeArray[27].FreeSpace = false;
			DiodeArray[27].Player = true;
			setPixelColor(27, PLAYER);

			DiodeArray[5].FreeSpace = false;
			DiodeArray[5].Player = true;
			setPixelColor(5, PLAYER);
			break;
		case -4:
			setPixelColor(5, PLAYER);

			DiodeArray[3].FreeSpace = true;
			DiodeArray[3].Player = false;
			setPixelColor(3, THEME);

			DiodeArray[27].FreeSpace = true;
			DiodeArray[27].Player = false;
			setPixelColor(27, THEME);

			DiodeArray[26].FreeSpace = false;
			DiodeArray[26].Player = true;
			setPixelColor(26, PLAYER);

			DiodeArray[6].FreeSpace = false;
			DiodeArray[6].Player = true;
			setPixelColor(6, PLAYER);
			break;
		case -3:
			setPixelColor(6, PLAYER);

			DiodeArray[4].FreeSpace = true;
			DiodeArray[4].Player = false;
			setPixelColor(4, THEME);

			DiodeArray[26].FreeSpace = true;
			DiodeArray[26].Player = false;
			setPixelColor(26, THEME);

			DiodeArray[25].FreeSpace = false;
			DiodeArray[25].Player = true;
			setPixelColor(25, PLAYER);

			DiodeArray[7].FreeSpace = false;
			DiodeArray[7].Player = true;
			setPixelColor(7, PLAYER);
			break;
		case -2:
			setPixelColor(7, PLAYER);

			DiodeArray[5].FreeSpace = true;
			DiodeArray[5].Player = false;
			setPixelColor(5, THEME);

			DiodeArray[25].FreeSpace = true;
			DiodeArray[25].Player = false;
			setPixelColor(25, THEME);

			DiodeArray[24].FreeSpace = false;
			DiodeArray[24].Player = true;
			setPixelColor(24, PLAYER);

			DiodeArray[8].FreeSpace = false;
			DiodeArray[8].Player = true;
			setPixelColor(8, PLAYER);
			break;
		case -1:
			setPixelColor(8, PLAYER);

			DiodeArray[6].FreeSpace = true;
			DiodeArray[6].Player = false;
			setPixelColor(6, THEME);

			DiodeArray[24].FreeSpace = true;
			DiodeArray[24].Player = false;
			setPixelColor(24, THEME);

			DiodeArray[23].FreeSpace = false;
			DiodeArray[23].Player = true;
			setPixelColor(23, PLAYER);

			DiodeArray[9].FreeSpace = false;
			DiodeArray[9].Player = true;
			setPixelColor(9, PLAYER);
			break;
		case 0:
			setPixelColor(9, PLAYER);

			DiodeArray[7].FreeSpace = true;
			DiodeArray[7].Player = false;
			setPixelColor(7, THEME);

			DiodeArray[23].FreeSpace = true;
			DiodeArray[23].Player = false;
			setPixelColor(23, THEME);

			DiodeArray[22].FreeSpace = false;
			DiodeArray[22].Player = true;
			setPixelColor(22, PLAYER);

			DiodeArray[10].FreeSpace = false;
			DiodeArray[10].Player = true;
			setPixelColor(10, PLAYER);
			break;
		case 1:
			setPixelColor(10, PLAYER);

			DiodeArray[8].FreeSpace = true;
			DiodeArray[8].Player = false;
			setPixelColor(8, THEME);

			DiodeArray[22].FreeSpace = true;
			DiodeArray[22].Player = false;
			setPixelColor(22, THEME);

			DiodeArray[21].FreeSpace = false;
			DiodeArray[21].Player = true;
			setPixelColor(21, PLAYER);

			DiodeArray[11].FreeSpace = false;
			DiodeArray[11].Player = true;
			setPixelColor(11, PLAYER);
			break;
		case 2:
			setPixelColor(11, PLAYER);

			DiodeArray[9].FreeSpace = true;
			DiodeArray[9].Player = false;
			setPixelColor(9, THEME);

			DiodeArray[21].FreeSpace = true;
			DiodeArray[21].Player = false;
			setPixelColor(21, THEME);

			DiodeArray[20].FreeSpace = false;
			DiodeArray[20].Player = true;
			setPixelColor(20, PLAYER);

			DiodeArray[12].FreeSpace = false;
			DiodeArray[12].Player = true;
			setPixelColor(12, PLAYER);
			break;
		case 3:
			setPixelColor(12, PLAYER);

			DiodeArray[10].FreeSpace = true;
			DiodeArray[10].Player = false;
			setPixelColor(10, THEME);

			DiodeArray[20].FreeSpace = true;
			DiodeArray[20].Player = false;
			setPixelColor(20, THEME);

			DiodeArray[19].FreeSpace = false;
			DiodeArray[19].Player = true;
			setPixelColor(19, PLAYER);

			DiodeArray[13].FreeSpace = false;
			DiodeArray[13].Player = true;
			setPixelColor(13, PLAYER);
			break;
		case 4:
			setPixelColor(13, PLAYER);

			DiodeArray[11].FreeSpace = true;
			DiodeArray[11].Player = false;
			setPixelColor(11, THEME);

			DiodeArray[19].FreeSpace = true;
			DiodeArray[19].Player = false;
			setPixelColor(19, THEME);

			DiodeArray[18].FreeSpace = false;
			DiodeArray[18].Player = true;
			setPixelColor(18, PLAYER);

			DiodeArray[14].FreeSpace = false;
			DiodeArray[14].Player = true;
			setPixelColor(14, PLAYER);
			break;
		case 5:
			setPixelColor(14, PLAYER);

			DiodeArray[12].FreeSpace = true;
			DiodeArray[12].Player = false;
			setPixelColor(12, THEME);

			DiodeArray[18].FreeSpace = true;
			DiodeArray[18].Player = false;
			setPixelColor(18, THEME);

			DiodeArray[17].FreeSpace = false;
			DiodeArray[17].Player = true;
			setPixelColor(17, PLAYER);

			DiodeArray[15].FreeSpace = false;
			DiodeArray[15].Player = true;
			setPixelColor(15, PLAYER);
			break;
		case 6:
			setPixelColor(15, PLAYER);

			DiodeArray[13].FreeSpace = true;
			DiodeArray[13].Player = false;
			setPixelColor(13, THEME);

			DiodeArray[17].FreeSpace = true;
			DiodeArray[17].Player = false;
			setPixelColor(17, THEME);

			DiodeArray[16].FreeSpace = false;
			DiodeArray[16].Player = true;
			setPixelColor(16, PLAYER);
			break;
		default:
			break;
		}
		playerNewMove = false;
		playerSetPosition = false;
		playerDirection = ' ';
	}
}
void playerMoveLeft() {
	if (playerPosition > -8) {
		playerPositionTemp = playerPosition;
		playerPosition--;
		playerDirection = 'L';
		playerSetPosition = true;
	}
}
void playerMoveRight() {
	if (playerPosition < 7) {
		playerPositionTemp = playerPosition;
		playerPosition++;
		playerDirection = 'R';
		playerSetPosition = true;
	}
}
void initPlayer(uint32_t VR[2]) {
	srand((int) VR[0] + (int) VR[1] + 5);
	if (playerSpawn == ' ') {
		if (playerRandomPos == 1) {
			playerSpawn = 'L';
			playerPosition = -1;
		} else if (playerRandomPos == 2) {
			playerSpawn = 'R';
			playerPosition = 0;
		}
	}

	switch (initPlayerIndex) {
	case 0:
		setAllPixelColor(0, 0, 0);
		break;
	case 1:
		if (playerSpawn == 'L') {
			DiodeArray[6].Player = true;
			DiodeArray[6].FreeSpace = false;
			setPixelColor(6, PLAYER);
		} else if (playerSpawn == 'R') {
			DiodeArray[7].Player = true;
			DiodeArray[7].FreeSpace = false;
			setPixelColor(7, PLAYER);
		}
		if (playerSpawn == 'L') {
			DiodeArray[8].Player = true;
			DiodeArray[8].FreeSpace = false;
			setPixelColor(8, PLAYER);
		} else if (playerSpawn == 'R') {
			DiodeArray[9].Player = true;
			DiodeArray[9].FreeSpace = false;
			setPixelColor(9, PLAYER);
		}
		break;
	case 2:
		if (playerSpawn == 'L') {
			DiodeArray[24].Player = true;
			DiodeArray[24].FreeSpace = false;
			setPixelColor(24, PLAYER);

		} else if (playerSpawn == 'R') {
			DiodeArray[23].Player = true;
			DiodeArray[23].FreeSpace = false;
			setPixelColor(23, PLAYER);
		}
		if (playerSpawn == 'L') {
			DiodeArray[7].Player = true;
			DiodeArray[7].FreeSpace = false;
			setPixelColor(7, PLAYER);
		} else if (playerSpawn == 'R') {
			DiodeArray[8].Player = true;
			DiodeArray[8].FreeSpace = false;
			setPixelColor(8, PLAYER);
		}
		break;
	default:
		break;
	}
}
void checkForPlayerMove() {
	if (LEFT() && !blockLeft) {
		playerActivateLeft = true;
		playerNewMove = false;
	}
	if (RIGHT() && !blockRight) {
		playerActivateRight = true;
		playerNewMove = false;
	}
}
void playerPositioning() {
	if (playerNewMove)
		checkForPlayerMove();

	if (playerSetPosition)
		playerChangePosition();

	if (playerActivateLeft) {
		playerNewMove = false;
		playerMoveLeft();
		playerActivateLeft = false;
	}
	if (playerActivateRight) {
		playerNewMove = false;
		playerMoveRight();
		playerActivateRight = false;
	}
}
