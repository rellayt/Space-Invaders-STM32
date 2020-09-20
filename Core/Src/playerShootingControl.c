#include "playerShootingControl.h"
#include "diode.h"
#include "GlobalDefines.h"

int bulletIndex;
int shotFromID = 0, playerBulletRoute = 0;
bool playerStartShot = false;
int playerShotFirstValue, playerShotSecondValue;
void findPlayerPosition() {
	for (uint16_t i = 16; i <= 31; i++) {
		if (DiodeArray[i].Player == true) {
			shotFromID = (int) i;
			break;
		}
	}
}
void playerShot() {
	if (playerStartShot) {
		if (shotFromID == 0) {
			findPlayerPosition();
		}
		switch (shotFromID) {
		case 31:
			playerShotFirstValue = 31;
			playerShotSecondValue = 1;
			switch (playerBulletRoute) {
			case 0:
				bulletIndex = 32;
				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);
				break;
			case 1:

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 2:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 3:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 4:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 5:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 6:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 7:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 8:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 9:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 10:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 11:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 12:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 13:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 14:
				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);
				shotFromID = 0;
				playerBulletRoute = 0;
				playerStartShot = false;
				break;
			default:
				break;
			}
			break;
		case 30:
			playerShotFirstValue = 29;
			playerShotSecondValue = 3;
			switch (playerBulletRoute) {
			case 0:
				bulletIndex = 33;
				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);
				break;
			case 1:

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 2:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 3:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 4:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 5:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 6:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 7:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 8:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 9:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 10:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 11:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 12:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 13:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 14:
				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);
				shotFromID = 0;
				playerBulletRoute = 0;
				playerStartShot = false;
				break;
			default:
				break;
			}
			break;
		case 29:
			playerShotFirstValue = 27;
			playerShotSecondValue = 5;
			switch (playerBulletRoute) {
			case 0:
				bulletIndex = 34;
				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);
				break;
			case 1:

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 2:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 3:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 4:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 5:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 6:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 7:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 8:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 9:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 10:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 11:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 12:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 13:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 14:
				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);
				shotFromID = 0;
				playerBulletRoute = 0;
				playerStartShot = false;
				break;
			default:
				break;
			}
			break;
		case 28:
			playerShotFirstValue = 25;
			playerShotSecondValue = 7;
			switch (playerBulletRoute) {
			case 0:
				bulletIndex = 35;
				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);
				break;
			case 1:

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 2:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 3:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 4:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 5:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 6:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 7:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 8:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 9:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 10:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 11:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 12:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 13:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 14:
				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);
				shotFromID = 0;
				playerBulletRoute = 0;
				playerStartShot = false;
				break;
			default:
				break;
			}
			break;
		case 27:
			playerShotFirstValue = 23;
			playerShotSecondValue = 9;
			switch (playerBulletRoute) {
			case 0:
				bulletIndex = 36;
				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);
				break;
			case 1:

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 2:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 3:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 4:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 5:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 6:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 7:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 8:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 9:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 10:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 11:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 12:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 13:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 14:
				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);
				shotFromID = 0;
				playerBulletRoute = 0;
				playerStartShot = false;
				break;
			default:
				break;
			}
			break;
		case 26:
			playerShotFirstValue = 21;
			playerShotSecondValue = 11;
			switch (playerBulletRoute) {
			case 0:
				bulletIndex = 37;
				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);
				break;
			case 1:

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 2:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 3:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 4:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 5:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 6:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 7:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 8:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 9:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 10:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 11:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 12:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 13:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 14:
				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);
				shotFromID = 0;
				playerBulletRoute = 0;
				playerStartShot = false;
				break;
			default:
				break;
			}
			break;
		case 25:
			playerShotFirstValue = 19;
			playerShotSecondValue = 13;
			switch (playerBulletRoute) {
			case 0:
				bulletIndex = 38;
				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);
				break;
			case 1:

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 2:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 3:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 4:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 5:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 6:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 7:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 8:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 9:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 10:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 11:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 12:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 13:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 14:
				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);
				shotFromID = 0;
				playerBulletRoute = 0;
				playerStartShot = false;
				break;
			default:
				break;
			}
			break;
		case 24:
			playerShotFirstValue = 17;
			playerShotSecondValue = 15;
			switch (playerBulletRoute) {
			case 0:
				bulletIndex = 39;
				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);
				break;
			case 1:

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 2:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 3:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 4:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 5:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 6:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 7:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 8:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 9:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 10:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 11:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 12:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 13:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 14:
				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);
				shotFromID = 0;
				playerBulletRoute = 0;
				playerStartShot = false;
				break;
			default:
				break;
			}
			break;
		case 21:
			playerShotFirstValue = 11;
			playerShotSecondValue = 21;
			switch (playerBulletRoute) {
			case 0:
				bulletIndex = 42;
				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);
				break;
			case 1:

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 2:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 3:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 4:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 5:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 6:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 7:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 8:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 9:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 10:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 11:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 12:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 13:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 14:
				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);
				shotFromID = 0;
				playerBulletRoute = 0;
				playerStartShot = false;
				break;
			default:
				break;
			}
			break;
		case 22:
			playerShotFirstValue = 13;
			playerShotSecondValue = 19;
			switch (playerBulletRoute) {
			case 0:
				bulletIndex = 41;
				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);
				break;
			case 1:

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 2:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 3:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 4:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 5:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 6:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 7:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 8:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 9:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 10:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 11:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 12:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 13:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 14:
				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);
				shotFromID = 0;
				playerBulletRoute = 0;
				playerStartShot = false;
				break;
			default:
				break;
			}
			break;
		case 23:
			playerShotFirstValue = 15;
			playerShotSecondValue = 17;
			switch (playerBulletRoute) {
			case 0:
				bulletIndex = 40;
				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);
				break;
			case 1:

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 2:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 3:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 4:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 5:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 6:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 7:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 8:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 9:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 10:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 11:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 12:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 13:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 14:
				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);
				shotFromID = 0;
				playerBulletRoute = 0;
				playerStartShot = false;
				break;
			default:
				break;
			}
			break;
		case 16:
			playerShotFirstValue = 1;
			playerShotSecondValue = 31;
			switch (playerBulletRoute) {
			case 0:
				bulletIndex = 47;
				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);
				break;
			case 1:

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 2:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 3:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 4:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 5:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 6:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 7:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 8:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 9:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 10:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 11:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 12:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 13:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 14:
				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);
				shotFromID = 0;
				playerBulletRoute = 0;
				playerStartShot = false;
				break;
			default:
				break;
			}
			break;
		case 17:
			playerShotFirstValue = 3;
			playerShotSecondValue = 29;
			switch (playerBulletRoute) {
			case 0:
				bulletIndex = 46;
				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);
				break;
			case 1:

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 2:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 3:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 4:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 5:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 6:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 7:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 8:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 9:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 10:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 11:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 12:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 13:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 14:
				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);
				shotFromID = 0;
				playerBulletRoute = 0;
				playerStartShot = false;
				break;
			default:
				break;
			}
			break;
		case 18:
			playerShotFirstValue = 5;
			playerShotSecondValue = 27;
			switch (playerBulletRoute) {
			case 0:
				bulletIndex = 45;
				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);
				break;
			case 1:

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 2:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 3:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 4:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 5:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 6:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 7:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 8:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 9:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 10:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 11:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 12:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 13:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 14:
				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);
				shotFromID = 0;
				playerBulletRoute = 0;
				playerStartShot = false;
				break;
			default:
				break;
			}
			break;
		case 19:
			playerShotFirstValue = 7;
			playerShotSecondValue = 25;
			switch (playerBulletRoute) {
			case 0:
				bulletIndex = 44;
				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);
				break;
			case 1:

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 2:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 3:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 4:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 5:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 6:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 7:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 8:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 9:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 10:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 11:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 12:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 13:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 14:
				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);
				shotFromID = 0;
				playerBulletRoute = 0;
				playerStartShot = false;
				break;
			default:
				break;
			}
			break;
		case 20:
			playerShotFirstValue = 9;
			playerShotSecondValue = 23;
			switch (playerBulletRoute) {
			case 0:
				bulletIndex = 43;
				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);
				break;
			case 1:

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 2:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 3:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 4:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 5:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 6:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 7:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 8:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 9:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 10:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 11:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 12:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotSecondValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 13:
				setPixelColor((uint16_t) bulletIndex, PLAYER_BULLET);

				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);

				bulletIndex = bulletIndex + playerShotFirstValue;

				DiodeArray[bulletIndex].PlayerBullet = true;
				DiodeArray[bulletIndex].FreeSpace = false;
				setPixelColor(bulletIndex, PLAYER_BULLET);
				break;
			case 14:
				DiodeArray[bulletIndex].PlayerBullet = false;
				DiodeArray[bulletIndex].FreeSpace = true;
				setPixelColor((uint16_t) bulletIndex, THEME);
				shotFromID = 0;
				playerBulletRoute = 0;
				playerStartShot = false;
				break;
			default:
				break;
			}
			break;
		default:
			break;
		}
	}
}
