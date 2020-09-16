#include "game.h"
int currentScore = 0, newScore = 0;
bool reverseLED = false;
int themeID = 0, themeID_temp = 0;
int newGameTimeCounter = 0, currentGameTimeCounter = 0;
int getRand(int min, int max) {
	int result = rand() % (max + 1 - min) + min;
	return result;
}

void theme(uint16_t diodeID) {
	struct Diode currentDiode;
	int Index;
	for (int i = 0; i < 256; i++) {
		if (diodeID == DiodeArray[i].ID) {
			currentDiode = DiodeArray[i];
			Index = i;
			break;
		}
	}
	themeID = getRand(0, 25);
	playerRandomPos = getRand(1, 2);
	switch (themeID) {
	case 0:
		if (currentDiode.FreeSpace) {
			setPixelColor(diodeID, 0, 0, 25);
			DiodeArray[Index].HP = -1;
		}
		break;
	case 1:
		if (currentDiode.FreeSpace) {
			setPixelColor(diodeID, 0, 0, 24);
			DiodeArray[Index].HP = -1;
		}
		break;
	case 2:
		if (currentDiode.FreeSpace) {
			setPixelColor(diodeID, 0, 0, 23);
			DiodeArray[Index].HP = -1;
		}
		break;
	case 3:
		if (currentDiode.FreeSpace) {
			setPixelColor(diodeID, 0, 0, 22);
			DiodeArray[Index].HP = -1;
		}
		break;
	default:
		break;
	}
	if (reverseLED)
		themeID--;
	else
		themeID++;

	if (themeID == 3)
		reverseLED = true;

	if (themeID == 0)
		reverseLED = false;
}
