#include "diode.h"
#include "stdint.h"

void diodeArrayInit() {
	struct Diode DiodeTemp = { 0, true, false, false, false, false, -1 };
	for (int i = 0; i < 256; i++) {
		DiodeTemp.ID = (uint16_t) i;
		DiodeArray[i] = DiodeTemp;
	}
}
