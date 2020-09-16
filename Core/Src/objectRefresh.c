#include "objectRefresh.h"
#include "ws2812b.h"
#include "diode.h"
#include "GlobalDefines.h"
void refreshEnemies() {
	for (int i = 0; i < 255; i++) {
		if (DiodeArray[i].Enemy) {
			switch (DiodeArray[i].HP) {
			case -1:
				DiodeArray[i].Enemy = false;
				DiodeArray[i].FreeSpace= true;
			case 1:
				setPixelColor(i, RED);
				break;
			case 2:
				setPixelColor(i, YELLOW);
				break;
			case 3:
				setPixelColor(i, GREEN);
				break;
			default:
				break;
			}
		}
	}
}
void refreshBullets() {
	for (int i = 0; i < 255; i++) {
		if (DiodeArray[i].EnemyBullet) {
			setPixelColor(i, ENEMY_BULLET);
		}
	}
}
void refreshPlayer() {
	for (int i = 0; i < 31; i++) {
		if (DiodeArray[i].Player) {
			setPixelColor(i, PLAYER);
		}
	}
}
