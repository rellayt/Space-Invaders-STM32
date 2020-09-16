#ifndef INC_DIODE_H_
#define INC_DIODE_H_

#include "stdbool.h"
#include "stdint.h"

struct Diode {
	uint16_t ID;
	bool FreeSpace;
	bool PlayerBullet;
	bool EnemyBullet;
	bool Enemy;
	bool Player;
	int HP;
};
struct Diode DiodeArray[256];
struct Diode DiodeTemp;

void diodeArrayInit();

#endif /* INC_DIODE_H_ */
