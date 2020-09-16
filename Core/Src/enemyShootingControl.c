#include "enemyShootingControl.h"

bool enemyActivateShoot_1 = false;
bool enemyActivateShoot_2 = false;
bool enemyActivateShoot_3 = false;
bool enemyActivateShoot_4 = false;
bool enemyActivateShoot_5 = false;
bool enemyActivateShoot_6 = false;

bool enemyShootInit_1 = true;
bool enemyShootInit_2 = true;
bool enemyShootInit_3 = true;
bool enemyShootInit_4 = true;
bool enemyShootInit_5 = true;
bool enemyShootInit_6 = true;

bool enemyShootFirstDiode_1 = true;
bool enemyShootFirstDiode_2 = true;
bool enemyShootFirstDiode_3 = true;
bool enemyShootFirstDiode_4 = true;
bool enemyShootFirstDiode_5 = true;
bool enemyShootFirstDiode_6 = true;

bool checkEnemyFreeLineToShot(int enemyDiodeID) {
	int bulletLine = getEnemyBulletLine(enemyDiodeID);
	bool enemyFreeLine = false;
	bool initEnemy = true;
	if (DiodeArray[enemyDiodeID].Enemy) {
		switch (bulletLine) {
		case 1:
			switch (enemyDiodeID) {
			case 192:
				if (DiodeArray[192].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[192].Enemy && !initEnemy) {
					break;
				}
			case 191:
				if (DiodeArray[191].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[191].Enemy && !initEnemy) {
					break;
				}
			case 160:
				if (DiodeArray[160].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[160].Enemy && !initEnemy) {
					break;
				}
			case 159:
				if (DiodeArray[159].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[159].Enemy && !initEnemy) {
					break;
				}
			case 128:
				if (DiodeArray[128].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[128].Enemy && !initEnemy) {
					break;
				}
			case 127:
				if (DiodeArray[127].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[127].Enemy && !initEnemy) {
					break;
				}
			case 96:
				if (DiodeArray[96].Enemy && initEnemy) {
					enemyFreeLine = true;
				} else if (!DiodeArray[96].Enemy) {
					initEnemy = true;
					enemyFreeLine = true;
				} else {
					break;
				}
			default:
				break;

			}
			break;
		case 2:
			switch (enemyDiodeID) {
			case 193:
				if (DiodeArray[193].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[193].Enemy && !initEnemy) {
					break;
				}
			case 190:
				if (DiodeArray[190].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[190].Enemy && !initEnemy) {
					break;
				}
			case 161:
				if (DiodeArray[161].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[161].Enemy && !initEnemy) {
					break;
				}
			case 158:
				if (DiodeArray[158].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[158].Enemy && !initEnemy) {
					break;
				}
			case 129:
				if (DiodeArray[129].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[129].Enemy && !initEnemy) {
					break;
				}
			case 126:
				if (DiodeArray[126].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[126].Enemy && !initEnemy) {
					break;
				}
			case 97:
				if (DiodeArray[97].Enemy && initEnemy) {
					enemyFreeLine = true;
				} else if (!DiodeArray[97].Enemy) {
					initEnemy = true;
					enemyFreeLine = true;
				} else {
					break;
				}
			default:
				break;
			}
			break;
		case 3:
			switch (enemyDiodeID) {
			case 194:
				if (DiodeArray[194].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[194].Enemy && !initEnemy) {
					break;
				}
			case 189:
				if (DiodeArray[189].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[189].Enemy && !initEnemy) {
					break;
				}
			case 162:
				if (DiodeArray[162].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[162].Enemy && !initEnemy) {
					break;
				}
			case 157:
				if (DiodeArray[157].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[157].Enemy && !initEnemy) {
					break;
				}
			case 130:
				if (DiodeArray[130].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[130].Enemy && !initEnemy) {
					break;
				}
			case 125:
				if (DiodeArray[125].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[125].Enemy && !initEnemy) {
					break;
				}
			case 98:
				if (DiodeArray[98].Enemy && initEnemy) {
					enemyFreeLine = true;
				} else if (!DiodeArray[98].Enemy) {
					initEnemy = true;
					enemyFreeLine = true;
				} else {
					break;
				}
			default:
				break;
			}
			break;
		case 4:
			switch (enemyDiodeID) {
			case 195:
				if (DiodeArray[195].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[195].Enemy && !initEnemy) {
					break;
				}
			case 188:
				if (DiodeArray[188].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[188].Enemy && !initEnemy) {
					break;
				}
			case 163:
				if (DiodeArray[163].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[163].Enemy && !initEnemy) {
					break;
				}
			case 156:
				if (DiodeArray[156].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[156].Enemy && !initEnemy) {
					break;
				}
			case 131:
				if (DiodeArray[131].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[131].Enemy && !initEnemy) {
					break;
				}
			case 124:
				if (DiodeArray[124].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[124].Enemy && !initEnemy) {
					break;
				}
			case 99:
				if (DiodeArray[99].Enemy && initEnemy) {
					enemyFreeLine = true;
				} else if (!DiodeArray[99].Enemy) {
					initEnemy = true;
					enemyFreeLine = true;
				} else {
					break;
				}
			default:
				break;
			}
			break;
		case 5:
			switch (enemyDiodeID) {
			case 196:
				if (DiodeArray[196].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[196].Enemy && !initEnemy) {
					break;
				}
			case 187:
				if (DiodeArray[187].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[187].Enemy && !initEnemy) {
					break;
				}
			case 164:
				if (DiodeArray[164].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[164].Enemy && !initEnemy) {
					break;
				}
			case 155:
				if (DiodeArray[155].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[155].Enemy && !initEnemy) {
					break;
				}
			case 132:
				if (DiodeArray[132].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[132].Enemy && !initEnemy) {
					break;
				}
			case 123:
				if (DiodeArray[123].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[123].Enemy && !initEnemy) {
					break;
				}
			case 100:
				if (DiodeArray[100].Enemy && initEnemy) {
					enemyFreeLine = true;
				} else if (!DiodeArray[100].Enemy) {
					initEnemy = true;
					enemyFreeLine = true;
				} else {
					break;
				}
			default:
				break;
			}
			break;
		case 6:
			switch (enemyDiodeID) {
			case 197:
				if (DiodeArray[197].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[197].Enemy && !initEnemy) {
					break;
				}
			case 186:
				if (DiodeArray[186].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[186].Enemy && !initEnemy) {
					break;
				}
			case 165:
				if (DiodeArray[165].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[165].Enemy && !initEnemy) {
					break;
				}
			case 154:
				if (DiodeArray[154].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[154].Enemy && !initEnemy) {
					break;
				}
			case 133:
				if (DiodeArray[133].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[133].Enemy && !initEnemy) {
					break;
				}
			case 122:
				if (DiodeArray[122].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[122].Enemy && !initEnemy) {
					break;
				}
			case 101:
				if (DiodeArray[101].Enemy && initEnemy) {
					enemyFreeLine = true;
				} else if (!DiodeArray[101].Enemy) {
					initEnemy = true;
					enemyFreeLine = true;
				} else {
					break;
				}
			default:
				break;
			}
			break;
		case 7:
			switch (enemyDiodeID) {
			case 198:
				if (DiodeArray[198].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[198].Enemy && !initEnemy) {
					break;
				}
			case 185:
				if (DiodeArray[185].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[185].Enemy && !initEnemy) {
					break;
				}
			case 166:
				if (DiodeArray[166].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[166].Enemy && !initEnemy) {
					break;
				}
			case 153:
				if (DiodeArray[153].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[153].Enemy && !initEnemy) {
					break;
				}
			case 134:
				if (DiodeArray[134].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[134].Enemy && !initEnemy) {
					break;
				}
			case 121:
				if (DiodeArray[121].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[121].Enemy && !initEnemy) {
					break;
				}
			case 102:
				if (DiodeArray[102].Enemy && initEnemy) {
					enemyFreeLine = true;
				} else if (!DiodeArray[102].Enemy) {
					initEnemy = true;
					enemyFreeLine = true;
				} else {
					break;
				}
			default:
				break;
			}
			break;
		case 8:
			switch (enemyDiodeID) {
			case 199:
				if (DiodeArray[199].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[199].Enemy && !initEnemy) {
					break;
				}
			case 184:
				if (DiodeArray[184].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[184].Enemy && !initEnemy) {
					break;
				}
			case 167:
				if (DiodeArray[167].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[167].Enemy && !initEnemy) {
					break;
				}
			case 152:
				if (DiodeArray[152].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[152].Enemy && !initEnemy) {
					break;
				}
			case 135:
				if (DiodeArray[135].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[135].Enemy && !initEnemy) {
					break;
				}
			case 120:
				if (DiodeArray[120].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[120].Enemy && !initEnemy) {
					break;
				}
			case 103:
				if (DiodeArray[103].Enemy && initEnemy) {
					enemyFreeLine = true;
				} else if (!DiodeArray[103].Enemy) {
					initEnemy = true;
					enemyFreeLine = true;
				} else {
					break;
				}
			default:
				break;
			}
			break;
		case 9:
			switch (enemyDiodeID) {
			case 200:
				if (DiodeArray[200].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[200].Enemy && !initEnemy) {
					break;
				}
			case 183:
				if (DiodeArray[183].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[183].Enemy && !initEnemy) {
					break;
				}
			case 168:
				if (DiodeArray[168].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[168].Enemy && !initEnemy) {
					break;
				}
			case 151:
				if (DiodeArray[151].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[151].Enemy && !initEnemy) {
					break;
				}
			case 136:
				if (DiodeArray[136].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[136].Enemy && !initEnemy) {
					break;
				}
			case 119:
				if (DiodeArray[119].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[119].Enemy && !initEnemy) {
					break;
				}
			case 104:
				if (DiodeArray[104].Enemy && initEnemy) {
					enemyFreeLine = true;
				} else if (!DiodeArray[104].Enemy) {
					initEnemy = true;
					enemyFreeLine = true;
				} else {
					break;
				}
			default:
				break;
			}
			break;
		case 10:
			switch (enemyDiodeID) {
			case 201:
				if (DiodeArray[201].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[201].Enemy && !initEnemy) {
					break;
				}
			case 182:
				if (DiodeArray[182].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[182].Enemy && !initEnemy) {
					break;
				}
			case 169:
				if (DiodeArray[169].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[169].Enemy && !initEnemy) {
					break;
				}
			case 150:
				if (DiodeArray[150].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[150].Enemy && !initEnemy) {
					break;
				}
			case 137:
				if (DiodeArray[137].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[137].Enemy && !initEnemy) {
					break;
				}
			case 118:
				if (DiodeArray[118].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[118].Enemy && !initEnemy) {
					break;
				}
			case 105:
				if (DiodeArray[105].Enemy && initEnemy) {
					enemyFreeLine = true;
				} else if (!DiodeArray[105].Enemy) {
					initEnemy = true;
					enemyFreeLine = true;
				} else {
					break;
				}
			default:
				break;
			}
			break;
		case 11:
			switch (enemyDiodeID) {
			case 202:
				if (DiodeArray[202].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[202].Enemy && !initEnemy) {
					break;
				}
			case 181:
				if (DiodeArray[181].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[181].Enemy && !initEnemy) {
					break;
				}
			case 170:
				if (DiodeArray[170].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[170].Enemy && !initEnemy) {
					break;
				}
			case 149:
				if (DiodeArray[149].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[149].Enemy && !initEnemy) {
					break;
				}
			case 138:
				if (DiodeArray[138].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[138].Enemy && !initEnemy) {
					break;
				}
			case 117:
				if (DiodeArray[117].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[117].Enemy && !initEnemy) {
					break;
				}
			case 106:
				if (DiodeArray[106].Enemy && initEnemy) {
					enemyFreeLine = true;
				} else if (!DiodeArray[106].Enemy) {
					initEnemy = true;
					enemyFreeLine = true;
				} else {
					break;
				}
			default:
				break;
			}
			break;
		case 12:
			switch (enemyDiodeID) {
			case 203:
				if (DiodeArray[203].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[203].Enemy && !initEnemy) {
					break;
				}
			case 180:
				if (DiodeArray[180].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[180].Enemy && !initEnemy) {
					break;
				}
			case 171:
				if (DiodeArray[171].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[171].Enemy && !initEnemy) {
					break;
				}
			case 148:
				if (DiodeArray[148].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[148].Enemy && !initEnemy) {
					break;
				}
			case 139:
				if (DiodeArray[139].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[139].Enemy && !initEnemy) {
					break;
				}
			case 116:
				if (DiodeArray[116].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[116].Enemy && !initEnemy) {
					break;
				}
			case 107:
				if (DiodeArray[107].Enemy && initEnemy) {
					enemyFreeLine = true;
				} else if (!DiodeArray[107].Enemy) {
					initEnemy = true;
					enemyFreeLine = true;
				} else {
					break;
				}
			default:
				break;
			}
			break;
		case 13:
			switch (enemyDiodeID) {
			case 204:
				if (DiodeArray[204].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[204].Enemy && !initEnemy) {
					break;
				}
			case 179:
				if (DiodeArray[179].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[179].Enemy && !initEnemy) {
					break;
				}
			case 172:
				if (DiodeArray[172].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[172].Enemy && !initEnemy) {
					break;
				}
			case 147:
				if (DiodeArray[147].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[147].Enemy && !initEnemy) {
					break;
				}
			case 140:
				if (DiodeArray[140].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[140].Enemy && !initEnemy) {
					break;
				}
			case 115:
				if (DiodeArray[115].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[115].Enemy && !initEnemy) {
					break;
				}
			case 108:
				if (DiodeArray[108].Enemy && initEnemy) {
					enemyFreeLine = true;
				} else if (!DiodeArray[108].Enemy) {
					initEnemy = true;
					enemyFreeLine = true;
				} else {
					break;
				}
			default:
				break;
			}
			break;
		case 14:
			switch (enemyDiodeID) {
			case 205:
				if (DiodeArray[205].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[205].Enemy && !initEnemy) {
					break;
				}
			case 178:
				if (DiodeArray[178].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[178].Enemy && !initEnemy) {
					break;
				}
			case 173:
				if (DiodeArray[173].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[173].Enemy && !initEnemy) {
					break;
				}
			case 146:
				if (DiodeArray[146].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[146].Enemy && !initEnemy) {
					break;
				}
			case 141:
				if (DiodeArray[141].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[141].Enemy && !initEnemy) {
					break;
				}
			case 114:
				if (DiodeArray[114].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[114].Enemy && !initEnemy) {
					break;
				}
			case 109:
				if (DiodeArray[109].Enemy && initEnemy) {
					enemyFreeLine = true;
				} else if (!DiodeArray[109].Enemy) {
					initEnemy = true;
					enemyFreeLine = true;
				} else {
					break;
				}
			default:
				break;
			}
			break;
		case 15:
			switch (enemyDiodeID) {
			case 206:
				if (DiodeArray[206].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[206].Enemy && !initEnemy) {
					break;
				}
			case 177:
				if (DiodeArray[177].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[177].Enemy && !initEnemy) {
					break;
				}
			case 174:
				if (DiodeArray[174].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[174].Enemy && !initEnemy) {
					break;
				}
			case 145:
				if (DiodeArray[145].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[145].Enemy && !initEnemy) {
					break;
				}
			case 142:
				if (DiodeArray[142].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[142].Enemy && !initEnemy) {
					break;
				}
			case 113:
				if (DiodeArray[113].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[113].Enemy && !initEnemy) {
					break;
				}
			case 110:
				if (DiodeArray[110].Enemy && initEnemy) {
					enemyFreeLine = true;
				} else if (!DiodeArray[110].Enemy) {
					initEnemy = true;
					enemyFreeLine = true;
				} else {
					break;
				}
			default:
				break;
			}
			break;
		case 16:
			switch (enemyDiodeID) {
			case 207:
				if (DiodeArray[207].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[207].Enemy && !initEnemy) {
					break;
				}
			case 176:
				if (DiodeArray[176].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[176].Enemy && !initEnemy) {
					break;
				}
			case 175:
				if (DiodeArray[175].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[175].Enemy && !initEnemy) {
					break;
				}
			case 144:
				if (DiodeArray[144].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[144].Enemy && !initEnemy) {
					break;
				}
			case 143:
				if (DiodeArray[143].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[143].Enemy && !initEnemy) {
					break;
				}
			case 112:
				if (DiodeArray[112].Enemy && initEnemy) {
					initEnemy = false;
				} else if (DiodeArray[112].Enemy && !initEnemy) {
					break;
				}
			case 111:
				if (DiodeArray[111].Enemy && initEnemy) {
					enemyFreeLine = true;
				} else if (!DiodeArray[111].Enemy) {
					initEnemy = true;
					enemyFreeLine = true;
				} else {
					break;
				}
			default:
				break;
			}
			break;
		default:
			break;
		}
	}
	return enemyFreeLine;
}

void initEnemyShooting() {
	int enemyDiodeID = getRand(96, 207);
	if (checkEnemyFreeLineToShot(enemyDiodeID)) {
		if (!enemyActivateShoot_1) {
			enemyActivateShoot_1 = true;
			enemyDiodeStartShootID_1 = enemyDiodeID;
		} else if (!enemyActivateShoot_2) {
			enemyActivateShoot_2 = true;
			enemyDiodeStartShootID_2 = enemyDiodeID;
		} else if (!enemyActivateShoot_3) {
			enemyActivateShoot_3 = true;
			enemyDiodeStartShootID_3 = enemyDiodeID;
		} else if (!enemyActivateShoot_4) {
			enemyActivateShoot_4 = true;
			enemyDiodeStartShootID_4 = enemyDiodeID;
		}

	}
}

void enemyShooting_1() {
	int bulletLine = getEnemyBulletLine(enemyDiodeStartShootID_1);

	switch (bulletLine) {
	case 1:
		if (enemyShootInit_1) {
			switch (enemyDiodeStartShootID_1) {
			case 192:
				enemyDiodeShootRoute_1 = 1;

				DiodeArray[191].FreeSpace = false;
				DiodeArray[160].FreeSpace = false;
				DiodeArray[159].FreeSpace = false;
				DiodeArray[128].FreeSpace = false;
				DiodeArray[127].FreeSpace = false;
				DiodeArray[96].FreeSpace = false;
				break;
			case 191:
				enemyDiodeShootRoute_1 = 2;

				DiodeArray[160].FreeSpace = false;
				DiodeArray[159].FreeSpace = false;
				DiodeArray[128].FreeSpace = false;
				DiodeArray[127].FreeSpace = false;
				DiodeArray[96].FreeSpace = false;
				break;
			case 160:
				enemyDiodeShootRoute_1 = 3;

				DiodeArray[159].FreeSpace = false;
				DiodeArray[128].FreeSpace = false;
				DiodeArray[127].FreeSpace = false;
				DiodeArray[96].FreeSpace = false;
				break;
			case 159:
				enemyDiodeShootRoute_1 = 4;

				DiodeArray[128].FreeSpace = false;
				DiodeArray[127].FreeSpace = false;
				DiodeArray[96].FreeSpace = false;
				break;
			case 128:
				enemyDiodeShootRoute_1 = 5;

				DiodeArray[127].FreeSpace = false;
				DiodeArray[96].FreeSpace = false;
				break;
			case 127:
				enemyDiodeShootRoute_1 = 6;

				DiodeArray[96].FreeSpace = false;
				break;
			case 96:
				enemyDiodeShootRoute_1 = 7;

				break;
			default:
				break;
			}
			enemyShootInit_1 = false;
		}
		switch (enemyDiodeShootRoute_1) {
		case 1:
			enemyShootFirstDiode_1 = false;
			DiodeArray[191].EnemyBullet = true;
			setPixelColor(191, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 191;
			break;
		case 2:
			if (enemyShootFirstDiode_1) {
				DiodeArray[160].EnemyBullet = true;
				setPixelColor(160, THEME);
				setPixelColor(160, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[191].FreeSpace = true;
				DiodeArray[191].EnemyBullet = false;
				setPixelColor(191, THEME);

				DiodeArray[160].EnemyBullet = true;
				setPixelColor(160, THEME);
				setPixelColor(160, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 160;
			break;
		case 3:
			if (enemyShootFirstDiode_1) {
				DiodeArray[159].EnemyBullet = true;
				setPixelColor(159, THEME);
				setPixelColor(159, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[160].FreeSpace = true;
				DiodeArray[160].EnemyBullet = false;
				setPixelColor(160, THEME);

				DiodeArray[159].EnemyBullet = true;
				setPixelColor(159, THEME);
				setPixelColor(159, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 159;
			break;
		case 4:
			if (enemyShootFirstDiode_1) {
				DiodeArray[128].EnemyBullet = true;
				setPixelColor(128, THEME);
				setPixelColor(128, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[159].FreeSpace = true;
				DiodeArray[159].EnemyBullet = false;
				setPixelColor(159, THEME);

				DiodeArray[128].EnemyBullet = true;
				setPixelColor(128, THEME);
				setPixelColor(128, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 128;
			break;
		case 5:
			if (enemyShootFirstDiode_1) {
				DiodeArray[127].EnemyBullet = true;
				setPixelColor(127, THEME);
				setPixelColor(127, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[128].FreeSpace = true;
				DiodeArray[128].EnemyBullet = false;
				setPixelColor(128, THEME);

				DiodeArray[127].EnemyBullet = true;
				setPixelColor(127, THEME);
				setPixelColor(127, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 127;
			break;
		case 6:
			if (enemyShootFirstDiode_1) {
				DiodeArray[96].EnemyBullet = true;
				setPixelColor(96, THEME);
				setPixelColor(96, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[127].FreeSpace = true;
				DiodeArray[127].EnemyBullet = false;
				setPixelColor(127, THEME);

				DiodeArray[96].EnemyBullet = true;
				setPixelColor(96, THEME);
				setPixelColor(96, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 96;
			break;
		case 7:
			if (enemyShootFirstDiode_1) {
				DiodeArray[95].EnemyBullet = true;
				setPixelColor(95, THEME);
				setPixelColor(95, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[96].FreeSpace = true;
				DiodeArray[96].EnemyBullet = false;
				setPixelColor(96, THEME);

				DiodeArray[95].EnemyBullet = true;
				setPixelColor(95, THEME);
				setPixelColor(95, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 95;
			break;
		case 8:
			DiodeArray[95].FreeSpace = true;
			DiodeArray[95].EnemyBullet = false;
			setPixelColor(95, THEME);

			DiodeArray[64].FreeSpace = false;
			DiodeArray[64].EnemyBullet = true;
			setPixelColor(64, THEME);
			setPixelColor(64, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 64;
			break;
		case 9:
			DiodeArray[64].FreeSpace = true;
			DiodeArray[64].EnemyBullet = false;
			setPixelColor(64, THEME);

			DiodeArray[63].FreeSpace = false;
			DiodeArray[63].EnemyBullet = true;
			setPixelColor(63, THEME);
			setPixelColor(63, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 63;
			break;
		case 10:
			DiodeArray[63].FreeSpace = true;
			DiodeArray[63].EnemyBullet = false;
			setPixelColor(63, THEME);

			DiodeArray[32].FreeSpace = false;
			DiodeArray[32].EnemyBullet = true;
			setPixelColor(32, THEME);
			setPixelColor(32, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 32;
			break;
		case 11:
			DiodeArray[32].FreeSpace = true;
			DiodeArray[32].EnemyBullet = false;
			setPixelColor(32, THEME);

			DiodeArray[31].FreeSpace = false;
			DiodeArray[31].EnemyBullet = true;
			setPixelColor(31, THEME);
			setPixelColor(31, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 31;
			break;
		case 12:
			DiodeArray[31].FreeSpace = true;
			DiodeArray[31].EnemyBullet = false;
			setPixelColor(31, THEME);

			DiodeArray[0].FreeSpace = false;
			DiodeArray[0].EnemyBullet = true;
			setPixelColor(0, THEME);
			setPixelColor(0, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 0;
			break;
		case 13:
			DiodeArray[0].FreeSpace = true;
			DiodeArray[0].EnemyBullet = false;
			setPixelColor(0, THEME);

			enemyShootFirstDiode_1 = true;
			enemyShootInit_1 = true;
			enemyActivateShoot_1 = false;
			break;
		default:
			break;
		}
		break;
	case 2:
		if (enemyShootInit_1) {
			switch (enemyDiodeStartShootID_1) {
			case 193:
				enemyDiodeShootRoute_1 = 1;

				DiodeArray[190].FreeSpace = false;
				DiodeArray[161].FreeSpace = false;
				DiodeArray[158].FreeSpace = false;
				DiodeArray[129].FreeSpace = false;
				DiodeArray[126].FreeSpace = false;
				DiodeArray[97].FreeSpace = false;
				break;
			case 190:
				enemyDiodeShootRoute_1 = 2;

				DiodeArray[161].FreeSpace = false;
				DiodeArray[158].FreeSpace = false;
				DiodeArray[129].FreeSpace = false;
				DiodeArray[126].FreeSpace = false;
				DiodeArray[97].FreeSpace = false;
				break;
			case 161:
				enemyDiodeShootRoute_1 = 3;

				DiodeArray[158].FreeSpace = false;
				DiodeArray[129].FreeSpace = false;
				DiodeArray[126].FreeSpace = false;
				DiodeArray[97].FreeSpace = false;
				break;
			case 158:
				enemyDiodeShootRoute_1 = 4;

				DiodeArray[129].FreeSpace = false;
				DiodeArray[126].FreeSpace = false;
				DiodeArray[97].FreeSpace = false;
				break;
			case 129:
				enemyDiodeShootRoute_1 = 5;

				DiodeArray[126].FreeSpace = false;
				DiodeArray[97].FreeSpace = false;
				break;
			case 126:
				enemyDiodeShootRoute_1 = 6;

				DiodeArray[97].FreeSpace = false;
				break;
			case 97:
				enemyDiodeShootRoute_1 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_1 = false;
		}
		switch (enemyDiodeShootRoute_1) {
		case 1:
			enemyShootFirstDiode_1 = false;
			DiodeArray[190].EnemyBullet = true;
			setPixelColor(190, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 190;
			break;
		case 2:
			if (enemyShootFirstDiode_1) {
				DiodeArray[161].EnemyBullet = true;
				setPixelColor(161, THEME);
				setPixelColor(161, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[190].FreeSpace = true;
				DiodeArray[190].EnemyBullet = false;
				setPixelColor(190, THEME);

				DiodeArray[161].EnemyBullet = true;
				setPixelColor(161, THEME);
				setPixelColor(161, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 161;
			break;
		case 3:
			if (enemyShootFirstDiode_1) {
				DiodeArray[158].EnemyBullet = true;
				setPixelColor(158, THEME);
				setPixelColor(158, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[161].FreeSpace = true;
				DiodeArray[161].EnemyBullet = false;
				setPixelColor(161, THEME);

				DiodeArray[158].EnemyBullet = true;
				setPixelColor(158, THEME);
				setPixelColor(158, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 158;
			break;
		case 4:
			if (enemyShootFirstDiode_1) {
				DiodeArray[129].EnemyBullet = true;
				setPixelColor(129, THEME);
				setPixelColor(129, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[158].FreeSpace = true;
				DiodeArray[158].EnemyBullet = false;
				setPixelColor(158, THEME);

				DiodeArray[129].EnemyBullet = true;
				setPixelColor(129, THEME);
				setPixelColor(129, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 129;
			break;
		case 5:
			if (enemyShootFirstDiode_1) {
				DiodeArray[126].EnemyBullet = true;
				setPixelColor(126, THEME);
				setPixelColor(126, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[129].FreeSpace = true;
				DiodeArray[129].EnemyBullet = false;
				setPixelColor(129, THEME);

				DiodeArray[126].EnemyBullet = true;
				setPixelColor(126, THEME);
				setPixelColor(126, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 126;
			break;
		case 6:
			if (enemyShootFirstDiode_1) {
				DiodeArray[97].EnemyBullet = true;
				setPixelColor(97, THEME);
				setPixelColor(97, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[126].FreeSpace = true;
				DiodeArray[126].EnemyBullet = false;
				setPixelColor(126, THEME);

				DiodeArray[97].EnemyBullet = true;
				setPixelColor(97, THEME);
				setPixelColor(97, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 97;
			break;
		case 7:
			if (enemyShootFirstDiode_1) {
				DiodeArray[94].EnemyBullet = true;
				setPixelColor(94, THEME);
				setPixelColor(94, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[97].FreeSpace = true;
				DiodeArray[97].EnemyBullet = false;
				setPixelColor(97, THEME);

				DiodeArray[94].EnemyBullet = true;
				setPixelColor(94, THEME);
				setPixelColor(94, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 94;
			break;
		case 8:
			DiodeArray[94].FreeSpace = true;
			DiodeArray[94].EnemyBullet = false;
			setPixelColor(94, THEME);

			DiodeArray[65].FreeSpace = false;
			DiodeArray[65].EnemyBullet = true;
			setPixelColor(65, THEME);
			setPixelColor(65, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 65;
			break;
		case 9:
			DiodeArray[65].FreeSpace = true;
			DiodeArray[65].EnemyBullet = false;
			setPixelColor(65, THEME);

			DiodeArray[62].FreeSpace = false;
			DiodeArray[62].EnemyBullet = true;
			setPixelColor(62, THEME);
			setPixelColor(62, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 62;
			break;
		case 10:
			DiodeArray[62].FreeSpace = true;
			DiodeArray[62].EnemyBullet = false;
			setPixelColor(62, THEME);

			DiodeArray[33].FreeSpace = false;
			DiodeArray[33].EnemyBullet = true;
			setPixelColor(33, THEME);
			setPixelColor(33, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 33;
			break;
		case 11:
			DiodeArray[33].FreeSpace = true;
			DiodeArray[33].EnemyBullet = false;
			setPixelColor(33, THEME);

			DiodeArray[30].FreeSpace = false;
			DiodeArray[30].EnemyBullet = true;
			setPixelColor(30, THEME);
			setPixelColor(30, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 30;
			break;
		case 12:
			DiodeArray[30].FreeSpace = true;
			DiodeArray[30].EnemyBullet = false;
			setPixelColor(30, THEME);

			DiodeArray[1].FreeSpace = false;
			DiodeArray[1].EnemyBullet = true;
			setPixelColor(1, THEME);
			setPixelColor(1, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 1;
			break;
		case 13:
			DiodeArray[1].FreeSpace = true;
			DiodeArray[1].EnemyBullet = false;
			setPixelColor(1, THEME);

			enemyShootFirstDiode_1 = true;
			enemyShootInit_1 = true;
			enemyActivateShoot_1 = false;
			break;
		default:
			break;
		}
		break;
	case 3:
		if (enemyShootInit_1) {
			switch (enemyDiodeStartShootID_1) {
			case 194:
				enemyDiodeShootRoute_1 = 1;

				DiodeArray[189].FreeSpace = false;
				DiodeArray[162].FreeSpace = false;
				DiodeArray[157].FreeSpace = false;
				DiodeArray[130].FreeSpace = false;
				DiodeArray[125].FreeSpace = false;
				DiodeArray[98].FreeSpace = false;
				break;
			case 189:
				enemyDiodeShootRoute_1 = 2;

				DiodeArray[162].FreeSpace = false;
				DiodeArray[157].FreeSpace = false;
				DiodeArray[130].FreeSpace = false;
				DiodeArray[125].FreeSpace = false;
				DiodeArray[98].FreeSpace = false;
				break;
			case 162:
				enemyDiodeShootRoute_1 = 3;

				DiodeArray[157].FreeSpace = false;
				DiodeArray[130].FreeSpace = false;
				DiodeArray[125].FreeSpace = false;
				DiodeArray[98].FreeSpace = false;
				break;
			case 157:
				enemyDiodeShootRoute_1 = 4;

				DiodeArray[130].FreeSpace = false;
				DiodeArray[125].FreeSpace = false;
				DiodeArray[98].FreeSpace = false;
				break;
			case 130:
				enemyDiodeShootRoute_1 = 5;

				DiodeArray[125].FreeSpace = false;
				DiodeArray[98].FreeSpace = false;
				break;
			case 125:
				enemyDiodeShootRoute_1 = 6;

				DiodeArray[98].FreeSpace = false;
				break;
			case 98:
				enemyDiodeShootRoute_1 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_1 = false;
		}
		switch (enemyDiodeShootRoute_1) {
		case 1:
			enemyShootFirstDiode_1 = false;
			DiodeArray[189].EnemyBullet = true;
			setPixelColor(189, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 189;
			break;
		case 2:
			if (enemyShootFirstDiode_1) {
				DiodeArray[162].EnemyBullet = true;
				setPixelColor(162, THEME);
				setPixelColor(162, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[189].FreeSpace = true;
				DiodeArray[189].EnemyBullet = false;
				setPixelColor(189, THEME);

				DiodeArray[162].EnemyBullet = true;
				setPixelColor(162, THEME);
				setPixelColor(162, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 162;
			break;
		case 3:
			if (enemyShootFirstDiode_1) {
				DiodeArray[157].EnemyBullet = true;
				setPixelColor(157, THEME);
				setPixelColor(157, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[162].FreeSpace = true;
				DiodeArray[162].EnemyBullet = false;
				setPixelColor(162, THEME);

				DiodeArray[157].EnemyBullet = true;
				setPixelColor(157, THEME);
				setPixelColor(157, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 157;
			break;
		case 4:
			if (enemyShootFirstDiode_1) {
				DiodeArray[130].EnemyBullet = true;
				setPixelColor(130, THEME);
				setPixelColor(130, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[157].FreeSpace = true;
				DiodeArray[157].EnemyBullet = false;
				setPixelColor(157, THEME);

				DiodeArray[130].EnemyBullet = true;
				setPixelColor(130, THEME);
				setPixelColor(130, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 130;
			break;
		case 5:
			if (enemyShootFirstDiode_1) {
				DiodeArray[125].EnemyBullet = true;
				setPixelColor(125, THEME);
				setPixelColor(125, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[130].FreeSpace = true;
				DiodeArray[130].EnemyBullet = false;
				setPixelColor(130, THEME);

				DiodeArray[125].EnemyBullet = true;
				setPixelColor(125, THEME);
				setPixelColor(125, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 125;
			break;
		case 6:
			if (enemyShootFirstDiode_1) {
				DiodeArray[98].EnemyBullet = true;
				setPixelColor(98, THEME);
				setPixelColor(98, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[125].FreeSpace = true;
				DiodeArray[125].EnemyBullet = false;
				setPixelColor(125, THEME);

				DiodeArray[98].EnemyBullet = true;
				setPixelColor(98, THEME);
				setPixelColor(98, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 98;
			break;
		case 7:
			if (enemyShootFirstDiode_1) {
				DiodeArray[93].EnemyBullet = true;
				setPixelColor(93, THEME);
				setPixelColor(93, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[98].FreeSpace = true;
				DiodeArray[98].EnemyBullet = false;
				setPixelColor(98, THEME);

				DiodeArray[93].EnemyBullet = true;
				setPixelColor(93, THEME);
				setPixelColor(93, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 93;
			break;
		case 8:
			DiodeArray[93].FreeSpace = true;
			DiodeArray[93].EnemyBullet = false;
			setPixelColor(93, THEME);

			DiodeArray[66].FreeSpace = false;
			DiodeArray[66].EnemyBullet = true;
			setPixelColor(66, THEME);
			setPixelColor(66, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 66;
			break;
		case 9:
			DiodeArray[66].FreeSpace = true;
			DiodeArray[66].EnemyBullet = false;
			setPixelColor(66, THEME);

			DiodeArray[61].FreeSpace = false;
			DiodeArray[61].EnemyBullet = true;
			setPixelColor(61, THEME);
			setPixelColor(61, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 61;
			break;
		case 10:
			DiodeArray[61].FreeSpace = true;
			DiodeArray[61].EnemyBullet = false;
			setPixelColor(61, THEME);

			DiodeArray[34].FreeSpace = false;
			DiodeArray[34].EnemyBullet = true;
			setPixelColor(34, THEME);
			setPixelColor(34, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 34;
			break;
		case 11:
			DiodeArray[34].FreeSpace = true;
			DiodeArray[34].EnemyBullet = false;
			setPixelColor(34, THEME);

			DiodeArray[29].FreeSpace = false;
			DiodeArray[29].EnemyBullet = true;
			setPixelColor(29, THEME);
			setPixelColor(29, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 29;
			break;
		case 12:
			DiodeArray[29].FreeSpace = true;
			DiodeArray[29].EnemyBullet = false;
			setPixelColor(29, THEME);

			DiodeArray[2].FreeSpace = false;
			DiodeArray[2].EnemyBullet = true;
			setPixelColor(2, THEME);
			setPixelColor(2, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 2;
			break;
		case 13:
			DiodeArray[2].FreeSpace = true;
			DiodeArray[2].EnemyBullet = false;
			setPixelColor(2, THEME);

			enemyShootFirstDiode_1 = true;
			enemyShootInit_1 = true;
			enemyActivateShoot_1 = false;
			break;
		default:
			break;
		}
		break;
	case 4:
		if (enemyShootInit_1) {
			switch (enemyDiodeStartShootID_1) {
			case 195:
				enemyDiodeShootRoute_1 = 1;

				DiodeArray[188].FreeSpace = false;
				DiodeArray[163].FreeSpace = false;
				DiodeArray[156].FreeSpace = false;
				DiodeArray[131].FreeSpace = false;
				DiodeArray[124].FreeSpace = false;
				DiodeArray[99].FreeSpace = false;
				break;
			case 188:
				enemyDiodeShootRoute_1 = 2;

				DiodeArray[163].FreeSpace = false;
				DiodeArray[156].FreeSpace = false;
				DiodeArray[131].FreeSpace = false;
				DiodeArray[124].FreeSpace = false;
				DiodeArray[99].FreeSpace = false;
				break;
			case 163:
				enemyDiodeShootRoute_1 = 3;

				DiodeArray[156].FreeSpace = false;
				DiodeArray[131].FreeSpace = false;
				DiodeArray[124].FreeSpace = false;
				DiodeArray[99].FreeSpace = false;
				break;
			case 156:
				enemyDiodeShootRoute_1 = 4;

				DiodeArray[131].FreeSpace = false;
				DiodeArray[124].FreeSpace = false;
				DiodeArray[99].FreeSpace = false;
				break;
			case 131:
				enemyDiodeShootRoute_1 = 5;

				DiodeArray[124].FreeSpace = false;
				DiodeArray[99].FreeSpace = false;
				break;
			case 124:
				enemyDiodeShootRoute_1 = 6;

				DiodeArray[99].FreeSpace = false;
				break;
			case 99:
				enemyDiodeShootRoute_1 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_1 = false;
		}
		switch (enemyDiodeShootRoute_1) {
		case 1:
			enemyShootFirstDiode_1 = false;
			DiodeArray[188].EnemyBullet = true;
			setPixelColor(188, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 188;
			break;
		case 2:
			if (enemyShootFirstDiode_1) {
				DiodeArray[163].EnemyBullet = true;
				setPixelColor(163, THEME);
				setPixelColor(163, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[188].FreeSpace = true;
				DiodeArray[188].EnemyBullet = false;
				setPixelColor(188, THEME);

				DiodeArray[163].EnemyBullet = true;
				setPixelColor(163, THEME);
				setPixelColor(163, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 163;
			break;
		case 3:
			if (enemyShootFirstDiode_1) {
				DiodeArray[156].EnemyBullet = true;
				setPixelColor(156, THEME);
				setPixelColor(156, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[163].FreeSpace = true;
				DiodeArray[163].EnemyBullet = false;
				setPixelColor(163, THEME);

				DiodeArray[156].EnemyBullet = true;
				setPixelColor(156, THEME);
				setPixelColor(156, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 156;
			break;
		case 4:
			if (enemyShootFirstDiode_1) {
				DiodeArray[131].EnemyBullet = true;
				setPixelColor(131, THEME);
				setPixelColor(131, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[156].FreeSpace = true;
				DiodeArray[156].EnemyBullet = false;
				setPixelColor(156, THEME);

				DiodeArray[131].EnemyBullet = true;
				setPixelColor(131, THEME);
				setPixelColor(131, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 131;
			break;
		case 5:
			if (enemyShootFirstDiode_1) {
				DiodeArray[124].EnemyBullet = true;
				setPixelColor(124, THEME);
				setPixelColor(124, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[131].FreeSpace = true;
				DiodeArray[131].EnemyBullet = false;
				setPixelColor(131, THEME);

				DiodeArray[124].EnemyBullet = true;
				setPixelColor(124, THEME);
				setPixelColor(124, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 124;
			break;
		case 6:
			if (enemyShootFirstDiode_1) {
				DiodeArray[99].EnemyBullet = true;
				setPixelColor(99, THEME);
				setPixelColor(99, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[124].FreeSpace = true;
				DiodeArray[124].EnemyBullet = false;
				setPixelColor(124, THEME);

				DiodeArray[99].EnemyBullet = true;
				setPixelColor(99, THEME);
				setPixelColor(99, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 99;
			break;
		case 7:
			if (enemyShootFirstDiode_1) {
				DiodeArray[92].EnemyBullet = true;
				setPixelColor(92, THEME);
				setPixelColor(92, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[99].FreeSpace = true;
				DiodeArray[99].EnemyBullet = false;
				setPixelColor(99, THEME);

				DiodeArray[92].EnemyBullet = true;
				setPixelColor(92, THEME);
				setPixelColor(92, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 92;
			break;
		case 8:
			DiodeArray[92].FreeSpace = true;
			DiodeArray[92].EnemyBullet = false;
			setPixelColor(92, THEME);

			DiodeArray[67].FreeSpace = false;
			DiodeArray[67].EnemyBullet = true;
			setPixelColor(67, THEME);
			setPixelColor(67, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 67;
			break;
		case 9:
			DiodeArray[67].FreeSpace = true;
			DiodeArray[67].EnemyBullet = false;
			setPixelColor(67, THEME);

			DiodeArray[60].FreeSpace = false;
			DiodeArray[60].EnemyBullet = true;
			setPixelColor(60, THEME);
			setPixelColor(60, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 60;
			break;
		case 10:
			DiodeArray[60].FreeSpace = true;
			DiodeArray[60].EnemyBullet = false;
			setPixelColor(60, THEME);

			DiodeArray[35].FreeSpace = false;
			DiodeArray[35].EnemyBullet = true;
			setPixelColor(35, THEME);
			setPixelColor(35, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 35;
			break;
		case 11:
			DiodeArray[35].FreeSpace = true;
			DiodeArray[35].EnemyBullet = false;
			setPixelColor(35, THEME);

			DiodeArray[28].FreeSpace = false;
			DiodeArray[28].EnemyBullet = true;
			setPixelColor(28, THEME);
			setPixelColor(28, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 28;
			break;
		case 12:
			DiodeArray[28].FreeSpace = true;
			DiodeArray[28].EnemyBullet = false;
			setPixelColor(28, THEME);

			DiodeArray[3].FreeSpace = false;
			DiodeArray[3].EnemyBullet = true;
			setPixelColor(3, THEME);
			setPixelColor(3, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 3;
			break;
		case 13:
			DiodeArray[3].FreeSpace = true;
			DiodeArray[3].EnemyBullet = false;
			setPixelColor(3, THEME);

			enemyShootFirstDiode_1 = true;
			enemyShootInit_1 = true;
			enemyActivateShoot_1 = false;
			break;
		default:
			break;
		}
		break;
	case 5:
		if (enemyShootInit_1) {
			switch (enemyDiodeStartShootID_1) {
			case 196:
				enemyDiodeShootRoute_1 = 1;

				DiodeArray[187].FreeSpace = false;
				DiodeArray[164].FreeSpace = false;
				DiodeArray[155].FreeSpace = false;
				DiodeArray[132].FreeSpace = false;
				DiodeArray[123].FreeSpace = false;
				DiodeArray[100].FreeSpace = false;
				break;
			case 187:
				enemyDiodeShootRoute_1 = 2;

				DiodeArray[164].FreeSpace = false;
				DiodeArray[155].FreeSpace = false;
				DiodeArray[132].FreeSpace = false;
				DiodeArray[123].FreeSpace = false;
				DiodeArray[100].FreeSpace = false;
				break;
			case 164:
				enemyDiodeShootRoute_1 = 3;

				DiodeArray[155].FreeSpace = false;
				DiodeArray[132].FreeSpace = false;
				DiodeArray[123].FreeSpace = false;
				DiodeArray[100].FreeSpace = false;
				break;
			case 155:
				enemyDiodeShootRoute_1 = 4;

				DiodeArray[132].FreeSpace = false;
				DiodeArray[123].FreeSpace = false;
				DiodeArray[100].FreeSpace = false;
				break;
			case 132:
				enemyDiodeShootRoute_1 = 5;

				DiodeArray[123].FreeSpace = false;
				DiodeArray[100].FreeSpace = false;
				break;
			case 123:
				enemyDiodeShootRoute_1 = 6;

				DiodeArray[100].FreeSpace = false;
				break;
			case 100:
				enemyDiodeShootRoute_1 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_1 = false;
		}
		switch (enemyDiodeShootRoute_1) {
		case 1:
			enemyShootFirstDiode_1 = false;
			DiodeArray[187].EnemyBullet = true;
			setPixelColor(187, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 187;
			break;
		case 2:
			if (enemyShootFirstDiode_1) {
				DiodeArray[164].EnemyBullet = true;
				setPixelColor(164, THEME);
				setPixelColor(164, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[187].FreeSpace = true;
				DiodeArray[187].EnemyBullet = false;
				setPixelColor(187, THEME);

				DiodeArray[164].EnemyBullet = true;
				setPixelColor(164, THEME);
				setPixelColor(164, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 164;
			break;
		case 3:
			if (enemyShootFirstDiode_1) {
				DiodeArray[155].EnemyBullet = true;
				setPixelColor(155, THEME);
				setPixelColor(155, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[164].FreeSpace = true;
				DiodeArray[164].EnemyBullet = false;
				setPixelColor(164, THEME);

				DiodeArray[155].EnemyBullet = true;
				setPixelColor(155, THEME);
				setPixelColor(155, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 155;
			break;
		case 4:
			if (enemyShootFirstDiode_1) {
				DiodeArray[132].EnemyBullet = true;
				setPixelColor(132, THEME);
				setPixelColor(132, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[155].FreeSpace = true;
				DiodeArray[155].EnemyBullet = false;
				setPixelColor(155, THEME);

				DiodeArray[132].EnemyBullet = true;
				setPixelColor(132, THEME);
				setPixelColor(132, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 132;
			break;
		case 5:
			if (enemyShootFirstDiode_1) {
				DiodeArray[123].EnemyBullet = true;
				setPixelColor(123, THEME);
				setPixelColor(123, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[132].FreeSpace = true;
				DiodeArray[132].EnemyBullet = false;
				setPixelColor(132, THEME);

				DiodeArray[123].EnemyBullet = true;
				setPixelColor(123, THEME);
				setPixelColor(123, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 123;
			break;
		case 6:
			if (enemyShootFirstDiode_1) {
				DiodeArray[100].EnemyBullet = true;
				setPixelColor(100, THEME);
				setPixelColor(100, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[123].FreeSpace = true;
				DiodeArray[123].EnemyBullet = false;
				setPixelColor(123, THEME);

				DiodeArray[100].EnemyBullet = true;
				setPixelColor(100, THEME);
				setPixelColor(100, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 100;
			break;
		case 7:
			if (enemyShootFirstDiode_1) {
				DiodeArray[91].EnemyBullet = true;
				setPixelColor(91, THEME);
				setPixelColor(91, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[100].FreeSpace = true;
				DiodeArray[100].EnemyBullet = false;
				setPixelColor(100, THEME);

				DiodeArray[91].EnemyBullet = true;
				setPixelColor(91, THEME);
				setPixelColor(91, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 91;
			break;
		case 8:
			DiodeArray[91].FreeSpace = true;
			DiodeArray[91].EnemyBullet = false;
			setPixelColor(91, THEME);

			DiodeArray[68].FreeSpace = false;
			DiodeArray[68].EnemyBullet = true;
			setPixelColor(68, THEME);
			setPixelColor(68, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 68;
			break;
		case 9:
			DiodeArray[68].FreeSpace = true;
			DiodeArray[68].EnemyBullet = false;
			setPixelColor(68, THEME);

			DiodeArray[59].FreeSpace = false;
			DiodeArray[59].EnemyBullet = true;
			setPixelColor(59, THEME);
			setPixelColor(59, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 59;
			break;
		case 10:
			DiodeArray[59].FreeSpace = true;
			DiodeArray[59].EnemyBullet = false;
			setPixelColor(59, THEME);

			DiodeArray[36].FreeSpace = false;
			DiodeArray[36].EnemyBullet = true;
			setPixelColor(36, THEME);
			setPixelColor(36, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 36;
			break;
		case 11:
			DiodeArray[36].FreeSpace = true;
			DiodeArray[36].EnemyBullet = false;
			setPixelColor(36, THEME);

			DiodeArray[27].FreeSpace = false;
			DiodeArray[27].EnemyBullet = true;
			setPixelColor(27, THEME);
			setPixelColor(27, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 27;
			break;
		case 12:
			DiodeArray[27].FreeSpace = true;
			DiodeArray[27].EnemyBullet = false;
			setPixelColor(27, THEME);

			DiodeArray[4].FreeSpace = false;
			DiodeArray[4].EnemyBullet = true;
			setPixelColor(4, THEME);
			setPixelColor(4, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 4;
			break;
		case 13:
			DiodeArray[4].FreeSpace = true;
			DiodeArray[4].EnemyBullet = false;
			setPixelColor(4, THEME);

			enemyShootFirstDiode_1 = true;
			enemyShootInit_1 = true;
			enemyActivateShoot_1 = false;
			break;
		default:
			break;
		}
		break;
	case 6:
		if (enemyShootInit_1) {
			switch (enemyDiodeStartShootID_1) {
			case 197:
				enemyDiodeShootRoute_1 = 1;

				DiodeArray[186].FreeSpace = false;
				DiodeArray[165].FreeSpace = false;
				DiodeArray[154].FreeSpace = false;
				DiodeArray[133].FreeSpace = false;
				DiodeArray[122].FreeSpace = false;
				DiodeArray[101].FreeSpace = false;
				break;
			case 186:
				enemyDiodeShootRoute_1 = 2;

				DiodeArray[165].FreeSpace = false;
				DiodeArray[154].FreeSpace = false;
				DiodeArray[133].FreeSpace = false;
				DiodeArray[122].FreeSpace = false;
				DiodeArray[101].FreeSpace = false;
				break;
			case 165:
				enemyDiodeShootRoute_1 = 3;

				DiodeArray[154].FreeSpace = false;
				DiodeArray[133].FreeSpace = false;
				DiodeArray[122].FreeSpace = false;
				DiodeArray[101].FreeSpace = false;
				break;
			case 154:
				enemyDiodeShootRoute_1 = 4;

				DiodeArray[133].FreeSpace = false;
				DiodeArray[122].FreeSpace = false;
				DiodeArray[101].FreeSpace = false;
				break;
			case 133:
				enemyDiodeShootRoute_1 = 5;

				DiodeArray[122].FreeSpace = false;
				DiodeArray[101].FreeSpace = false;
				break;
			case 122:
				enemyDiodeShootRoute_1 = 6;

				DiodeArray[101].FreeSpace = false;
				break;
			case 101:
				enemyDiodeShootRoute_1 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_1 = false;
		}
		switch (enemyDiodeShootRoute_1) {
		case 1:
			enemyShootFirstDiode_1 = false;
			DiodeArray[186].EnemyBullet = true;
			setPixelColor(186, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 186;
			break;
		case 2:
			if (enemyShootFirstDiode_1) {
				DiodeArray[165].EnemyBullet = true;
				setPixelColor(165, THEME);
				setPixelColor(165, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[186].FreeSpace = true;
				DiodeArray[186].EnemyBullet = false;
				setPixelColor(186, THEME);

				DiodeArray[165].EnemyBullet = true;
				setPixelColor(165, THEME);
				setPixelColor(165, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 165;
			break;
		case 3:
			if (enemyShootFirstDiode_1) {
				DiodeArray[154].EnemyBullet = true;
				setPixelColor(154, THEME);
				setPixelColor(154, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[165].FreeSpace = true;
				DiodeArray[165].EnemyBullet = false;
				setPixelColor(165, THEME);

				DiodeArray[154].EnemyBullet = true;
				setPixelColor(154, THEME);
				setPixelColor(154, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 154;
			break;
		case 4:
			if (enemyShootFirstDiode_1) {
				DiodeArray[133].EnemyBullet = true;
				setPixelColor(133, THEME);
				setPixelColor(133, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[154].FreeSpace = true;
				DiodeArray[154].EnemyBullet = false;
				setPixelColor(154, THEME);

				DiodeArray[133].EnemyBullet = true;
				setPixelColor(133, THEME);
				setPixelColor(133, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 133;
			break;
		case 5:
			if (enemyShootFirstDiode_1) {
				DiodeArray[122].EnemyBullet = true;
				setPixelColor(122, THEME);
				setPixelColor(122, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[133].FreeSpace = true;
				DiodeArray[133].EnemyBullet = false;
				setPixelColor(133, THEME);

				DiodeArray[122].EnemyBullet = true;
				setPixelColor(122, THEME);
				setPixelColor(122, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 122;
			break;
		case 6:
			if (enemyShootFirstDiode_1) {
				DiodeArray[101].EnemyBullet = true;
				setPixelColor(101, THEME);
				setPixelColor(101, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[122].FreeSpace = true;
				DiodeArray[122].EnemyBullet = false;
				setPixelColor(122, THEME);

				DiodeArray[101].EnemyBullet = true;
				setPixelColor(101, THEME);
				setPixelColor(101, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 101;
			break;
		case 7:
			if (enemyShootFirstDiode_1) {
				DiodeArray[90].EnemyBullet = true;
				setPixelColor(90, THEME);
				setPixelColor(90, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[101].FreeSpace = true;
				DiodeArray[101].EnemyBullet = false;
				setPixelColor(101, THEME);

				DiodeArray[90].EnemyBullet = true;
				setPixelColor(90, THEME);
				setPixelColor(90, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 90;
			break;
		case 8:
			DiodeArray[90].FreeSpace = true;
			DiodeArray[90].EnemyBullet = false;
			setPixelColor(90, THEME);

			DiodeArray[69].FreeSpace = false;
			DiodeArray[69].EnemyBullet = true;
			setPixelColor(69, THEME);
			setPixelColor(69, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 69;
			break;
		case 9:
			DiodeArray[69].FreeSpace = true;
			DiodeArray[69].EnemyBullet = false;
			setPixelColor(69, THEME);

			DiodeArray[58].FreeSpace = false;
			DiodeArray[58].EnemyBullet = true;
			setPixelColor(58, THEME);
			setPixelColor(58, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 58;
			break;
		case 10:
			DiodeArray[58].FreeSpace = true;
			DiodeArray[58].EnemyBullet = false;
			setPixelColor(58, THEME);

			DiodeArray[37].FreeSpace = false;
			DiodeArray[37].EnemyBullet = true;
			setPixelColor(37, THEME);
			setPixelColor(37, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 37;
			break;
		case 11:
			DiodeArray[37].FreeSpace = true;
			DiodeArray[37].EnemyBullet = false;
			setPixelColor(37, THEME);

			DiodeArray[26].FreeSpace = false;
			DiodeArray[26].EnemyBullet = true;
			setPixelColor(26, THEME);
			setPixelColor(26, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 26;
			break;
		case 12:
			DiodeArray[26].FreeSpace = true;
			DiodeArray[26].EnemyBullet = false;
			setPixelColor(26, THEME);

			DiodeArray[5].FreeSpace = false;
			DiodeArray[5].EnemyBullet = true;
			setPixelColor(5, THEME);
			setPixelColor(5, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 5;
			break;
		case 13:
			DiodeArray[5].FreeSpace = true;
			DiodeArray[5].EnemyBullet = false;
			setPixelColor(5, THEME);

			enemyShootFirstDiode_1 = true;
			enemyShootInit_1 = true;
			enemyActivateShoot_1 = false;
			break;
		default:
			break;
		}
		break;
	case 7:
		if (enemyShootInit_1) {
			switch (enemyDiodeStartShootID_1) {
			case 198:
				enemyDiodeShootRoute_1 = 1;

				DiodeArray[185].FreeSpace = false;
				DiodeArray[166].FreeSpace = false;
				DiodeArray[153].FreeSpace = false;
				DiodeArray[134].FreeSpace = false;
				DiodeArray[121].FreeSpace = false;
				DiodeArray[102].FreeSpace = false;
				break;
			case 185:
				enemyDiodeShootRoute_1 = 2;

				DiodeArray[166].FreeSpace = false;
				DiodeArray[153].FreeSpace = false;
				DiodeArray[134].FreeSpace = false;
				DiodeArray[121].FreeSpace = false;
				DiodeArray[102].FreeSpace = false;
				break;
			case 166:
				enemyDiodeShootRoute_1 = 3;

				DiodeArray[153].FreeSpace = false;
				DiodeArray[134].FreeSpace = false;
				DiodeArray[121].FreeSpace = false;
				DiodeArray[102].FreeSpace = false;
				break;
			case 153:
				enemyDiodeShootRoute_1 = 4;

				DiodeArray[134].FreeSpace = false;
				DiodeArray[121].FreeSpace = false;
				DiodeArray[102].FreeSpace = false;
				break;
			case 134:
				enemyDiodeShootRoute_1 = 5;

				DiodeArray[121].FreeSpace = false;
				DiodeArray[102].FreeSpace = false;
				break;
			case 121:
				enemyDiodeShootRoute_1 = 6;

				DiodeArray[102].FreeSpace = false;
				break;
			case 102:
				enemyDiodeShootRoute_1 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_1 = false;
		}
		switch (enemyDiodeShootRoute_1) {
		case 1:
			enemyShootFirstDiode_1 = false;
			DiodeArray[185].EnemyBullet = true;
			setPixelColor(185, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 185;
			break;
		case 2:
			if (enemyShootFirstDiode_1) {
				DiodeArray[166].EnemyBullet = true;
				setPixelColor(166, THEME);
				setPixelColor(166, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[185].FreeSpace = true;
				DiodeArray[185].EnemyBullet = false;
				setPixelColor(185, THEME);

				DiodeArray[166].EnemyBullet = true;
				setPixelColor(166, THEME);
				setPixelColor(166, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 166;
			break;
		case 3:
			if (enemyShootFirstDiode_1) {
				DiodeArray[153].EnemyBullet = true;
				setPixelColor(153, THEME);
				setPixelColor(153, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[166].FreeSpace = true;
				DiodeArray[166].EnemyBullet = false;
				setPixelColor(166, THEME);

				DiodeArray[153].EnemyBullet = true;
				setPixelColor(153, THEME);
				setPixelColor(153, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 153;
			break;
		case 4:
			if (enemyShootFirstDiode_1) {
				DiodeArray[134].EnemyBullet = true;
				setPixelColor(134, THEME);
				setPixelColor(134, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[153].FreeSpace = true;
				DiodeArray[153].EnemyBullet = false;
				setPixelColor(153, THEME);

				DiodeArray[134].EnemyBullet = true;
				setPixelColor(134, THEME);
				setPixelColor(134, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 134;
			break;
		case 5:
			if (enemyShootFirstDiode_1) {
				DiodeArray[121].EnemyBullet = true;
				setPixelColor(121, THEME);
				setPixelColor(121, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[134].FreeSpace = true;
				DiodeArray[134].EnemyBullet = false;
				setPixelColor(134, THEME);

				DiodeArray[121].EnemyBullet = true;
				setPixelColor(121, THEME);
				setPixelColor(121, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 121;
			break;
		case 6:
			if (enemyShootFirstDiode_1) {
				DiodeArray[102].EnemyBullet = true;
				setPixelColor(102, THEME);
				setPixelColor(102, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[121].FreeSpace = true;
				DiodeArray[121].EnemyBullet = false;
				setPixelColor(121, THEME);

				DiodeArray[102].EnemyBullet = true;
				setPixelColor(102, THEME);
				setPixelColor(102, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 102;
			break;
		case 7:
			if (enemyShootFirstDiode_1) {
				DiodeArray[89].EnemyBullet = true;
				setPixelColor(89, THEME);
				setPixelColor(89, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[102].FreeSpace = true;
				DiodeArray[102].EnemyBullet = false;
				setPixelColor(102, THEME);

				DiodeArray[89].EnemyBullet = true;
				setPixelColor(89, THEME);
				setPixelColor(89, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 89;
			break;
		case 8:
			DiodeArray[89].FreeSpace = true;
			DiodeArray[89].EnemyBullet = false;
			setPixelColor(89, THEME);

			DiodeArray[70].FreeSpace = false;
			DiodeArray[70].EnemyBullet = true;
			setPixelColor(70, THEME);
			setPixelColor(70, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 70;
			break;
		case 9:
			DiodeArray[70].FreeSpace = true;
			DiodeArray[70].EnemyBullet = false;
			setPixelColor(70, THEME);

			DiodeArray[57].FreeSpace = false;
			DiodeArray[57].EnemyBullet = true;
			setPixelColor(57, THEME);
			setPixelColor(57, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 57;
			break;
		case 10:
			DiodeArray[57].FreeSpace = true;
			DiodeArray[57].EnemyBullet = false;
			setPixelColor(57, THEME);

			DiodeArray[38].FreeSpace = false;
			DiodeArray[38].EnemyBullet = true;
			setPixelColor(38, THEME);
			setPixelColor(38, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 38;
			break;
		case 11:
			DiodeArray[38].FreeSpace = true;
			DiodeArray[38].EnemyBullet = false;
			setPixelColor(38, THEME);

			DiodeArray[25].FreeSpace = false;
			DiodeArray[25].EnemyBullet = true;
			setPixelColor(25, THEME);
			setPixelColor(25, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 25;
			break;
		case 12:
			DiodeArray[25].FreeSpace = true;
			DiodeArray[25].EnemyBullet = false;
			setPixelColor(25, THEME);

			DiodeArray[6].FreeSpace = false;
			DiodeArray[6].EnemyBullet = true;
			setPixelColor(6, THEME);
			setPixelColor(6, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 6;
			break;
		case 13:
			DiodeArray[6].FreeSpace = true;
			DiodeArray[6].EnemyBullet = false;
			setPixelColor(6, THEME);

			enemyShootFirstDiode_1 = true;
			enemyShootInit_1 = true;
			enemyActivateShoot_1 = false;
			break;
		default:
			break;
		}
		break;
	case 8:
		if (enemyShootInit_1) {
			switch (enemyDiodeStartShootID_1) {
			case 199:
				enemyDiodeShootRoute_1 = 1;

				DiodeArray[184].FreeSpace = false;
				DiodeArray[167].FreeSpace = false;
				DiodeArray[152].FreeSpace = false;
				DiodeArray[135].FreeSpace = false;
				DiodeArray[120].FreeSpace = false;
				DiodeArray[103].FreeSpace = false;
				break;
			case 184:
				enemyDiodeShootRoute_1 = 2;

				DiodeArray[167].FreeSpace = false;
				DiodeArray[152].FreeSpace = false;
				DiodeArray[135].FreeSpace = false;
				DiodeArray[120].FreeSpace = false;
				DiodeArray[103].FreeSpace = false;
				break;
			case 167:
				enemyDiodeShootRoute_1 = 3;

				DiodeArray[152].FreeSpace = false;
				DiodeArray[135].FreeSpace = false;
				DiodeArray[120].FreeSpace = false;
				DiodeArray[103].FreeSpace = false;
				break;
			case 152:
				enemyDiodeShootRoute_1 = 4;

				DiodeArray[135].FreeSpace = false;
				DiodeArray[120].FreeSpace = false;
				DiodeArray[103].FreeSpace = false;
				break;
			case 135:
				enemyDiodeShootRoute_1 = 5;

				DiodeArray[120].FreeSpace = false;
				DiodeArray[103].FreeSpace = false;
				break;
			case 120:
				enemyDiodeShootRoute_1 = 6;

				DiodeArray[103].FreeSpace = false;
				break;
			case 103:
				enemyDiodeShootRoute_1 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_1 = false;
		}
		switch (enemyDiodeShootRoute_1) {
		case 1:
			enemyShootFirstDiode_1 = false;
			DiodeArray[184].EnemyBullet = true;
			setPixelColor(184, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 184;
			break;
		case 2:
			if (enemyShootFirstDiode_1) {
				DiodeArray[167].EnemyBullet = true;
				setPixelColor(167, THEME);
				setPixelColor(167, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[184].FreeSpace = true;
				DiodeArray[184].EnemyBullet = false;
				setPixelColor(184, THEME);

				DiodeArray[167].EnemyBullet = true;
				setPixelColor(167, THEME);
				setPixelColor(167, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 167;
			break;
		case 3:
			if (enemyShootFirstDiode_1) {
				DiodeArray[152].EnemyBullet = true;
				setPixelColor(152, THEME);
				setPixelColor(152, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[167].FreeSpace = true;
				DiodeArray[167].EnemyBullet = false;
				setPixelColor(167, THEME);

				DiodeArray[152].EnemyBullet = true;
				setPixelColor(152, THEME);
				setPixelColor(152, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 152;
			break;
		case 4:
			if (enemyShootFirstDiode_1) {
				DiodeArray[135].EnemyBullet = true;
				setPixelColor(135, THEME);
				setPixelColor(135, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[152].FreeSpace = true;
				DiodeArray[152].EnemyBullet = false;
				setPixelColor(152, THEME);

				DiodeArray[135].EnemyBullet = true;
				setPixelColor(135, THEME);
				setPixelColor(135, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 135;
			break;
		case 5:
			if (enemyShootFirstDiode_1) {
				DiodeArray[120].EnemyBullet = true;
				setPixelColor(120, THEME);
				setPixelColor(120, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[135].FreeSpace = true;
				DiodeArray[135].EnemyBullet = false;
				setPixelColor(135, THEME);

				DiodeArray[120].EnemyBullet = true;
				setPixelColor(120, THEME);
				setPixelColor(120, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 120;
			break;
		case 6:
			if (enemyShootFirstDiode_1) {
				DiodeArray[103].EnemyBullet = true;
				setPixelColor(103, THEME);
				setPixelColor(103, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[120].FreeSpace = true;
				DiodeArray[120].EnemyBullet = false;
				setPixelColor(120, THEME);

				DiodeArray[103].EnemyBullet = true;
				setPixelColor(103, THEME);
				setPixelColor(103, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 103;
			break;
		case 7:
			if (enemyShootFirstDiode_1) {
				DiodeArray[88].EnemyBullet = true;
				setPixelColor(88, THEME);
				setPixelColor(88, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[103].FreeSpace = true;
				DiodeArray[103].EnemyBullet = false;
				setPixelColor(103, THEME);

				DiodeArray[88].EnemyBullet = true;
				setPixelColor(88, THEME);
				setPixelColor(88, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 88;
			break;
		case 8:
			DiodeArray[88].FreeSpace = true;
			DiodeArray[88].EnemyBullet = false;
			setPixelColor(88, THEME);

			DiodeArray[71].FreeSpace = false;
			DiodeArray[71].EnemyBullet = true;
			setPixelColor(71, THEME);
			setPixelColor(71, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 71;
			break;
		case 9:
			DiodeArray[71].FreeSpace = true;
			DiodeArray[71].EnemyBullet = false;
			setPixelColor(71, THEME);

			DiodeArray[56].FreeSpace = false;
			DiodeArray[56].EnemyBullet = true;
			setPixelColor(56, THEME);
			setPixelColor(56, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 56;
			break;
		case 10:
			DiodeArray[56].FreeSpace = true;
			DiodeArray[56].EnemyBullet = false;
			setPixelColor(56, THEME);

			DiodeArray[39].FreeSpace = false;
			DiodeArray[39].EnemyBullet = true;
			setPixelColor(39, THEME);
			setPixelColor(39, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 39;
			break;
		case 11:
			DiodeArray[39].FreeSpace = true;
			DiodeArray[39].EnemyBullet = false;
			setPixelColor(39, THEME);

			DiodeArray[24].FreeSpace = false;
			DiodeArray[24].EnemyBullet = true;
			setPixelColor(24, THEME);
			setPixelColor(24, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 24;
			break;
		case 12:
			DiodeArray[24].FreeSpace = true;
			DiodeArray[24].EnemyBullet = false;
			setPixelColor(24, THEME);

			DiodeArray[7].FreeSpace = false;
			DiodeArray[7].EnemyBullet = true;
			setPixelColor(7, THEME);
			setPixelColor(7, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 7;
			break;
		case 13:
			DiodeArray[7].FreeSpace = true;
			DiodeArray[7].EnemyBullet = false;
			setPixelColor(7, THEME);

			enemyShootFirstDiode_1 = true;
			enemyShootInit_1 = true;
			enemyActivateShoot_1 = false;
			break;
		default:
			break;
		}
		break;
	case 9:
		if (enemyShootInit_1) {
			switch (enemyDiodeStartShootID_1) {
			case 200:
				enemyDiodeShootRoute_1 = 1;

				DiodeArray[183].FreeSpace = false;
				DiodeArray[168].FreeSpace = false;
				DiodeArray[151].FreeSpace = false;
				DiodeArray[136].FreeSpace = false;
				DiodeArray[119].FreeSpace = false;
				DiodeArray[104].FreeSpace = false;
				break;
			case 183:
				enemyDiodeShootRoute_1 = 2;

				DiodeArray[168].FreeSpace = false;
				DiodeArray[151].FreeSpace = false;
				DiodeArray[136].FreeSpace = false;
				DiodeArray[119].FreeSpace = false;
				DiodeArray[104].FreeSpace = false;
				break;
			case 168:
				enemyDiodeShootRoute_1 = 3;

				DiodeArray[151].FreeSpace = false;
				DiodeArray[136].FreeSpace = false;
				DiodeArray[119].FreeSpace = false;
				DiodeArray[104].FreeSpace = false;
				break;
			case 151:
				enemyDiodeShootRoute_1 = 4;

				DiodeArray[136].FreeSpace = false;
				DiodeArray[119].FreeSpace = false;
				DiodeArray[104].FreeSpace = false;
				break;
			case 136:
				enemyDiodeShootRoute_1 = 5;

				DiodeArray[119].FreeSpace = false;
				DiodeArray[104].FreeSpace = false;
				break;
			case 119:
				enemyDiodeShootRoute_1 = 6;

				DiodeArray[104].FreeSpace = false;
				break;
			case 104:
				enemyDiodeShootRoute_1 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_1 = false;
		}
		switch (enemyDiodeShootRoute_1) {
		case 1:
			enemyShootFirstDiode_1 = false;
			DiodeArray[183].EnemyBullet = true;
			setPixelColor(183, ENEMY_BULLET);
			break;
		case 2:
			if (enemyShootFirstDiode_1) {
				DiodeArray[168].EnemyBullet = true;
				setPixelColor(168, THEME);
				setPixelColor(168, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[183].FreeSpace = true;
				DiodeArray[183].EnemyBullet = false;
				setPixelColor(183, THEME);

				DiodeArray[168].EnemyBullet = true;
				setPixelColor(168, THEME);
				setPixelColor(168, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 168;
			break;
		case 3:
			if (enemyShootFirstDiode_1) {
				DiodeArray[151].EnemyBullet = true;
				setPixelColor(151, THEME);
				setPixelColor(151, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[168].FreeSpace = true;
				DiodeArray[168].EnemyBullet = false;
				setPixelColor(168, THEME);

				DiodeArray[151].EnemyBullet = true;
				setPixelColor(151, THEME);
				setPixelColor(151, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 151;
			break;
		case 4:
			if (enemyShootFirstDiode_1) {
				DiodeArray[136].EnemyBullet = true;
				setPixelColor(136, THEME);
				setPixelColor(136, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[151].FreeSpace = true;
				DiodeArray[151].EnemyBullet = false;
				setPixelColor(151, THEME);

				DiodeArray[136].EnemyBullet = true;
				setPixelColor(136, THEME);
				setPixelColor(136, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 136;
			break;
		case 5:
			if (enemyShootFirstDiode_1) {
				DiodeArray[119].EnemyBullet = true;
				setPixelColor(119, THEME);
				setPixelColor(119, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[136].FreeSpace = true;
				DiodeArray[136].EnemyBullet = false;
				setPixelColor(136, THEME);

				DiodeArray[119].EnemyBullet = true;
				setPixelColor(119, THEME);
				setPixelColor(119, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 119;
			break;
		case 6:
			if (enemyShootFirstDiode_1) {
				DiodeArray[104].EnemyBullet = true;
				setPixelColor(104, THEME);
				setPixelColor(104, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[119].FreeSpace = true;
				DiodeArray[119].EnemyBullet = false;
				setPixelColor(119, THEME);

				DiodeArray[104].EnemyBullet = true;
				setPixelColor(104, THEME);
				setPixelColor(104, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 104;
			break;
		case 7:
			if (enemyShootFirstDiode_1) {
				DiodeArray[87].EnemyBullet = true;
				setPixelColor(87, THEME);
				setPixelColor(87, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[104].FreeSpace = true;
				DiodeArray[104].EnemyBullet = false;
				setPixelColor(104, THEME);

				DiodeArray[87].EnemyBullet = true;
				setPixelColor(87, THEME);
				setPixelColor(87, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 87;
			break;
		case 8:
			DiodeArray[87].FreeSpace = true;
			DiodeArray[87].EnemyBullet = false;
			setPixelColor(87, THEME);

			DiodeArray[72].FreeSpace = false;
			DiodeArray[72].EnemyBullet = true;
			setPixelColor(72, THEME);
			setPixelColor(72, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 72;
			break;
		case 9:
			DiodeArray[72].FreeSpace = true;
			DiodeArray[72].EnemyBullet = false;
			setPixelColor(72, THEME);

			DiodeArray[55].FreeSpace = false;
			DiodeArray[55].EnemyBullet = true;
			setPixelColor(55, THEME);
			setPixelColor(55, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 55;
			break;
		case 10:
			DiodeArray[55].FreeSpace = true;
			DiodeArray[55].EnemyBullet = false;
			setPixelColor(55, THEME);

			DiodeArray[40].FreeSpace = false;
			DiodeArray[40].EnemyBullet = true;
			setPixelColor(40, THEME);
			setPixelColor(40, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 40;
			break;
		case 11:
			DiodeArray[40].FreeSpace = true;
			DiodeArray[40].EnemyBullet = false;
			setPixelColor(40, THEME);

			DiodeArray[23].FreeSpace = false;
			DiodeArray[23].EnemyBullet = true;
			setPixelColor(23, THEME);
			setPixelColor(23, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 23;
			break;
		case 12:
			DiodeArray[23].FreeSpace = true;
			DiodeArray[23].EnemyBullet = false;
			setPixelColor(23, THEME);

			DiodeArray[8].FreeSpace = false;
			DiodeArray[8].EnemyBullet = true;
			setPixelColor(8, THEME);
			setPixelColor(8, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 8;
			break;
		case 13:
			DiodeArray[8].FreeSpace = true;
			DiodeArray[8].EnemyBullet = false;
			setPixelColor(8, THEME);

			enemyShootFirstDiode_1 = true;
			enemyShootInit_1 = true;
			enemyActivateShoot_1 = false;
			break;
		default:
			break;
		}
		break;
	case 10:
		if (enemyShootInit_1) {
			switch (enemyDiodeStartShootID_1) {
			case 201:
				enemyDiodeShootRoute_1 = 1;

				DiodeArray[182].FreeSpace = false;
				DiodeArray[169].FreeSpace = false;
				DiodeArray[150].FreeSpace = false;
				DiodeArray[137].FreeSpace = false;
				DiodeArray[118].FreeSpace = false;
				DiodeArray[105].FreeSpace = false;
				break;
			case 182:
				enemyDiodeShootRoute_1 = 2;

				DiodeArray[169].FreeSpace = false;
				DiodeArray[150].FreeSpace = false;
				DiodeArray[137].FreeSpace = false;
				DiodeArray[118].FreeSpace = false;
				DiodeArray[105].FreeSpace = false;
				break;
			case 169:
				enemyDiodeShootRoute_1 = 3;

				DiodeArray[150].FreeSpace = false;
				DiodeArray[137].FreeSpace = false;
				DiodeArray[118].FreeSpace = false;
				DiodeArray[105].FreeSpace = false;
				break;
			case 150:
				enemyDiodeShootRoute_1 = 4;

				DiodeArray[137].FreeSpace = false;
				DiodeArray[118].FreeSpace = false;
				DiodeArray[105].FreeSpace = false;
				break;
			case 137:
				enemyDiodeShootRoute_1 = 5;

				DiodeArray[118].FreeSpace = false;
				DiodeArray[105].FreeSpace = false;
				break;
			case 118:
				enemyDiodeShootRoute_1 = 6;

				DiodeArray[105].FreeSpace = false;
				break;
			case 105:
				enemyDiodeShootRoute_1 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_1 = false;
		}
		switch (enemyDiodeShootRoute_1) {
		case 1:
			enemyShootFirstDiode_1 = false;
			DiodeArray[182].EnemyBullet = true;
			setPixelColor(182, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 182;
			break;
		case 2:
			if (enemyShootFirstDiode_1) {
				DiodeArray[169].EnemyBullet = true;
				setPixelColor(169, THEME);
				setPixelColor(169, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[182].FreeSpace = true;
				DiodeArray[182].EnemyBullet = false;
				setPixelColor(182, THEME);

				DiodeArray[169].EnemyBullet = true;
				setPixelColor(169, THEME);
				setPixelColor(169, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 169;
			break;
		case 3:
			if (enemyShootFirstDiode_1) {
				DiodeArray[150].EnemyBullet = true;
				setPixelColor(150, THEME);
				setPixelColor(150, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[169].FreeSpace = true;
				DiodeArray[169].EnemyBullet = false;
				setPixelColor(169, THEME);

				DiodeArray[150].EnemyBullet = true;
				setPixelColor(150, THEME);
				setPixelColor(150, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 150;
			break;
		case 4:
			if (enemyShootFirstDiode_1) {
				DiodeArray[137].EnemyBullet = true;
				setPixelColor(137, THEME);
				setPixelColor(137, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[150].FreeSpace = true;
				DiodeArray[150].EnemyBullet = false;
				setPixelColor(150, THEME);

				DiodeArray[137].EnemyBullet = true;
				setPixelColor(137, THEME);
				setPixelColor(137, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 137;
			break;
		case 5:
			if (enemyShootFirstDiode_1) {
				DiodeArray[118].EnemyBullet = true;
				setPixelColor(118, THEME);
				setPixelColor(118, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[137].FreeSpace = true;
				DiodeArray[137].EnemyBullet = false;
				setPixelColor(137, THEME);

				DiodeArray[118].EnemyBullet = true;
				setPixelColor(118, THEME);
				setPixelColor(118, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 118;
			break;
		case 6:
			if (enemyShootFirstDiode_1) {
				DiodeArray[105].EnemyBullet = true;
				setPixelColor(105, THEME);
				setPixelColor(105, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[118].FreeSpace = true;
				DiodeArray[118].EnemyBullet = false;
				setPixelColor(118, THEME);

				DiodeArray[105].EnemyBullet = true;
				setPixelColor(105, THEME);
				setPixelColor(105, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 105;
			break;
		case 7:
			if (enemyShootFirstDiode_1) {
				DiodeArray[86].EnemyBullet = true;
				setPixelColor(86, THEME);
				setPixelColor(86, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[105].FreeSpace = true;
				DiodeArray[105].EnemyBullet = false;
				setPixelColor(105, THEME);

				DiodeArray[86].EnemyBullet = true;
				setPixelColor(86, THEME);
				setPixelColor(86, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 86;
			break;
		case 8:
			DiodeArray[86].FreeSpace = true;
			DiodeArray[86].EnemyBullet = false;
			setPixelColor(86, THEME);

			DiodeArray[73].FreeSpace = false;
			DiodeArray[73].EnemyBullet = true;
			setPixelColor(73, THEME);
			setPixelColor(73, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 73;
			break;
		case 9:
			DiodeArray[73].FreeSpace = true;
			DiodeArray[73].EnemyBullet = false;
			setPixelColor(73, THEME);

			DiodeArray[54].FreeSpace = false;
			DiodeArray[54].EnemyBullet = true;
			setPixelColor(54, THEME);
			setPixelColor(54, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 54;
			break;
		case 10:
			DiodeArray[54].FreeSpace = true;
			DiodeArray[54].EnemyBullet = false;
			setPixelColor(54, THEME);

			DiodeArray[41].FreeSpace = false;
			DiodeArray[41].EnemyBullet = true;
			setPixelColor(41, THEME);
			setPixelColor(41, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 41;
			break;
		case 11:
			DiodeArray[41].FreeSpace = true;
			DiodeArray[41].EnemyBullet = false;
			setPixelColor(41, THEME);

			DiodeArray[22].FreeSpace = false;
			DiodeArray[22].EnemyBullet = true;
			setPixelColor(22, THEME);
			setPixelColor(22, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 22;
			break;
		case 12:
			DiodeArray[22].FreeSpace = true;
			DiodeArray[22].EnemyBullet = false;
			setPixelColor(22, THEME);

			DiodeArray[9].FreeSpace = false;
			DiodeArray[9].EnemyBullet = true;
			setPixelColor(9, THEME);
			setPixelColor(9, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 9;
			break;
		case 13:
			DiodeArray[9].FreeSpace = true;
			DiodeArray[9].EnemyBullet = false;
			setPixelColor(9, THEME);

			enemyShootFirstDiode_1 = true;
			enemyShootInit_1 = true;
			enemyActivateShoot_1 = false;
			break;
		default:
			break;
		}
		break;
	case 11:
		if (enemyShootInit_1) {
			switch (enemyDiodeStartShootID_1) {
			case 202:
				enemyDiodeShootRoute_1 = 1;

				DiodeArray[181].FreeSpace = false;
				DiodeArray[170].FreeSpace = false;
				DiodeArray[149].FreeSpace = false;
				DiodeArray[138].FreeSpace = false;
				DiodeArray[117].FreeSpace = false;
				DiodeArray[106].FreeSpace = false;
				break;
			case 181:
				enemyDiodeShootRoute_1 = 2;

				DiodeArray[170].FreeSpace = false;
				DiodeArray[149].FreeSpace = false;
				DiodeArray[138].FreeSpace = false;
				DiodeArray[117].FreeSpace = false;
				DiodeArray[106].FreeSpace = false;
				break;
			case 170:
				enemyDiodeShootRoute_1 = 3;

				DiodeArray[149].FreeSpace = false;
				DiodeArray[138].FreeSpace = false;
				DiodeArray[117].FreeSpace = false;
				DiodeArray[106].FreeSpace = false;
				break;
			case 149:
				enemyDiodeShootRoute_1 = 4;

				DiodeArray[138].FreeSpace = false;
				DiodeArray[117].FreeSpace = false;
				DiodeArray[106].FreeSpace = false;
				break;
			case 138:
				enemyDiodeShootRoute_1 = 5;

				DiodeArray[117].FreeSpace = false;
				DiodeArray[106].FreeSpace = false;
				break;
			case 117:
				enemyDiodeShootRoute_1 = 6;

				DiodeArray[106].FreeSpace = false;
				break;
			case 106:
				enemyDiodeShootRoute_1 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_1 = false;
		}
		switch (enemyDiodeShootRoute_1) {
		case 1:
			enemyShootFirstDiode_1 = false;
			DiodeArray[181].EnemyBullet = true;
			setPixelColor(181, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 181;
			break;
		case 2:
			if (enemyShootFirstDiode_1) {
				DiodeArray[170].EnemyBullet = true;
				setPixelColor(170, THEME);
				setPixelColor(170, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[181].FreeSpace = true;
				DiodeArray[181].EnemyBullet = false;
				setPixelColor(181, THEME);

				DiodeArray[170].EnemyBullet = true;
				setPixelColor(170, THEME);
				setPixelColor(170, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 170;
			break;
		case 3:
			if (enemyShootFirstDiode_1) {
				DiodeArray[149].EnemyBullet = true;
				setPixelColor(149, THEME);
				setPixelColor(149, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[170].FreeSpace = true;
				DiodeArray[170].EnemyBullet = false;
				setPixelColor(170, THEME);

				DiodeArray[149].EnemyBullet = true;
				setPixelColor(149, THEME);
				setPixelColor(149, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 149;
			break;
		case 4:
			if (enemyShootFirstDiode_1) {
				DiodeArray[138].EnemyBullet = true;
				setPixelColor(138, THEME);
				setPixelColor(138, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[149].FreeSpace = true;
				DiodeArray[149].EnemyBullet = false;
				setPixelColor(149, THEME);

				DiodeArray[138].EnemyBullet = true;
				setPixelColor(138, THEME);
				setPixelColor(138, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 138;
			break;
		case 5:
			if (enemyShootFirstDiode_1) {
				DiodeArray[117].EnemyBullet = true;
				setPixelColor(117, THEME);
				setPixelColor(117, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[138].FreeSpace = true;
				DiodeArray[138].EnemyBullet = false;
				setPixelColor(138, THEME);

				DiodeArray[117].EnemyBullet = true;
				setPixelColor(117, THEME);
				setPixelColor(117, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 117;
			break;
		case 6:
			if (enemyShootFirstDiode_1) {
				DiodeArray[106].EnemyBullet = true;
				setPixelColor(106, THEME);
				setPixelColor(106, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[117].FreeSpace = true;
				DiodeArray[117].EnemyBullet = false;
				setPixelColor(117, THEME);

				DiodeArray[106].EnemyBullet = true;
				setPixelColor(106, THEME);
				setPixelColor(106, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 106;
			break;
		case 7:
			if (enemyShootFirstDiode_1) {
				DiodeArray[85].EnemyBullet = true;
				setPixelColor(85, THEME);
				setPixelColor(85, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[106].FreeSpace = true;
				DiodeArray[106].EnemyBullet = false;
				setPixelColor(106, THEME);

				DiodeArray[85].EnemyBullet = true;
				setPixelColor(85, THEME);
				setPixelColor(85, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 85;
			break;
		case 8:
			DiodeArray[85].FreeSpace = true;
			DiodeArray[85].EnemyBullet = false;
			setPixelColor(85, THEME);

			DiodeArray[74].FreeSpace = false;
			DiodeArray[74].EnemyBullet = true;
			setPixelColor(74, THEME);
			setPixelColor(74, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 74;
			break;
		case 9:
			DiodeArray[74].FreeSpace = true;
			DiodeArray[74].EnemyBullet = false;
			setPixelColor(74, THEME);

			DiodeArray[53].FreeSpace = false;
			DiodeArray[53].EnemyBullet = true;
			setPixelColor(53, THEME);
			setPixelColor(53, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 53;
			break;
		case 10:
			DiodeArray[53].FreeSpace = true;
			DiodeArray[53].EnemyBullet = false;
			setPixelColor(53, THEME);

			DiodeArray[42].FreeSpace = false;
			DiodeArray[42].EnemyBullet = true;
			setPixelColor(42, THEME);
			setPixelColor(42, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 42;
			break;
		case 11:
			DiodeArray[42].FreeSpace = true;
			DiodeArray[42].EnemyBullet = false;
			setPixelColor(42, THEME);

			DiodeArray[21].FreeSpace = false;
			DiodeArray[21].EnemyBullet = true;
			setPixelColor(21, THEME);
			setPixelColor(21, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 21;
			break;
		case 12:
			DiodeArray[21].FreeSpace = true;
			DiodeArray[21].EnemyBullet = false;
			setPixelColor(21, THEME);

			DiodeArray[10].FreeSpace = false;
			DiodeArray[10].EnemyBullet = true;
			setPixelColor(10, THEME);
			setPixelColor(10, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 10;
			break;
		case 13:
			DiodeArray[10].FreeSpace = true;
			DiodeArray[10].EnemyBullet = false;
			setPixelColor(10, THEME);

			enemyShootFirstDiode_1 = true;
			enemyShootInit_1 = true;
			enemyActivateShoot_1 = false;
			break;
		default:
			break;
		}
		break;
	case 12:
		if (enemyShootInit_1) {
			switch (enemyDiodeStartShootID_1) {
			case 203:
				enemyDiodeShootRoute_1 = 1;

				DiodeArray[180].FreeSpace = false;
				DiodeArray[171].FreeSpace = false;
				DiodeArray[148].FreeSpace = false;
				DiodeArray[139].FreeSpace = false;
				DiodeArray[116].FreeSpace = false;
				DiodeArray[107].FreeSpace = false;
				break;
			case 180:
				enemyDiodeShootRoute_1 = 2;

				DiodeArray[171].FreeSpace = false;
				DiodeArray[148].FreeSpace = false;
				DiodeArray[139].FreeSpace = false;
				DiodeArray[116].FreeSpace = false;
				DiodeArray[107].FreeSpace = false;
				break;
			case 171:
				enemyDiodeShootRoute_1 = 3;

				DiodeArray[148].FreeSpace = false;
				DiodeArray[139].FreeSpace = false;
				DiodeArray[116].FreeSpace = false;
				DiodeArray[107].FreeSpace = false;
				break;
			case 148:
				enemyDiodeShootRoute_1 = 4;

				DiodeArray[139].FreeSpace = false;
				DiodeArray[116].FreeSpace = false;
				DiodeArray[107].FreeSpace = false;
				break;
			case 139:
				enemyDiodeShootRoute_1 = 5;

				DiodeArray[116].FreeSpace = false;
				DiodeArray[107].FreeSpace = false;
				break;
			case 116:
				enemyDiodeShootRoute_1 = 6;

				DiodeArray[107].FreeSpace = false;
				break;
			case 107:
				enemyDiodeShootRoute_1 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_1 = false;
		}
		switch (enemyDiodeShootRoute_1) {
		case 1:
			enemyShootFirstDiode_1 = false;
			DiodeArray[180].EnemyBullet = true;
			setPixelColor(180, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 180;
			break;
		case 2:
			if (enemyShootFirstDiode_1) {
				DiodeArray[171].EnemyBullet = true;
				setPixelColor(171, THEME);
				setPixelColor(171, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[180].FreeSpace = true;
				DiodeArray[180].EnemyBullet = false;
				setPixelColor(180, THEME);

				DiodeArray[171].EnemyBullet = true;
				setPixelColor(171, THEME);
				setPixelColor(171, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 171;
			break;
		case 3:
			if (enemyShootFirstDiode_1) {
				DiodeArray[148].EnemyBullet = true;
				setPixelColor(148, THEME);
				setPixelColor(148, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[171].FreeSpace = true;
				DiodeArray[171].EnemyBullet = false;
				setPixelColor(171, THEME);

				DiodeArray[148].EnemyBullet = true;
				setPixelColor(148, THEME);
				setPixelColor(148, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 148;
			break;
		case 4:
			if (enemyShootFirstDiode_1) {
				DiodeArray[139].EnemyBullet = true;
				setPixelColor(139, THEME);
				setPixelColor(139, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[148].FreeSpace = true;
				DiodeArray[148].EnemyBullet = false;
				setPixelColor(148, THEME);

				DiodeArray[139].EnemyBullet = true;
				setPixelColor(139, THEME);
				setPixelColor(139, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 139;
			break;
		case 5:
			if (enemyShootFirstDiode_1) {
				DiodeArray[116].EnemyBullet = true;
				setPixelColor(116, THEME);
				setPixelColor(116, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[139].FreeSpace = true;
				DiodeArray[139].EnemyBullet = false;
				setPixelColor(139, THEME);

				DiodeArray[116].EnemyBullet = true;
				setPixelColor(116, THEME);
				setPixelColor(116, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 116;
			break;
		case 6:
			if (enemyShootFirstDiode_1) {
				DiodeArray[107].EnemyBullet = true;
				setPixelColor(107, THEME);
				setPixelColor(107, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[116].FreeSpace = true;
				DiodeArray[116].EnemyBullet = false;
				setPixelColor(116, THEME);

				DiodeArray[107].EnemyBullet = true;
				setPixelColor(107, THEME);
				setPixelColor(107, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 107;
			break;
		case 7:
			if (enemyShootFirstDiode_1) {
				DiodeArray[84].EnemyBullet = true;
				setPixelColor(84, THEME);
				setPixelColor(84, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[107].FreeSpace = true;
				DiodeArray[107].EnemyBullet = false;
				setPixelColor(107, THEME);

				DiodeArray[84].EnemyBullet = true;
				setPixelColor(84, THEME);
				setPixelColor(84, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 84;
			break;
		case 8:
			DiodeArray[84].FreeSpace = true;
			DiodeArray[84].EnemyBullet = false;
			setPixelColor(84, THEME);

			DiodeArray[75].FreeSpace = false;
			DiodeArray[75].EnemyBullet = true;
			setPixelColor(75, THEME);
			setPixelColor(75, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 75;
			break;
		case 9:
			DiodeArray[75].FreeSpace = true;
			DiodeArray[75].EnemyBullet = false;
			setPixelColor(75, THEME);

			DiodeArray[52].FreeSpace = false;
			DiodeArray[52].EnemyBullet = true;
			setPixelColor(52, THEME);
			setPixelColor(52, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 52;
			break;
		case 10:
			DiodeArray[52].FreeSpace = true;
			DiodeArray[52].EnemyBullet = false;
			setPixelColor(52, THEME);

			DiodeArray[43].FreeSpace = false;
			DiodeArray[43].EnemyBullet = true;
			setPixelColor(43, THEME);
			setPixelColor(43, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 43;
			break;
		case 11:
			DiodeArray[43].FreeSpace = true;
			DiodeArray[43].EnemyBullet = false;
			setPixelColor(43, THEME);

			DiodeArray[20].FreeSpace = false;
			DiodeArray[20].EnemyBullet = true;
			setPixelColor(20, THEME);
			setPixelColor(20, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 20;
			break;
		case 12:
			DiodeArray[20].FreeSpace = true;
			DiodeArray[20].EnemyBullet = false;
			setPixelColor(20, THEME);

			DiodeArray[11].FreeSpace = false;
			DiodeArray[11].EnemyBullet = true;
			setPixelColor(11, THEME);
			setPixelColor(11, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 11;
			break;
		case 13:
			DiodeArray[11].FreeSpace = true;
			DiodeArray[11].EnemyBullet = false;
			setPixelColor(11, THEME);

			enemyShootFirstDiode_1 = true;
			enemyShootInit_1 = true;
			enemyActivateShoot_1 = false;
			break;
		default:
			break;
		}
		break;
	case 13:
		if (enemyShootInit_1) {
			switch (enemyDiodeStartShootID_1) {
			case 204:
				enemyDiodeShootRoute_1 = 1;

				DiodeArray[179].FreeSpace = false;
				DiodeArray[172].FreeSpace = false;
				DiodeArray[147].FreeSpace = false;
				DiodeArray[140].FreeSpace = false;
				DiodeArray[115].FreeSpace = false;
				DiodeArray[108].FreeSpace = false;
				break;
			case 179:
				enemyDiodeShootRoute_1 = 2;

				DiodeArray[172].FreeSpace = false;
				DiodeArray[147].FreeSpace = false;
				DiodeArray[140].FreeSpace = false;
				DiodeArray[115].FreeSpace = false;
				DiodeArray[108].FreeSpace = false;
				break;
			case 172:
				enemyDiodeShootRoute_1 = 3;

				DiodeArray[147].FreeSpace = false;
				DiodeArray[140].FreeSpace = false;
				DiodeArray[115].FreeSpace = false;
				DiodeArray[108].FreeSpace = false;
				break;
			case 147:
				enemyDiodeShootRoute_1 = 4;

				DiodeArray[140].FreeSpace = false;
				DiodeArray[115].FreeSpace = false;
				DiodeArray[108].FreeSpace = false;
				break;
			case 140:
				enemyDiodeShootRoute_1 = 5;

				DiodeArray[115].FreeSpace = false;
				DiodeArray[108].FreeSpace = false;
				break;
			case 115:
				enemyDiodeShootRoute_1 = 6;

				DiodeArray[108].FreeSpace = false;
				break;
			case 108:
				enemyDiodeShootRoute_1 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_1 = false;
		}
		switch (enemyDiodeShootRoute_1) {
		case 1:
			enemyShootFirstDiode_1 = false;
			DiodeArray[179].EnemyBullet = true;
			setPixelColor(179, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 179;
			break;
		case 2:
			if (enemyShootFirstDiode_1) {
				DiodeArray[172].EnemyBullet = true;
				setPixelColor(172, THEME);
				setPixelColor(172, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[179].FreeSpace = true;
				DiodeArray[179].EnemyBullet = false;
				setPixelColor(179, THEME);

				DiodeArray[172].EnemyBullet = true;
				setPixelColor(172, THEME);
				setPixelColor(172, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 172;
			break;
		case 3:
			if (enemyShootFirstDiode_1) {
				DiodeArray[147].EnemyBullet = true;
				setPixelColor(147, THEME);
				setPixelColor(147, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[172].FreeSpace = true;
				DiodeArray[172].EnemyBullet = false;
				setPixelColor(172, THEME);

				DiodeArray[147].EnemyBullet = true;
				setPixelColor(147, THEME);
				setPixelColor(147, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 147;
			break;
		case 4:
			if (enemyShootFirstDiode_1) {
				DiodeArray[140].EnemyBullet = true;
				setPixelColor(140, THEME);
				setPixelColor(140, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[147].FreeSpace = true;
				DiodeArray[147].EnemyBullet = false;
				setPixelColor(147, THEME);

				DiodeArray[140].EnemyBullet = true;
				setPixelColor(140, THEME);
				setPixelColor(140, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 140;
			break;
		case 5:
			if (enemyShootFirstDiode_1) {
				DiodeArray[115].EnemyBullet = true;
				setPixelColor(115, THEME);
				setPixelColor(115, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[140].FreeSpace = true;
				DiodeArray[140].EnemyBullet = false;
				setPixelColor(140, THEME);

				DiodeArray[115].EnemyBullet = true;
				setPixelColor(115, THEME);
				setPixelColor(115, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 115;
			break;
		case 6:
			if (enemyShootFirstDiode_1) {
				DiodeArray[108].EnemyBullet = true;
				setPixelColor(108, THEME);
				setPixelColor(108, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[115].FreeSpace = true;
				DiodeArray[115].EnemyBullet = false;
				setPixelColor(115, THEME);

				DiodeArray[108].EnemyBullet = true;
				setPixelColor(108, THEME);
				setPixelColor(108, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 108;
			break;
		case 7:
			if (enemyShootFirstDiode_1) {
				DiodeArray[83].EnemyBullet = true;
				setPixelColor(83, THEME);
				setPixelColor(83, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[108].FreeSpace = true;
				DiodeArray[108].EnemyBullet = false;
				setPixelColor(108, THEME);

				DiodeArray[83].EnemyBullet = true;
				setPixelColor(83, THEME);
				setPixelColor(83, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 83;
			break;
		case 8:
			DiodeArray[83].FreeSpace = true;
			DiodeArray[83].EnemyBullet = false;
			setPixelColor(83, THEME);

			DiodeArray[76].FreeSpace = false;
			DiodeArray[76].EnemyBullet = true;
			setPixelColor(76, THEME);
			setPixelColor(76, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 76;
			break;
		case 9:
			DiodeArray[76].FreeSpace = true;
			DiodeArray[76].EnemyBullet = false;
			setPixelColor(76, THEME);

			DiodeArray[51].FreeSpace = false;
			DiodeArray[51].EnemyBullet = true;
			setPixelColor(51, THEME);
			setPixelColor(51, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 51;
			break;
		case 10:
			DiodeArray[51].FreeSpace = true;
			DiodeArray[51].EnemyBullet = false;
			setPixelColor(51, THEME);

			DiodeArray[44].FreeSpace = false;
			DiodeArray[44].EnemyBullet = true;
			setPixelColor(44, THEME);
			setPixelColor(44, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 44;
			break;
		case 11:
			DiodeArray[44].FreeSpace = true;
			DiodeArray[44].EnemyBullet = false;
			setPixelColor(44, THEME);

			DiodeArray[19].FreeSpace = false;
			DiodeArray[19].EnemyBullet = true;
			setPixelColor(19, THEME);
			setPixelColor(19, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 19;
			break;
		case 12:
			DiodeArray[19].FreeSpace = true;
			DiodeArray[19].EnemyBullet = false;
			setPixelColor(19, THEME);

			DiodeArray[12].FreeSpace = false;
			DiodeArray[12].EnemyBullet = true;
			setPixelColor(12, THEME);
			setPixelColor(12, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 12;
			break;
		case 13:
			DiodeArray[12].FreeSpace = true;
			DiodeArray[12].EnemyBullet = false;
			setPixelColor(12, THEME);

			enemyShootFirstDiode_1 = true;
			enemyShootInit_1 = true;
			enemyActivateShoot_1 = false;
			break;
		default:
			break;
		}
		break;
	case 14:
		if (enemyShootInit_1) {
			switch (enemyDiodeStartShootID_1) {
			case 205:
				enemyDiodeShootRoute_1 = 1;

				DiodeArray[178].FreeSpace = false;
				DiodeArray[173].FreeSpace = false;
				DiodeArray[146].FreeSpace = false;
				DiodeArray[141].FreeSpace = false;
				DiodeArray[114].FreeSpace = false;
				DiodeArray[109].FreeSpace = false;
				break;
			case 178:
				enemyDiodeShootRoute_1 = 2;

				DiodeArray[173].FreeSpace = false;
				DiodeArray[146].FreeSpace = false;
				DiodeArray[141].FreeSpace = false;
				DiodeArray[114].FreeSpace = false;
				DiodeArray[109].FreeSpace = false;
				break;
			case 173:
				enemyDiodeShootRoute_1 = 3;

				DiodeArray[146].FreeSpace = false;
				DiodeArray[141].FreeSpace = false;
				DiodeArray[114].FreeSpace = false;
				DiodeArray[109].FreeSpace = false;
				break;
			case 146:
				enemyDiodeShootRoute_1 = 4;

				DiodeArray[141].FreeSpace = false;
				DiodeArray[114].FreeSpace = false;
				DiodeArray[109].FreeSpace = false;
				break;
			case 141:
				enemyDiodeShootRoute_1 = 5;

				DiodeArray[114].FreeSpace = false;
				DiodeArray[109].FreeSpace = false;
				break;
			case 114:
				enemyDiodeShootRoute_1 = 6;

				DiodeArray[109].FreeSpace = false;
				break;
			case 109:
				enemyDiodeShootRoute_1 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_1 = false;
		}
		switch (enemyDiodeShootRoute_1) {
		case 1:
			enemyShootFirstDiode_1 = false;
			DiodeArray[178].EnemyBullet = true;
			setPixelColor(178, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 178;
			break;
		case 2:
			if (enemyShootFirstDiode_1) {
				DiodeArray[173].EnemyBullet = true;
				setPixelColor(173, THEME);
				setPixelColor(173, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[178].FreeSpace = true;
				DiodeArray[178].EnemyBullet = false;
				setPixelColor(178, THEME);

				DiodeArray[173].EnemyBullet = true;
				setPixelColor(173, THEME);
				setPixelColor(173, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 173;
			break;
		case 3:
			if (enemyShootFirstDiode_1) {
				DiodeArray[146].EnemyBullet = true;
				setPixelColor(146, THEME);
				setPixelColor(146, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[173].FreeSpace = true;
				DiodeArray[173].EnemyBullet = false;
				setPixelColor(173, THEME);

				DiodeArray[146].EnemyBullet = true;
				setPixelColor(146, THEME);
				setPixelColor(146, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 146;
			break;
		case 4:
			if (enemyShootFirstDiode_1) {
				DiodeArray[141].EnemyBullet = true;
				setPixelColor(141, THEME);
				setPixelColor(141, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[146].FreeSpace = true;
				DiodeArray[146].EnemyBullet = false;
				setPixelColor(146, THEME);

				DiodeArray[141].EnemyBullet = true;
				setPixelColor(141, THEME);
				setPixelColor(141, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 141;
			break;
		case 5:
			if (enemyShootFirstDiode_1) {
				DiodeArray[114].EnemyBullet = true;
				setPixelColor(114, THEME);
				setPixelColor(114, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[141].FreeSpace = true;
				DiodeArray[141].EnemyBullet = false;
				setPixelColor(141, THEME);

				DiodeArray[114].EnemyBullet = true;
				setPixelColor(114, THEME);
				setPixelColor(114, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 114;
			break;
		case 6:
			if (enemyShootFirstDiode_1) {
				DiodeArray[109].EnemyBullet = true;
				setPixelColor(109, THEME);
				setPixelColor(109, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[114].FreeSpace = true;
				DiodeArray[114].EnemyBullet = false;
				setPixelColor(114, THEME);

				DiodeArray[109].EnemyBullet = true;
				setPixelColor(109, THEME);
				setPixelColor(109, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 109;
			break;
		case 7:
			if (enemyShootFirstDiode_1) {
				DiodeArray[82].EnemyBullet = true;
				setPixelColor(82, THEME);
				setPixelColor(82, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[109].FreeSpace = true;
				DiodeArray[109].EnemyBullet = false;
				setPixelColor(109, THEME);

				DiodeArray[82].EnemyBullet = true;
				setPixelColor(82, THEME);
				setPixelColor(82, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 82;
			break;
		case 8:
			DiodeArray[82].FreeSpace = true;
			DiodeArray[82].EnemyBullet = false;
			setPixelColor(82, THEME);

			DiodeArray[77].FreeSpace = false;
			DiodeArray[77].EnemyBullet = true;
			setPixelColor(77, THEME);
			setPixelColor(77, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 77;
			break;
		case 9:
			DiodeArray[77].FreeSpace = true;
			DiodeArray[77].EnemyBullet = false;
			setPixelColor(77, THEME);

			DiodeArray[50].FreeSpace = false;
			DiodeArray[50].EnemyBullet = true;
			setPixelColor(50, THEME);
			setPixelColor(50, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 50;
			break;
		case 10:
			DiodeArray[50].FreeSpace = true;
			DiodeArray[50].EnemyBullet = false;
			setPixelColor(50, THEME);

			DiodeArray[45].FreeSpace = false;
			DiodeArray[45].EnemyBullet = true;
			setPixelColor(45, THEME);
			setPixelColor(45, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 45;
			break;
		case 11:
			DiodeArray[45].FreeSpace = true;
			DiodeArray[45].EnemyBullet = false;
			setPixelColor(45, THEME);

			DiodeArray[18].FreeSpace = false;
			DiodeArray[18].EnemyBullet = true;
			setPixelColor(18, THEME);
			setPixelColor(18, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 18;
			break;
		case 12:
			DiodeArray[18].FreeSpace = true;
			DiodeArray[18].EnemyBullet = false;
			setPixelColor(18, THEME);

			DiodeArray[13].FreeSpace = false;
			DiodeArray[13].EnemyBullet = true;
			setPixelColor(13, THEME);
			setPixelColor(13, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 13;
			break;
		case 13:
			DiodeArray[13].FreeSpace = true;
			DiodeArray[13].EnemyBullet = false;
			setPixelColor(13, THEME);

			enemyShootFirstDiode_1 = true;
			enemyShootInit_1 = true;
			enemyActivateShoot_1 = false;
			break;
		default:
			break;
		}
		break;
	case 15:
		if (enemyShootInit_1) {
			switch (enemyDiodeStartShootID_1) {
			case 206:
				enemyDiodeShootRoute_1 = 1;

				DiodeArray[177].FreeSpace = false;
				DiodeArray[174].FreeSpace = false;
				DiodeArray[145].FreeSpace = false;
				DiodeArray[142].FreeSpace = false;
				DiodeArray[113].FreeSpace = false;
				DiodeArray[110].FreeSpace = false;
				break;
			case 177:
				enemyDiodeShootRoute_1 = 2;

				DiodeArray[174].FreeSpace = false;
				DiodeArray[145].FreeSpace = false;
				DiodeArray[142].FreeSpace = false;
				DiodeArray[113].FreeSpace = false;
				DiodeArray[110].FreeSpace = false;
				break;
			case 174:
				enemyDiodeShootRoute_1 = 3;

				DiodeArray[145].FreeSpace = false;
				DiodeArray[142].FreeSpace = false;
				DiodeArray[113].FreeSpace = false;
				DiodeArray[110].FreeSpace = false;
				break;
			case 145:
				enemyDiodeShootRoute_1 = 4;

				DiodeArray[142].FreeSpace = false;
				DiodeArray[113].FreeSpace = false;
				DiodeArray[110].FreeSpace = false;
				break;
			case 142:
				enemyDiodeShootRoute_1 = 5;

				DiodeArray[113].FreeSpace = false;
				DiodeArray[110].FreeSpace = false;
				break;
			case 113:
				enemyDiodeShootRoute_1 = 6;

				DiodeArray[110].FreeSpace = false;
				break;
			case 110:
				enemyDiodeShootRoute_1 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_1 = false;
		}
		switch (enemyDiodeShootRoute_1) {
		case 1:
			enemyShootFirstDiode_1 = false;
			DiodeArray[177].EnemyBullet = true;
			setPixelColor(177, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 177;
			break;
		case 2:
			if (enemyShootFirstDiode_1) {
				DiodeArray[174].EnemyBullet = true;
				setPixelColor(174, THEME);
				setPixelColor(174, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[177].FreeSpace = true;
				DiodeArray[177].EnemyBullet = false;
				setPixelColor(177, THEME);

				DiodeArray[174].EnemyBullet = true;
				setPixelColor(174, THEME);
				setPixelColor(174, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 174;
			break;
		case 3:
			if (enemyShootFirstDiode_1) {
				DiodeArray[145].EnemyBullet = true;
				setPixelColor(145, THEME);
				setPixelColor(145, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[174].FreeSpace = true;
				DiodeArray[174].EnemyBullet = false;
				setPixelColor(174, THEME);

				DiodeArray[145].EnemyBullet = true;
				setPixelColor(145, THEME);
				setPixelColor(145, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 145;
			break;
		case 4:
			if (enemyShootFirstDiode_1) {
				DiodeArray[142].EnemyBullet = true;
				setPixelColor(142, THEME);
				setPixelColor(142, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[145].FreeSpace = true;
				DiodeArray[145].EnemyBullet = false;
				setPixelColor(145, THEME);

				DiodeArray[142].EnemyBullet = true;
				setPixelColor(142, THEME);
				setPixelColor(142, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 142;
			break;
		case 5:
			if (enemyShootFirstDiode_1) {
				DiodeArray[113].EnemyBullet = true;
				setPixelColor(113, THEME);
				setPixelColor(113, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[142].FreeSpace = true;
				DiodeArray[142].EnemyBullet = false;
				setPixelColor(142, THEME);

				DiodeArray[113].EnemyBullet = true;
				setPixelColor(113, THEME);
				setPixelColor(113, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 113;
			break;
		case 6:
			if (enemyShootFirstDiode_1) {
				DiodeArray[110].EnemyBullet = true;
				setPixelColor(110, THEME);
				setPixelColor(110, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[113].FreeSpace = true;
				DiodeArray[113].EnemyBullet = false;
				setPixelColor(113, THEME);

				DiodeArray[110].EnemyBullet = true;
				setPixelColor(110, THEME);
				setPixelColor(110, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 110;
			break;
		case 7:
			if (enemyShootFirstDiode_1) {
				DiodeArray[81].EnemyBullet = true;
				setPixelColor(81, THEME);
				setPixelColor(81, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[110].FreeSpace = true;
				DiodeArray[110].EnemyBullet = false;
				setPixelColor(110, THEME);

				DiodeArray[81].EnemyBullet = true;
				setPixelColor(81, THEME);
				setPixelColor(81, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 81;
			break;
		case 8:
			DiodeArray[81].FreeSpace = true;
			DiodeArray[81].EnemyBullet = false;
			setPixelColor(81, THEME);

			DiodeArray[78].FreeSpace = false;
			DiodeArray[78].EnemyBullet = true;
			setPixelColor(78, THEME);
			setPixelColor(78, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 78;
			break;
		case 9:
			DiodeArray[78].FreeSpace = true;
			DiodeArray[78].EnemyBullet = false;
			setPixelColor(78, THEME);

			DiodeArray[49].FreeSpace = false;
			DiodeArray[49].EnemyBullet = true;
			setPixelColor(49, THEME);
			setPixelColor(49, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 49;
			break;
		case 10:
			DiodeArray[49].FreeSpace = true;
			DiodeArray[49].EnemyBullet = false;
			setPixelColor(49, THEME);

			DiodeArray[46].FreeSpace = false;
			DiodeArray[46].EnemyBullet = true;
			setPixelColor(46, THEME);
			setPixelColor(46, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 46;
			break;
		case 11:
			DiodeArray[46].FreeSpace = true;
			DiodeArray[46].EnemyBullet = false;
			setPixelColor(46, THEME);

			DiodeArray[17].FreeSpace = false;
			DiodeArray[17].EnemyBullet = true;
			setPixelColor(17, THEME);
			setPixelColor(17, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 17;
			break;
		case 12:
			DiodeArray[17].FreeSpace = true;
			DiodeArray[17].EnemyBullet = false;
			setPixelColor(17, THEME);

			DiodeArray[14].FreeSpace = false;
			DiodeArray[14].EnemyBullet = true;
			setPixelColor(14, THEME);
			setPixelColor(14, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 14;
			break;
		case 13:
			DiodeArray[14].FreeSpace = true;
			DiodeArray[14].EnemyBullet = false;
			setPixelColor(14, THEME);

			enemyShootFirstDiode_1 = true;
			enemyShootInit_1 = true;
			enemyActivateShoot_1 = false;
			break;
		default:
			break;
		}
		break;
	case 16:
		if (enemyShootInit_1) {
			switch (enemyDiodeStartShootID_1) {
			case 207:
				enemyDiodeShootRoute_1 = 1;

				DiodeArray[176].FreeSpace = false;
				DiodeArray[175].FreeSpace = false;
				DiodeArray[144].FreeSpace = false;
				DiodeArray[143].FreeSpace = false;
				DiodeArray[112].FreeSpace = false;
				DiodeArray[111].FreeSpace = false;
				break;
			case 176:
				enemyDiodeShootRoute_1 = 2;

				DiodeArray[175].FreeSpace = false;
				DiodeArray[144].FreeSpace = false;
				DiodeArray[143].FreeSpace = false;
				DiodeArray[112].FreeSpace = false;
				DiodeArray[111].FreeSpace = false;
				break;
			case 175:
				enemyDiodeShootRoute_1 = 3;

				DiodeArray[144].FreeSpace = false;
				DiodeArray[143].FreeSpace = false;
				DiodeArray[112].FreeSpace = false;
				DiodeArray[111].FreeSpace = false;
				break;
			case 144:
				enemyDiodeShootRoute_1 = 4;

				DiodeArray[143].FreeSpace = false;
				DiodeArray[112].FreeSpace = false;
				DiodeArray[111].FreeSpace = false;
				break;
			case 143:
				enemyDiodeShootRoute_1 = 5;

				DiodeArray[112].FreeSpace = false;
				DiodeArray[111].FreeSpace = false;
				break;
			case 112:
				enemyDiodeShootRoute_1 = 6;

				DiodeArray[111].FreeSpace = false;
				break;
			case 111:
				enemyDiodeShootRoute_1 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_1 = false;
		}
		switch (enemyDiodeShootRoute_1) {
		case 1:
			enemyShootFirstDiode_1 = false;
			DiodeArray[176].EnemyBullet = true;
			setPixelColor(176, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 176;
			break;
		case 2:
			if (enemyShootFirstDiode_1) {
				DiodeArray[175].EnemyBullet = true;
				setPixelColor(175, THEME);
				setPixelColor(175, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[176].FreeSpace = true;
				DiodeArray[176].EnemyBullet = false;
				setPixelColor(176, THEME);

				DiodeArray[175].EnemyBullet = true;
				setPixelColor(175, THEME);
				setPixelColor(175, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 175;
			break;
		case 3:
			if (enemyShootFirstDiode_1) {
				DiodeArray[144].EnemyBullet = true;
				setPixelColor(144, THEME);
				setPixelColor(144, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[175].FreeSpace = true;
				DiodeArray[175].EnemyBullet = false;
				setPixelColor(175, THEME);

				DiodeArray[144].EnemyBullet = true;
				setPixelColor(144, THEME);
				setPixelColor(144, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 144;
			break;
		case 4:
			if (enemyShootFirstDiode_1) {
				DiodeArray[143].EnemyBullet = true;
				setPixelColor(143, THEME);
				setPixelColor(143, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[144].FreeSpace = true;
				DiodeArray[144].EnemyBullet = false;
				setPixelColor(144, THEME);

				DiodeArray[143].EnemyBullet = true;
				setPixelColor(143, THEME);
				setPixelColor(143, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 143;
			break;
		case 5:
			if (enemyShootFirstDiode_1) {
				DiodeArray[112].EnemyBullet = true;
				setPixelColor(112, THEME);
				setPixelColor(112, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[143].FreeSpace = true;
				DiodeArray[143].EnemyBullet = false;
				setPixelColor(143, THEME);

				DiodeArray[112].EnemyBullet = true;
				setPixelColor(112, THEME);
				setPixelColor(112, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 112;
			break;
		case 6:
			if (enemyShootFirstDiode_1) {
				DiodeArray[111].EnemyBullet = true;
				setPixelColor(111, THEME);
				setPixelColor(111, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[112].FreeSpace = true;
				DiodeArray[112].EnemyBullet = false;
				setPixelColor(112, THEME);

				DiodeArray[111].EnemyBullet = true;
				setPixelColor(111, THEME);
				setPixelColor(111, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 111;
			break;
		case 7:
			if (enemyShootFirstDiode_1) {
				DiodeArray[80].EnemyBullet = true;
				setPixelColor(80, THEME);
				setPixelColor(80, ENEMY_BULLET);

				enemyShootFirstDiode_1 = false;
			} else {
				DiodeArray[111].FreeSpace = true;
				DiodeArray[111].EnemyBullet = false;
				setPixelColor(111, THEME);

				DiodeArray[80].EnemyBullet = true;
				setPixelColor(80, THEME);
				setPixelColor(80, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_1 = 80;
			break;
		case 8:
			DiodeArray[80].FreeSpace = true;
			DiodeArray[80].EnemyBullet = false;
			setPixelColor(80, THEME);

			DiodeArray[79].FreeSpace = false;
			DiodeArray[79].EnemyBullet = true;
			setPixelColor(79, THEME);
			setPixelColor(79, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 79;
			break;
		case 9:
			DiodeArray[79].FreeSpace = true;
			DiodeArray[79].EnemyBullet = false;
			setPixelColor(79, THEME);

			DiodeArray[48].FreeSpace = false;
			DiodeArray[48].EnemyBullet = true;
			setPixelColor(48, THEME);
			setPixelColor(48, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 48;
			break;
		case 10:
			DiodeArray[48].FreeSpace = true;
			DiodeArray[48].EnemyBullet = false;
			setPixelColor(48, THEME);

			DiodeArray[47].FreeSpace = false;
			DiodeArray[47].EnemyBullet = true;
			setPixelColor(47, THEME);
			setPixelColor(47, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 47;
			break;
		case 11:
			DiodeArray[47].FreeSpace = true;
			DiodeArray[47].EnemyBullet = false;
			setPixelColor(47, THEME);

			DiodeArray[16].FreeSpace = false;
			DiodeArray[16].EnemyBullet = true;
			setPixelColor(16, THEME);
			setPixelColor(16, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 16;
			break;
		case 12:
			DiodeArray[16].FreeSpace = true;
			DiodeArray[16].EnemyBullet = false;
			setPixelColor(16, THEME);

			DiodeArray[15].FreeSpace = false;
			DiodeArray[15].EnemyBullet = true;
			setPixelColor(15, THEME);
			setPixelColor(15, ENEMY_BULLET);
			enemyCurrentShootDiode_1 = 15;
			break;
		case 13:
			DiodeArray[15].FreeSpace = true;
			DiodeArray[15].EnemyBullet = false;
			setPixelColor(15, THEME);

			enemyShootFirstDiode_1 = true;
			enemyShootInit_1 = true;
			enemyActivateShoot_1 = false;
			break;
		default:
			break;
		}
		break;
	default:
		break;
	}
}

void enemyShooting_2() {


	int bulletLine = getEnemyBulletLine(enemyDiodeStartShootID_2);

	switch (bulletLine) {
	case 1:
		if (enemyShootInit_2) {
			switch (enemyDiodeStartShootID_2) {
			case 192:
				enemyDiodeShootRoute_2 = 1;

				DiodeArray[191].FreeSpace = false;
				DiodeArray[160].FreeSpace = false;
				DiodeArray[159].FreeSpace = false;
				DiodeArray[128].FreeSpace = false;
				DiodeArray[127].FreeSpace = false;
				DiodeArray[96].FreeSpace = false;
				break;
			case 191:
				enemyDiodeShootRoute_2 = 2;

				DiodeArray[160].FreeSpace = false;
				DiodeArray[159].FreeSpace = false;
				DiodeArray[128].FreeSpace = false;
				DiodeArray[127].FreeSpace = false;
				DiodeArray[96].FreeSpace = false;
				break;
			case 160:
				enemyDiodeShootRoute_2 = 3;

				DiodeArray[159].FreeSpace = false;
				DiodeArray[128].FreeSpace = false;
				DiodeArray[127].FreeSpace = false;
				DiodeArray[96].FreeSpace = false;
				break;
			case 159:
				enemyDiodeShootRoute_2 = 4;

				DiodeArray[128].FreeSpace = false;
				DiodeArray[127].FreeSpace = false;
				DiodeArray[96].FreeSpace = false;
				break;
			case 128:
				enemyDiodeShootRoute_2 = 5;

				DiodeArray[127].FreeSpace = false;
				DiodeArray[96].FreeSpace = false;
				break;
			case 127:
				enemyDiodeShootRoute_2 = 6;

				DiodeArray[96].FreeSpace = false;
				break;
			case 96:
				enemyDiodeShootRoute_2 = 7;

				break;
			default:
				break;
			}
			enemyShootInit_2 = false;
		}
		switch (enemyDiodeShootRoute_2) {
		case 1:
			enemyShootFirstDiode_2 = false;
			DiodeArray[191].EnemyBullet = true;
			setPixelColor(191, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 191;
			break;
		case 2:
			if (enemyShootFirstDiode_2) {
				DiodeArray[160].EnemyBullet = true;
				setPixelColor(160, THEME);
				setPixelColor(160, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[191].FreeSpace = true;
				DiodeArray[191].EnemyBullet = false;
				setPixelColor(191, THEME);

				DiodeArray[160].EnemyBullet = true;
				setPixelColor(160, THEME);
				setPixelColor(160, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 160;
			break;
		case 3:
			if (enemyShootFirstDiode_2) {
				DiodeArray[159].EnemyBullet = true;
				setPixelColor(159, THEME);
				setPixelColor(159, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[160].FreeSpace = true;
				DiodeArray[160].EnemyBullet = false;
				setPixelColor(160, THEME);

				DiodeArray[159].EnemyBullet = true;
				setPixelColor(159, THEME);
				setPixelColor(159, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 159;
			break;
		case 4:
			if (enemyShootFirstDiode_2) {
				DiodeArray[128].EnemyBullet = true;
				setPixelColor(128, THEME);
				setPixelColor(128, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[159].FreeSpace = true;
				DiodeArray[159].EnemyBullet = false;
				setPixelColor(159, THEME);

				DiodeArray[128].EnemyBullet = true;
				setPixelColor(128, THEME);
				setPixelColor(128, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 128;
			break;
		case 5:
			if (enemyShootFirstDiode_2) {
				DiodeArray[127].EnemyBullet = true;
				setPixelColor(127, THEME);
				setPixelColor(127, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[128].FreeSpace = true;
				DiodeArray[128].EnemyBullet = false;
				setPixelColor(128, THEME);

				DiodeArray[127].EnemyBullet = true;
				setPixelColor(127, THEME);
				setPixelColor(127, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 127;
			break;
		case 6:
			if (enemyShootFirstDiode_2) {
				DiodeArray[96].EnemyBullet = true;
				setPixelColor(96, THEME);
				setPixelColor(96, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[127].FreeSpace = true;
				DiodeArray[127].EnemyBullet = false;
				setPixelColor(127, THEME);

				DiodeArray[96].EnemyBullet = true;
				setPixelColor(96, THEME);
				setPixelColor(96, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 96;
			break;
		case 7:
			if (enemyShootFirstDiode_2) {
				DiodeArray[95].EnemyBullet = true;
				setPixelColor(95, THEME);
				setPixelColor(95, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[96].FreeSpace = true;
				DiodeArray[96].EnemyBullet = false;
				setPixelColor(96, THEME);

				DiodeArray[95].EnemyBullet = true;
				setPixelColor(95, THEME);
				setPixelColor(95, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 95;
			break;
		case 8:
			DiodeArray[95].FreeSpace = true;
			DiodeArray[95].EnemyBullet = false;
			setPixelColor(95, THEME);

			DiodeArray[64].FreeSpace = false;
			DiodeArray[64].EnemyBullet = true;
			setPixelColor(64, THEME);
			setPixelColor(64, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 64;
			break;
		case 9:
			DiodeArray[64].FreeSpace = true;
			DiodeArray[64].EnemyBullet = false;
			setPixelColor(64, THEME);

			DiodeArray[63].FreeSpace = false;
			DiodeArray[63].EnemyBullet = true;
			setPixelColor(63, THEME);
			setPixelColor(63, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 63;
			break;
		case 10:
			DiodeArray[63].FreeSpace = true;
			DiodeArray[63].EnemyBullet = false;
			setPixelColor(63, THEME);

			DiodeArray[32].FreeSpace = false;
			DiodeArray[32].EnemyBullet = true;
			setPixelColor(32, THEME);
			setPixelColor(32, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 32;
			break;
		case 11:
			DiodeArray[32].FreeSpace = true;
			DiodeArray[32].EnemyBullet = false;
			setPixelColor(32, THEME);

			DiodeArray[31].FreeSpace = false;
			DiodeArray[31].EnemyBullet = true;
			setPixelColor(31, THEME);
			setPixelColor(31, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 31;
			break;
		case 12:
			DiodeArray[31].FreeSpace = true;
			DiodeArray[31].EnemyBullet = false;
			setPixelColor(31, THEME);

			DiodeArray[0].FreeSpace = false;
			DiodeArray[0].EnemyBullet = true;
			setPixelColor(0, THEME);
			setPixelColor(0, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 0;
			break;
		case 13:
			DiodeArray[0].FreeSpace = true;
			DiodeArray[0].EnemyBullet = false;
			setPixelColor(0, THEME);

			enemyShootFirstDiode_2 = true;
			enemyShootInit_2 = true;
			enemyActivateShoot_2 = false;
			break;
		default:
			break;
		}
		break;
	case 2:
		if (enemyShootInit_2) {
			switch (enemyDiodeStartShootID_2) {
			case 193:
				enemyDiodeShootRoute_2 = 1;

				DiodeArray[190].FreeSpace = false;
				DiodeArray[161].FreeSpace = false;
				DiodeArray[158].FreeSpace = false;
				DiodeArray[129].FreeSpace = false;
				DiodeArray[126].FreeSpace = false;
				DiodeArray[97].FreeSpace = false;
				break;
			case 190:
				enemyDiodeShootRoute_2 = 2;

				DiodeArray[161].FreeSpace = false;
				DiodeArray[158].FreeSpace = false;
				DiodeArray[129].FreeSpace = false;
				DiodeArray[126].FreeSpace = false;
				DiodeArray[97].FreeSpace = false;
				break;
			case 161:
				enemyDiodeShootRoute_2 = 3;

				DiodeArray[158].FreeSpace = false;
				DiodeArray[129].FreeSpace = false;
				DiodeArray[126].FreeSpace = false;
				DiodeArray[97].FreeSpace = false;
				break;
			case 158:
				enemyDiodeShootRoute_2 = 4;

				DiodeArray[129].FreeSpace = false;
				DiodeArray[126].FreeSpace = false;
				DiodeArray[97].FreeSpace = false;
				break;
			case 129:
				enemyDiodeShootRoute_2 = 5;

				DiodeArray[126].FreeSpace = false;
				DiodeArray[97].FreeSpace = false;
				break;
			case 126:
				enemyDiodeShootRoute_2 = 6;

				DiodeArray[97].FreeSpace = false;
				break;
			case 97:
				enemyDiodeShootRoute_2 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_2 = false;
		}
		switch (enemyDiodeShootRoute_2) {
		case 1:
			enemyShootFirstDiode_2 = false;
			DiodeArray[190].EnemyBullet = true;
			setPixelColor(190, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 190;
			break;
		case 2:
			if (enemyShootFirstDiode_2) {
				DiodeArray[161].EnemyBullet = true;
				setPixelColor(161, THEME);
				setPixelColor(161, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[190].FreeSpace = true;
				DiodeArray[190].EnemyBullet = false;
				setPixelColor(190, THEME);

				DiodeArray[161].EnemyBullet = true;
				setPixelColor(161, THEME);
				setPixelColor(161, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 161;
			break;
		case 3:
			if (enemyShootFirstDiode_2) {
				DiodeArray[158].EnemyBullet = true;
				setPixelColor(158, THEME);
				setPixelColor(158, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[161].FreeSpace = true;
				DiodeArray[161].EnemyBullet = false;
				setPixelColor(161, THEME);

				DiodeArray[158].EnemyBullet = true;
				setPixelColor(158, THEME);
				setPixelColor(158, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 158;
			break;
		case 4:
			if (enemyShootFirstDiode_2) {
				DiodeArray[129].EnemyBullet = true;
				setPixelColor(129, THEME);
				setPixelColor(129, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[158].FreeSpace = true;
				DiodeArray[158].EnemyBullet = false;
				setPixelColor(158, THEME);

				DiodeArray[129].EnemyBullet = true;
				setPixelColor(129, THEME);
				setPixelColor(129, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 129;
			break;
		case 5:
			if (enemyShootFirstDiode_2) {
				DiodeArray[126].EnemyBullet = true;
				setPixelColor(126, THEME);
				setPixelColor(126, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[129].FreeSpace = true;
				DiodeArray[129].EnemyBullet = false;
				setPixelColor(129, THEME);

				DiodeArray[126].EnemyBullet = true;
				setPixelColor(126, THEME);
				setPixelColor(126, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 126;
			break;
		case 6:
			if (enemyShootFirstDiode_2) {
				DiodeArray[97].EnemyBullet = true;
				setPixelColor(97, THEME);
				setPixelColor(97, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[126].FreeSpace = true;
				DiodeArray[126].EnemyBullet = false;
				setPixelColor(126, THEME);

				DiodeArray[97].EnemyBullet = true;
				setPixelColor(97, THEME);
				setPixelColor(97, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 97;
			break;
		case 7:
			if (enemyShootFirstDiode_2) {
				DiodeArray[94].EnemyBullet = true;
				setPixelColor(94, THEME);
				setPixelColor(94, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[97].FreeSpace = true;
				DiodeArray[97].EnemyBullet = false;
				setPixelColor(97, THEME);

				DiodeArray[94].EnemyBullet = true;
				setPixelColor(94, THEME);
				setPixelColor(94, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 94;
			break;
		case 8:
			DiodeArray[94].FreeSpace = true;
			DiodeArray[94].EnemyBullet = false;
			setPixelColor(94, THEME);

			DiodeArray[65].FreeSpace = false;
			DiodeArray[65].EnemyBullet = true;
			setPixelColor(65, THEME);
			setPixelColor(65, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 65;
			break;
		case 9:
			DiodeArray[65].FreeSpace = true;
			DiodeArray[65].EnemyBullet = false;
			setPixelColor(65, THEME);

			DiodeArray[62].FreeSpace = false;
			DiodeArray[62].EnemyBullet = true;
			setPixelColor(62, THEME);
			setPixelColor(62, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 62;
			break;
		case 10:
			DiodeArray[62].FreeSpace = true;
			DiodeArray[62].EnemyBullet = false;
			setPixelColor(62, THEME);

			DiodeArray[33].FreeSpace = false;
			DiodeArray[33].EnemyBullet = true;
			setPixelColor(33, THEME);
			setPixelColor(33, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 33;
			break;
		case 11:
			DiodeArray[33].FreeSpace = true;
			DiodeArray[33].EnemyBullet = false;
			setPixelColor(33, THEME);

			DiodeArray[30].FreeSpace = false;
			DiodeArray[30].EnemyBullet = true;
			setPixelColor(30, THEME);
			setPixelColor(30, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 30;
			break;
		case 12:
			DiodeArray[30].FreeSpace = true;
			DiodeArray[30].EnemyBullet = false;
			setPixelColor(30, THEME);

			DiodeArray[1].FreeSpace = false;
			DiodeArray[1].EnemyBullet = true;
			setPixelColor(1, THEME);
			setPixelColor(1, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 1;
			break;
		case 13:
			DiodeArray[1].FreeSpace = true;
			DiodeArray[1].EnemyBullet = false;
			setPixelColor(1, THEME);

			enemyShootFirstDiode_2 = true;
			enemyShootInit_2 = true;
			enemyActivateShoot_2 = false;
			break;
		default:
			break;
		}
		break;
	case 3:
		if (enemyShootInit_2) {
			switch (enemyDiodeStartShootID_2) {
			case 194:
				enemyDiodeShootRoute_2 = 1;

				DiodeArray[189].FreeSpace = false;
				DiodeArray[162].FreeSpace = false;
				DiodeArray[157].FreeSpace = false;
				DiodeArray[130].FreeSpace = false;
				DiodeArray[125].FreeSpace = false;
				DiodeArray[98].FreeSpace = false;
				break;
			case 189:
				enemyDiodeShootRoute_2 = 2;

				DiodeArray[162].FreeSpace = false;
				DiodeArray[157].FreeSpace = false;
				DiodeArray[130].FreeSpace = false;
				DiodeArray[125].FreeSpace = false;
				DiodeArray[98].FreeSpace = false;
				break;
			case 162:
				enemyDiodeShootRoute_2 = 3;

				DiodeArray[157].FreeSpace = false;
				DiodeArray[130].FreeSpace = false;
				DiodeArray[125].FreeSpace = false;
				DiodeArray[98].FreeSpace = false;
				break;
			case 157:
				enemyDiodeShootRoute_2 = 4;

				DiodeArray[130].FreeSpace = false;
				DiodeArray[125].FreeSpace = false;
				DiodeArray[98].FreeSpace = false;
				break;
			case 130:
				enemyDiodeShootRoute_2 = 5;

				DiodeArray[125].FreeSpace = false;
				DiodeArray[98].FreeSpace = false;
				break;
			case 125:
				enemyDiodeShootRoute_2 = 6;

				DiodeArray[98].FreeSpace = false;
				break;
			case 98:
				enemyDiodeShootRoute_2 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_2 = false;
		}
		switch (enemyDiodeShootRoute_2) {
		case 1:
			enemyShootFirstDiode_2 = false;
			DiodeArray[189].EnemyBullet = true;
			setPixelColor(189, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 189;
			break;
		case 2:
			if (enemyShootFirstDiode_2) {
				DiodeArray[162].EnemyBullet = true;
				setPixelColor(162, THEME);
				setPixelColor(162, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[189].FreeSpace = true;
				DiodeArray[189].EnemyBullet = false;
				setPixelColor(189, THEME);

				DiodeArray[162].EnemyBullet = true;
				setPixelColor(162, THEME);
				setPixelColor(162, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 162;
			break;
		case 3:
			if (enemyShootFirstDiode_2) {
				DiodeArray[157].EnemyBullet = true;
				setPixelColor(157, THEME);
				setPixelColor(157, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[162].FreeSpace = true;
				DiodeArray[162].EnemyBullet = false;
				setPixelColor(162, THEME);

				DiodeArray[157].EnemyBullet = true;
				setPixelColor(157, THEME);
				setPixelColor(157, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 157;
			break;
		case 4:
			if (enemyShootFirstDiode_2) {
				DiodeArray[130].EnemyBullet = true;
				setPixelColor(130, THEME);
				setPixelColor(130, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[157].FreeSpace = true;
				DiodeArray[157].EnemyBullet = false;
				setPixelColor(157, THEME);

				DiodeArray[130].EnemyBullet = true;
				setPixelColor(130, THEME);
				setPixelColor(130, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 130;
			break;
		case 5:
			if (enemyShootFirstDiode_2) {
				DiodeArray[125].EnemyBullet = true;
				setPixelColor(125, THEME);
				setPixelColor(125, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[130].FreeSpace = true;
				DiodeArray[130].EnemyBullet = false;
				setPixelColor(130, THEME);

				DiodeArray[125].EnemyBullet = true;
				setPixelColor(125, THEME);
				setPixelColor(125, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 125;
			break;
		case 6:
			if (enemyShootFirstDiode_2) {
				DiodeArray[98].EnemyBullet = true;
				setPixelColor(98, THEME);
				setPixelColor(98, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[125].FreeSpace = true;
				DiodeArray[125].EnemyBullet = false;
				setPixelColor(125, THEME);

				DiodeArray[98].EnemyBullet = true;
				setPixelColor(98, THEME);
				setPixelColor(98, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 98;
			break;
		case 7:
			if (enemyShootFirstDiode_2) {
				DiodeArray[93].EnemyBullet = true;
				setPixelColor(93, THEME);
				setPixelColor(93, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[98].FreeSpace = true;
				DiodeArray[98].EnemyBullet = false;
				setPixelColor(98, THEME);

				DiodeArray[93].EnemyBullet = true;
				setPixelColor(93, THEME);
				setPixelColor(93, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 93;
			break;
		case 8:
			DiodeArray[93].FreeSpace = true;
			DiodeArray[93].EnemyBullet = false;
			setPixelColor(93, THEME);

			DiodeArray[66].FreeSpace = false;
			DiodeArray[66].EnemyBullet = true;
			setPixelColor(66, THEME);
			setPixelColor(66, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 66;
			break;
		case 9:
			DiodeArray[66].FreeSpace = true;
			DiodeArray[66].EnemyBullet = false;
			setPixelColor(66, THEME);

			DiodeArray[61].FreeSpace = false;
			DiodeArray[61].EnemyBullet = true;
			setPixelColor(61, THEME);
			setPixelColor(61, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 61;
			break;
		case 10:
			DiodeArray[61].FreeSpace = true;
			DiodeArray[61].EnemyBullet = false;
			setPixelColor(61, THEME);

			DiodeArray[34].FreeSpace = false;
			DiodeArray[34].EnemyBullet = true;
			setPixelColor(34, THEME);
			setPixelColor(34, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 34;
			break;
		case 11:
			DiodeArray[34].FreeSpace = true;
			DiodeArray[34].EnemyBullet = false;
			setPixelColor(34, THEME);

			DiodeArray[29].FreeSpace = false;
			DiodeArray[29].EnemyBullet = true;
			setPixelColor(29, THEME);
			setPixelColor(29, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 29;
			break;
		case 12:
			DiodeArray[29].FreeSpace = true;
			DiodeArray[29].EnemyBullet = false;
			setPixelColor(29, THEME);

			DiodeArray[2].FreeSpace = false;
			DiodeArray[2].EnemyBullet = true;
			setPixelColor(2, THEME);
			setPixelColor(2, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 2;
			break;
		case 13:
			DiodeArray[2].FreeSpace = true;
			DiodeArray[2].EnemyBullet = false;
			setPixelColor(2, THEME);

			enemyShootFirstDiode_2 = true;
			enemyShootInit_2 = true;
			enemyActivateShoot_2 = false;
			break;
		default:
			break;
		}
		break;
	case 4:
		if (enemyShootInit_2) {
			switch (enemyDiodeStartShootID_2) {
			case 195:
				enemyDiodeShootRoute_2 = 1;

				DiodeArray[188].FreeSpace = false;
				DiodeArray[163].FreeSpace = false;
				DiodeArray[156].FreeSpace = false;
				DiodeArray[131].FreeSpace = false;
				DiodeArray[124].FreeSpace = false;
				DiodeArray[99].FreeSpace = false;
				break;
			case 188:
				enemyDiodeShootRoute_2 = 2;

				DiodeArray[163].FreeSpace = false;
				DiodeArray[156].FreeSpace = false;
				DiodeArray[131].FreeSpace = false;
				DiodeArray[124].FreeSpace = false;
				DiodeArray[99].FreeSpace = false;
				break;
			case 163:
				enemyDiodeShootRoute_2 = 3;

				DiodeArray[156].FreeSpace = false;
				DiodeArray[131].FreeSpace = false;
				DiodeArray[124].FreeSpace = false;
				DiodeArray[99].FreeSpace = false;
				break;
			case 156:
				enemyDiodeShootRoute_2 = 4;

				DiodeArray[131].FreeSpace = false;
				DiodeArray[124].FreeSpace = false;
				DiodeArray[99].FreeSpace = false;
				break;
			case 131:
				enemyDiodeShootRoute_2 = 5;

				DiodeArray[124].FreeSpace = false;
				DiodeArray[99].FreeSpace = false;
				break;
			case 124:
				enemyDiodeShootRoute_2 = 6;

				DiodeArray[99].FreeSpace = false;
				break;
			case 99:
				enemyDiodeShootRoute_2 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_2 = false;
		}
		switch (enemyDiodeShootRoute_2) {
		case 1:
			enemyShootFirstDiode_2 = false;
			DiodeArray[188].EnemyBullet = true;
			setPixelColor(188, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 188;
			break;
		case 2:
			if (enemyShootFirstDiode_2) {
				DiodeArray[163].EnemyBullet = true;
				setPixelColor(163, THEME);
				setPixelColor(163, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[188].FreeSpace = true;
				DiodeArray[188].EnemyBullet = false;
				setPixelColor(188, THEME);

				DiodeArray[163].EnemyBullet = true;
				setPixelColor(163, THEME);
				setPixelColor(163, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 163;
			break;
		case 3:
			if (enemyShootFirstDiode_2) {
				DiodeArray[156].EnemyBullet = true;
				setPixelColor(156, THEME);
				setPixelColor(156, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[163].FreeSpace = true;
				DiodeArray[163].EnemyBullet = false;
				setPixelColor(163, THEME);

				DiodeArray[156].EnemyBullet = true;
				setPixelColor(156, THEME);
				setPixelColor(156, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 156;
			break;
		case 4:
			if (enemyShootFirstDiode_2) {
				DiodeArray[131].EnemyBullet = true;
				setPixelColor(131, THEME);
				setPixelColor(131, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[156].FreeSpace = true;
				DiodeArray[156].EnemyBullet = false;
				setPixelColor(156, THEME);

				DiodeArray[131].EnemyBullet = true;
				setPixelColor(131, THEME);
				setPixelColor(131, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 131;
			break;
		case 5:
			if (enemyShootFirstDiode_2) {
				DiodeArray[124].EnemyBullet = true;
				setPixelColor(124, THEME);
				setPixelColor(124, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[131].FreeSpace = true;
				DiodeArray[131].EnemyBullet = false;
				setPixelColor(131, THEME);

				DiodeArray[124].EnemyBullet = true;
				setPixelColor(124, THEME);
				setPixelColor(124, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 124;
			break;
		case 6:
			if (enemyShootFirstDiode_2) {
				DiodeArray[99].EnemyBullet = true;
				setPixelColor(99, THEME);
				setPixelColor(99, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[124].FreeSpace = true;
				DiodeArray[124].EnemyBullet = false;
				setPixelColor(124, THEME);

				DiodeArray[99].EnemyBullet = true;
				setPixelColor(99, THEME);
				setPixelColor(99, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 99;
			break;
		case 7:
			if (enemyShootFirstDiode_2) {
				DiodeArray[92].EnemyBullet = true;
				setPixelColor(92, THEME);
				setPixelColor(92, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[99].FreeSpace = true;
				DiodeArray[99].EnemyBullet = false;
				setPixelColor(99, THEME);

				DiodeArray[92].EnemyBullet = true;
				setPixelColor(92, THEME);
				setPixelColor(92, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 92;
			break;
		case 8:
			DiodeArray[92].FreeSpace = true;
			DiodeArray[92].EnemyBullet = false;
			setPixelColor(92, THEME);

			DiodeArray[67].FreeSpace = false;
			DiodeArray[67].EnemyBullet = true;
			setPixelColor(67, THEME);
			setPixelColor(67, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 67;
			break;
		case 9:
			DiodeArray[67].FreeSpace = true;
			DiodeArray[67].EnemyBullet = false;
			setPixelColor(67, THEME);

			DiodeArray[60].FreeSpace = false;
			DiodeArray[60].EnemyBullet = true;
			setPixelColor(60, THEME);
			setPixelColor(60, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 60;
			break;
		case 10:
			DiodeArray[60].FreeSpace = true;
			DiodeArray[60].EnemyBullet = false;
			setPixelColor(60, THEME);

			DiodeArray[35].FreeSpace = false;
			DiodeArray[35].EnemyBullet = true;
			setPixelColor(35, THEME);
			setPixelColor(35, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 35;
			break;
		case 11:
			DiodeArray[35].FreeSpace = true;
			DiodeArray[35].EnemyBullet = false;
			setPixelColor(35, THEME);

			DiodeArray[28].FreeSpace = false;
			DiodeArray[28].EnemyBullet = true;
			setPixelColor(28, THEME);
			setPixelColor(28, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 28;
			break;
		case 12:
			DiodeArray[28].FreeSpace = true;
			DiodeArray[28].EnemyBullet = false;
			setPixelColor(28, THEME);

			DiodeArray[3].FreeSpace = false;
			DiodeArray[3].EnemyBullet = true;
			setPixelColor(3, THEME);
			setPixelColor(3, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 3;
			break;
		case 13:
			DiodeArray[3].FreeSpace = true;
			DiodeArray[3].EnemyBullet = false;
			setPixelColor(3, THEME);

			enemyShootFirstDiode_2 = true;
			enemyShootInit_2 = true;
			enemyActivateShoot_2 = false;
			break;
		default:
			break;
		}
		break;
	case 5:
		if (enemyShootInit_2) {
			switch (enemyDiodeStartShootID_2) {
			case 196:
				enemyDiodeShootRoute_2 = 1;

				DiodeArray[187].FreeSpace = false;
				DiodeArray[164].FreeSpace = false;
				DiodeArray[155].FreeSpace = false;
				DiodeArray[132].FreeSpace = false;
				DiodeArray[123].FreeSpace = false;
				DiodeArray[100].FreeSpace = false;
				break;
			case 187:
				enemyDiodeShootRoute_2 = 2;

				DiodeArray[164].FreeSpace = false;
				DiodeArray[155].FreeSpace = false;
				DiodeArray[132].FreeSpace = false;
				DiodeArray[123].FreeSpace = false;
				DiodeArray[100].FreeSpace = false;
				break;
			case 164:
				enemyDiodeShootRoute_2 = 3;

				DiodeArray[155].FreeSpace = false;
				DiodeArray[132].FreeSpace = false;
				DiodeArray[123].FreeSpace = false;
				DiodeArray[100].FreeSpace = false;
				break;
			case 155:
				enemyDiodeShootRoute_2 = 4;

				DiodeArray[132].FreeSpace = false;
				DiodeArray[123].FreeSpace = false;
				DiodeArray[100].FreeSpace = false;
				break;
			case 132:
				enemyDiodeShootRoute_2 = 5;

				DiodeArray[123].FreeSpace = false;
				DiodeArray[100].FreeSpace = false;
				break;
			case 123:
				enemyDiodeShootRoute_2 = 6;

				DiodeArray[100].FreeSpace = false;
				break;
			case 100:
				enemyDiodeShootRoute_2 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_2 = false;
		}
		switch (enemyDiodeShootRoute_2) {
		case 1:
			enemyShootFirstDiode_2 = false;
			DiodeArray[187].EnemyBullet = true;
			setPixelColor(187, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 187;
			break;
		case 2:
			if (enemyShootFirstDiode_2) {
				DiodeArray[164].EnemyBullet = true;
				setPixelColor(164, THEME);
				setPixelColor(164, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[187].FreeSpace = true;
				DiodeArray[187].EnemyBullet = false;
				setPixelColor(187, THEME);

				DiodeArray[164].EnemyBullet = true;
				setPixelColor(164, THEME);
				setPixelColor(164, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 164;
			break;
		case 3:
			if (enemyShootFirstDiode_2) {
				DiodeArray[155].EnemyBullet = true;
				setPixelColor(155, THEME);
				setPixelColor(155, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[164].FreeSpace = true;
				DiodeArray[164].EnemyBullet = false;
				setPixelColor(164, THEME);

				DiodeArray[155].EnemyBullet = true;
				setPixelColor(155, THEME);
				setPixelColor(155, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 155;
			break;
		case 4:
			if (enemyShootFirstDiode_2) {
				DiodeArray[132].EnemyBullet = true;
				setPixelColor(132, THEME);
				setPixelColor(132, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[155].FreeSpace = true;
				DiodeArray[155].EnemyBullet = false;
				setPixelColor(155, THEME);

				DiodeArray[132].EnemyBullet = true;
				setPixelColor(132, THEME);
				setPixelColor(132, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 132;
			break;
		case 5:
			if (enemyShootFirstDiode_2) {
				DiodeArray[123].EnemyBullet = true;
				setPixelColor(123, THEME);
				setPixelColor(123, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[132].FreeSpace = true;
				DiodeArray[132].EnemyBullet = false;
				setPixelColor(132, THEME);

				DiodeArray[123].EnemyBullet = true;
				setPixelColor(123, THEME);
				setPixelColor(123, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 123;
			break;
		case 6:
			if (enemyShootFirstDiode_2) {
				DiodeArray[100].EnemyBullet = true;
				setPixelColor(100, THEME);
				setPixelColor(100, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[123].FreeSpace = true;
				DiodeArray[123].EnemyBullet = false;
				setPixelColor(123, THEME);

				DiodeArray[100].EnemyBullet = true;
				setPixelColor(100, THEME);
				setPixelColor(100, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 100;
			break;
		case 7:
			if (enemyShootFirstDiode_2) {
				DiodeArray[91].EnemyBullet = true;
				setPixelColor(91, THEME);
				setPixelColor(91, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[100].FreeSpace = true;
				DiodeArray[100].EnemyBullet = false;
				setPixelColor(100, THEME);

				DiodeArray[91].EnemyBullet = true;
				setPixelColor(91, THEME);
				setPixelColor(91, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 91;
			break;
		case 8:
			DiodeArray[91].FreeSpace = true;
			DiodeArray[91].EnemyBullet = false;
			setPixelColor(91, THEME);

			DiodeArray[68].FreeSpace = false;
			DiodeArray[68].EnemyBullet = true;
			setPixelColor(68, THEME);
			setPixelColor(68, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 68;
			break;
		case 9:
			DiodeArray[68].FreeSpace = true;
			DiodeArray[68].EnemyBullet = false;
			setPixelColor(68, THEME);

			DiodeArray[59].FreeSpace = false;
			DiodeArray[59].EnemyBullet = true;
			setPixelColor(59, THEME);
			setPixelColor(59, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 59;
			break;
		case 10:
			DiodeArray[59].FreeSpace = true;
			DiodeArray[59].EnemyBullet = false;
			setPixelColor(59, THEME);

			DiodeArray[36].FreeSpace = false;
			DiodeArray[36].EnemyBullet = true;
			setPixelColor(36, THEME);
			setPixelColor(36, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 36;
			break;
		case 11:
			DiodeArray[36].FreeSpace = true;
			DiodeArray[36].EnemyBullet = false;
			setPixelColor(36, THEME);

			DiodeArray[27].FreeSpace = false;
			DiodeArray[27].EnemyBullet = true;
			setPixelColor(27, THEME);
			setPixelColor(27, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 27;
			break;
		case 12:
			DiodeArray[27].FreeSpace = true;
			DiodeArray[27].EnemyBullet = false;
			setPixelColor(27, THEME);

			DiodeArray[4].FreeSpace = false;
			DiodeArray[4].EnemyBullet = true;
			setPixelColor(4, THEME);
			setPixelColor(4, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 4;
			break;
		case 13:
			DiodeArray[4].FreeSpace = true;
			DiodeArray[4].EnemyBullet = false;
			setPixelColor(4, THEME);

			enemyShootFirstDiode_2 = true;
			enemyShootInit_2 = true;
			enemyActivateShoot_2 = false;
			break;
		default:
			break;
		}
		break;
	case 6:
		if (enemyShootInit_2) {
			switch (enemyDiodeStartShootID_2) {
			case 197:
				enemyDiodeShootRoute_2 = 1;

				DiodeArray[186].FreeSpace = false;
				DiodeArray[165].FreeSpace = false;
				DiodeArray[154].FreeSpace = false;
				DiodeArray[133].FreeSpace = false;
				DiodeArray[122].FreeSpace = false;
				DiodeArray[101].FreeSpace = false;
				break;
			case 186:
				enemyDiodeShootRoute_2 = 2;

				DiodeArray[165].FreeSpace = false;
				DiodeArray[154].FreeSpace = false;
				DiodeArray[133].FreeSpace = false;
				DiodeArray[122].FreeSpace = false;
				DiodeArray[101].FreeSpace = false;
				break;
			case 165:
				enemyDiodeShootRoute_2 = 3;

				DiodeArray[154].FreeSpace = false;
				DiodeArray[133].FreeSpace = false;
				DiodeArray[122].FreeSpace = false;
				DiodeArray[101].FreeSpace = false;
				break;
			case 154:
				enemyDiodeShootRoute_2 = 4;

				DiodeArray[133].FreeSpace = false;
				DiodeArray[122].FreeSpace = false;
				DiodeArray[101].FreeSpace = false;
				break;
			case 133:
				enemyDiodeShootRoute_2 = 5;

				DiodeArray[122].FreeSpace = false;
				DiodeArray[101].FreeSpace = false;
				break;
			case 122:
				enemyDiodeShootRoute_2 = 6;

				DiodeArray[101].FreeSpace = false;
				break;
			case 101:
				enemyDiodeShootRoute_2 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_2 = false;
		}
		switch (enemyDiodeShootRoute_2) {
		case 1:
			enemyShootFirstDiode_2 = false;
			DiodeArray[186].EnemyBullet = true;
			setPixelColor(186, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 186;
			break;
		case 2:
			if (enemyShootFirstDiode_2) {
				DiodeArray[165].EnemyBullet = true;
				setPixelColor(165, THEME);
				setPixelColor(165, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[186].FreeSpace = true;
				DiodeArray[186].EnemyBullet = false;
				setPixelColor(186, THEME);

				DiodeArray[165].EnemyBullet = true;
				setPixelColor(165, THEME);
				setPixelColor(165, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 165;
			break;
		case 3:
			if (enemyShootFirstDiode_2) {
				DiodeArray[154].EnemyBullet = true;
				setPixelColor(154, THEME);
				setPixelColor(154, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[165].FreeSpace = true;
				DiodeArray[165].EnemyBullet = false;
				setPixelColor(165, THEME);

				DiodeArray[154].EnemyBullet = true;
				setPixelColor(154, THEME);
				setPixelColor(154, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 154;
			break;
		case 4:
			if (enemyShootFirstDiode_2) {
				DiodeArray[133].EnemyBullet = true;
				setPixelColor(133, THEME);
				setPixelColor(133, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[154].FreeSpace = true;
				DiodeArray[154].EnemyBullet = false;
				setPixelColor(154, THEME);

				DiodeArray[133].EnemyBullet = true;
				setPixelColor(133, THEME);
				setPixelColor(133, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 133;
			break;
		case 5:
			if (enemyShootFirstDiode_2) {
				DiodeArray[122].EnemyBullet = true;
				setPixelColor(122, THEME);
				setPixelColor(122, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[133].FreeSpace = true;
				DiodeArray[133].EnemyBullet = false;
				setPixelColor(133, THEME);

				DiodeArray[122].EnemyBullet = true;
				setPixelColor(122, THEME);
				setPixelColor(122, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 122;
			break;
		case 6:
			if (enemyShootFirstDiode_2) {
				DiodeArray[101].EnemyBullet = true;
				setPixelColor(101, THEME);
				setPixelColor(101, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[122].FreeSpace = true;
				DiodeArray[122].EnemyBullet = false;
				setPixelColor(122, THEME);

				DiodeArray[101].EnemyBullet = true;
				setPixelColor(101, THEME);
				setPixelColor(101, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 101;
			break;
		case 7:
			if (enemyShootFirstDiode_2) {
				DiodeArray[90].EnemyBullet = true;
				setPixelColor(90, THEME);
				setPixelColor(90, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[101].FreeSpace = true;
				DiodeArray[101].EnemyBullet = false;
				setPixelColor(101, THEME);

				DiodeArray[90].EnemyBullet = true;
				setPixelColor(90, THEME);
				setPixelColor(90, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 90;
			break;
		case 8:
			DiodeArray[90].FreeSpace = true;
			DiodeArray[90].EnemyBullet = false;
			setPixelColor(90, THEME);

			DiodeArray[69].FreeSpace = false;
			DiodeArray[69].EnemyBullet = true;
			setPixelColor(69, THEME);
			setPixelColor(69, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 69;
			break;
		case 9:
			DiodeArray[69].FreeSpace = true;
			DiodeArray[69].EnemyBullet = false;
			setPixelColor(69, THEME);

			DiodeArray[58].FreeSpace = false;
			DiodeArray[58].EnemyBullet = true;
			setPixelColor(58, THEME);
			setPixelColor(58, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 58;
			break;
		case 10:
			DiodeArray[58].FreeSpace = true;
			DiodeArray[58].EnemyBullet = false;
			setPixelColor(58, THEME);

			DiodeArray[37].FreeSpace = false;
			DiodeArray[37].EnemyBullet = true;
			setPixelColor(37, THEME);
			setPixelColor(37, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 37;
			break;
		case 11:
			DiodeArray[37].FreeSpace = true;
			DiodeArray[37].EnemyBullet = false;
			setPixelColor(37, THEME);

			DiodeArray[26].FreeSpace = false;
			DiodeArray[26].EnemyBullet = true;
			setPixelColor(26, THEME);
			setPixelColor(26, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 26;
			break;
		case 12:
			DiodeArray[26].FreeSpace = true;
			DiodeArray[26].EnemyBullet = false;
			setPixelColor(26, THEME);

			DiodeArray[5].FreeSpace = false;
			DiodeArray[5].EnemyBullet = true;
			setPixelColor(5, THEME);
			setPixelColor(5, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 5;
			break;
		case 13:
			DiodeArray[5].FreeSpace = true;
			DiodeArray[5].EnemyBullet = false;
			setPixelColor(5, THEME);

			enemyShootFirstDiode_2 = true;
			enemyShootInit_2 = true;
			enemyActivateShoot_2 = false;
			break;
		default:
			break;
		}
		break;
	case 7:
		if (enemyShootInit_2) {
			switch (enemyDiodeStartShootID_2) {
			case 198:
				enemyDiodeShootRoute_2 = 1;

				DiodeArray[185].FreeSpace = false;
				DiodeArray[166].FreeSpace = false;
				DiodeArray[153].FreeSpace = false;
				DiodeArray[134].FreeSpace = false;
				DiodeArray[121].FreeSpace = false;
				DiodeArray[102].FreeSpace = false;
				break;
			case 185:
				enemyDiodeShootRoute_2 = 2;

				DiodeArray[166].FreeSpace = false;
				DiodeArray[153].FreeSpace = false;
				DiodeArray[134].FreeSpace = false;
				DiodeArray[121].FreeSpace = false;
				DiodeArray[102].FreeSpace = false;
				break;
			case 166:
				enemyDiodeShootRoute_2 = 3;

				DiodeArray[153].FreeSpace = false;
				DiodeArray[134].FreeSpace = false;
				DiodeArray[121].FreeSpace = false;
				DiodeArray[102].FreeSpace = false;
				break;
			case 153:
				enemyDiodeShootRoute_2 = 4;

				DiodeArray[134].FreeSpace = false;
				DiodeArray[121].FreeSpace = false;
				DiodeArray[102].FreeSpace = false;
				break;
			case 134:
				enemyDiodeShootRoute_2 = 5;

				DiodeArray[121].FreeSpace = false;
				DiodeArray[102].FreeSpace = false;
				break;
			case 121:
				enemyDiodeShootRoute_2 = 6;

				DiodeArray[102].FreeSpace = false;
				break;
			case 102:
				enemyDiodeShootRoute_2 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_2 = false;
		}
		switch (enemyDiodeShootRoute_2) {
		case 1:
			enemyShootFirstDiode_2 = false;
			DiodeArray[185].EnemyBullet = true;
			setPixelColor(185, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 185;
			break;
		case 2:
			if (enemyShootFirstDiode_2) {
				DiodeArray[166].EnemyBullet = true;
				setPixelColor(166, THEME);
				setPixelColor(166, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[185].FreeSpace = true;
				DiodeArray[185].EnemyBullet = false;
				setPixelColor(185, THEME);

				DiodeArray[166].EnemyBullet = true;
				setPixelColor(166, THEME);
				setPixelColor(166, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 166;
			break;
		case 3:
			if (enemyShootFirstDiode_2) {
				DiodeArray[153].EnemyBullet = true;
				setPixelColor(153, THEME);
				setPixelColor(153, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[166].FreeSpace = true;
				DiodeArray[166].EnemyBullet = false;
				setPixelColor(166, THEME);

				DiodeArray[153].EnemyBullet = true;
				setPixelColor(153, THEME);
				setPixelColor(153, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 153;
			break;
		case 4:
			if (enemyShootFirstDiode_2) {
				DiodeArray[134].EnemyBullet = true;
				setPixelColor(134, THEME);
				setPixelColor(134, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[153].FreeSpace = true;
				DiodeArray[153].EnemyBullet = false;
				setPixelColor(153, THEME);

				DiodeArray[134].EnemyBullet = true;
				setPixelColor(134, THEME);
				setPixelColor(134, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 134;
			break;
		case 5:
			if (enemyShootFirstDiode_2) {
				DiodeArray[121].EnemyBullet = true;
				setPixelColor(121, THEME);
				setPixelColor(121, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[134].FreeSpace = true;
				DiodeArray[134].EnemyBullet = false;
				setPixelColor(134, THEME);

				DiodeArray[121].EnemyBullet = true;
				setPixelColor(121, THEME);
				setPixelColor(121, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 121;
			break;
		case 6:
			if (enemyShootFirstDiode_2) {
				DiodeArray[102].EnemyBullet = true;
				setPixelColor(102, THEME);
				setPixelColor(102, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[121].FreeSpace = true;
				DiodeArray[121].EnemyBullet = false;
				setPixelColor(121, THEME);

				DiodeArray[102].EnemyBullet = true;
				setPixelColor(102, THEME);
				setPixelColor(102, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 102;
			break;
		case 7:
			if (enemyShootFirstDiode_2) {
				DiodeArray[89].EnemyBullet = true;
				setPixelColor(89, THEME);
				setPixelColor(89, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[102].FreeSpace = true;
				DiodeArray[102].EnemyBullet = false;
				setPixelColor(102, THEME);

				DiodeArray[89].EnemyBullet = true;
				setPixelColor(89, THEME);
				setPixelColor(89, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 89;
			break;
		case 8:
			DiodeArray[89].FreeSpace = true;
			DiodeArray[89].EnemyBullet = false;
			setPixelColor(89, THEME);

			DiodeArray[70].FreeSpace = false;
			DiodeArray[70].EnemyBullet = true;
			setPixelColor(70, THEME);
			setPixelColor(70, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 70;
			break;
		case 9:
			DiodeArray[70].FreeSpace = true;
			DiodeArray[70].EnemyBullet = false;
			setPixelColor(70, THEME);

			DiodeArray[57].FreeSpace = false;
			DiodeArray[57].EnemyBullet = true;
			setPixelColor(57, THEME);
			setPixelColor(57, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 57;
			break;
		case 10:
			DiodeArray[57].FreeSpace = true;
			DiodeArray[57].EnemyBullet = false;
			setPixelColor(57, THEME);

			DiodeArray[38].FreeSpace = false;
			DiodeArray[38].EnemyBullet = true;
			setPixelColor(38, THEME);
			setPixelColor(38, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 38;
			break;
		case 11:
			DiodeArray[38].FreeSpace = true;
			DiodeArray[38].EnemyBullet = false;
			setPixelColor(38, THEME);

			DiodeArray[25].FreeSpace = false;
			DiodeArray[25].EnemyBullet = true;
			setPixelColor(25, THEME);
			setPixelColor(25, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 25;
			break;
		case 12:
			DiodeArray[25].FreeSpace = true;
			DiodeArray[25].EnemyBullet = false;
			setPixelColor(25, THEME);

			DiodeArray[6].FreeSpace = false;
			DiodeArray[6].EnemyBullet = true;
			setPixelColor(6, THEME);
			setPixelColor(6, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 6;
			break;
		case 13:
			DiodeArray[6].FreeSpace = true;
			DiodeArray[6].EnemyBullet = false;
			setPixelColor(6, THEME);

			enemyShootFirstDiode_2 = true;
			enemyShootInit_2 = true;
			enemyActivateShoot_2 = false;
			break;
		default:
			break;
		}
		break;
	case 8:
		if (enemyShootInit_2) {
			switch (enemyDiodeStartShootID_2) {
			case 199:
				enemyDiodeShootRoute_2 = 1;

				DiodeArray[184].FreeSpace = false;
				DiodeArray[167].FreeSpace = false;
				DiodeArray[152].FreeSpace = false;
				DiodeArray[135].FreeSpace = false;
				DiodeArray[120].FreeSpace = false;
				DiodeArray[103].FreeSpace = false;
				break;
			case 184:
				enemyDiodeShootRoute_2 = 2;

				DiodeArray[167].FreeSpace = false;
				DiodeArray[152].FreeSpace = false;
				DiodeArray[135].FreeSpace = false;
				DiodeArray[120].FreeSpace = false;
				DiodeArray[103].FreeSpace = false;
				break;
			case 167:
				enemyDiodeShootRoute_2 = 3;

				DiodeArray[152].FreeSpace = false;
				DiodeArray[135].FreeSpace = false;
				DiodeArray[120].FreeSpace = false;
				DiodeArray[103].FreeSpace = false;
				break;
			case 152:
				enemyDiodeShootRoute_2 = 4;

				DiodeArray[135].FreeSpace = false;
				DiodeArray[120].FreeSpace = false;
				DiodeArray[103].FreeSpace = false;
				break;
			case 135:
				enemyDiodeShootRoute_2 = 5;

				DiodeArray[120].FreeSpace = false;
				DiodeArray[103].FreeSpace = false;
				break;
			case 120:
				enemyDiodeShootRoute_2 = 6;

				DiodeArray[103].FreeSpace = false;
				break;
			case 103:
				enemyDiodeShootRoute_2 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_2 = false;
		}
		switch (enemyDiodeShootRoute_2) {
		case 1:
			enemyShootFirstDiode_2 = false;
			DiodeArray[184].EnemyBullet = true;
			setPixelColor(184, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 184;
			break;
		case 2:
			if (enemyShootFirstDiode_2) {
				DiodeArray[167].EnemyBullet = true;
				setPixelColor(167, THEME);
				setPixelColor(167, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[184].FreeSpace = true;
				DiodeArray[184].EnemyBullet = false;
				setPixelColor(184, THEME);

				DiodeArray[167].EnemyBullet = true;
				setPixelColor(167, THEME);
				setPixelColor(167, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 167;
			break;
		case 3:
			if (enemyShootFirstDiode_2) {
				DiodeArray[152].EnemyBullet = true;
				setPixelColor(152, THEME);
				setPixelColor(152, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[167].FreeSpace = true;
				DiodeArray[167].EnemyBullet = false;
				setPixelColor(167, THEME);

				DiodeArray[152].EnemyBullet = true;
				setPixelColor(152, THEME);
				setPixelColor(152, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 152;
			break;
		case 4:
			if (enemyShootFirstDiode_2) {
				DiodeArray[135].EnemyBullet = true;
				setPixelColor(135, THEME);
				setPixelColor(135, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[152].FreeSpace = true;
				DiodeArray[152].EnemyBullet = false;
				setPixelColor(152, THEME);

				DiodeArray[135].EnemyBullet = true;
				setPixelColor(135, THEME);
				setPixelColor(135, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 135;
			break;
		case 5:
			if (enemyShootFirstDiode_2) {
				DiodeArray[120].EnemyBullet = true;
				setPixelColor(120, THEME);
				setPixelColor(120, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[135].FreeSpace = true;
				DiodeArray[135].EnemyBullet = false;
				setPixelColor(135, THEME);

				DiodeArray[120].EnemyBullet = true;
				setPixelColor(120, THEME);
				setPixelColor(120, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 120;
			break;
		case 6:
			if (enemyShootFirstDiode_2) {
				DiodeArray[103].EnemyBullet = true;
				setPixelColor(103, THEME);
				setPixelColor(103, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[120].FreeSpace = true;
				DiodeArray[120].EnemyBullet = false;
				setPixelColor(120, THEME);

				DiodeArray[103].EnemyBullet = true;
				setPixelColor(103, THEME);
				setPixelColor(103, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 103;
			break;
		case 7:
			if (enemyShootFirstDiode_2) {
				DiodeArray[88].EnemyBullet = true;
				setPixelColor(88, THEME);
				setPixelColor(88, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[103].FreeSpace = true;
				DiodeArray[103].EnemyBullet = false;
				setPixelColor(103, THEME);

				DiodeArray[88].EnemyBullet = true;
				setPixelColor(88, THEME);
				setPixelColor(88, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 88;
			break;
		case 8:
			DiodeArray[88].FreeSpace = true;
			DiodeArray[88].EnemyBullet = false;
			setPixelColor(88, THEME);

			DiodeArray[71].FreeSpace = false;
			DiodeArray[71].EnemyBullet = true;
			setPixelColor(71, THEME);
			setPixelColor(71, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 71;
			break;
		case 9:
			DiodeArray[71].FreeSpace = true;
			DiodeArray[71].EnemyBullet = false;
			setPixelColor(71, THEME);

			DiodeArray[56].FreeSpace = false;
			DiodeArray[56].EnemyBullet = true;
			setPixelColor(56, THEME);
			setPixelColor(56, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 56;
			break;
		case 10:
			DiodeArray[56].FreeSpace = true;
			DiodeArray[56].EnemyBullet = false;
			setPixelColor(56, THEME);

			DiodeArray[39].FreeSpace = false;
			DiodeArray[39].EnemyBullet = true;
			setPixelColor(39, THEME);
			setPixelColor(39, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 39;
			break;
		case 11:
			DiodeArray[39].FreeSpace = true;
			DiodeArray[39].EnemyBullet = false;
			setPixelColor(39, THEME);

			DiodeArray[24].FreeSpace = false;
			DiodeArray[24].EnemyBullet = true;
			setPixelColor(24, THEME);
			setPixelColor(24, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 24;
			break;
		case 12:
			DiodeArray[24].FreeSpace = true;
			DiodeArray[24].EnemyBullet = false;
			setPixelColor(24, THEME);

			DiodeArray[7].FreeSpace = false;
			DiodeArray[7].EnemyBullet = true;
			setPixelColor(7, THEME);
			setPixelColor(7, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 7;
			break;
		case 13:
			DiodeArray[7].FreeSpace = true;
			DiodeArray[7].EnemyBullet = false;
			setPixelColor(7, THEME);

			enemyShootFirstDiode_2 = true;
			enemyShootInit_2 = true;
			enemyActivateShoot_2 = false;
			break;
		default:
			break;
		}
		break;
	case 9:
		if (enemyShootInit_2) {
			switch (enemyDiodeStartShootID_2) {
			case 200:
				enemyDiodeShootRoute_2 = 1;

				DiodeArray[183].FreeSpace = false;
				DiodeArray[168].FreeSpace = false;
				DiodeArray[151].FreeSpace = false;
				DiodeArray[136].FreeSpace = false;
				DiodeArray[119].FreeSpace = false;
				DiodeArray[104].FreeSpace = false;
				break;
			case 183:
				enemyDiodeShootRoute_2 = 2;

				DiodeArray[168].FreeSpace = false;
				DiodeArray[151].FreeSpace = false;
				DiodeArray[136].FreeSpace = false;
				DiodeArray[119].FreeSpace = false;
				DiodeArray[104].FreeSpace = false;
				break;
			case 168:
				enemyDiodeShootRoute_2 = 3;

				DiodeArray[151].FreeSpace = false;
				DiodeArray[136].FreeSpace = false;
				DiodeArray[119].FreeSpace = false;
				DiodeArray[104].FreeSpace = false;
				break;
			case 151:
				enemyDiodeShootRoute_2 = 4;

				DiodeArray[136].FreeSpace = false;
				DiodeArray[119].FreeSpace = false;
				DiodeArray[104].FreeSpace = false;
				break;
			case 136:
				enemyDiodeShootRoute_2 = 5;

				DiodeArray[119].FreeSpace = false;
				DiodeArray[104].FreeSpace = false;
				break;
			case 119:
				enemyDiodeShootRoute_2 = 6;

				DiodeArray[104].FreeSpace = false;
				break;
			case 104:
				enemyDiodeShootRoute_2 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_2 = false;
		}
		switch (enemyDiodeShootRoute_2) {
		case 1:
			enemyShootFirstDiode_2 = false;
			DiodeArray[183].EnemyBullet = true;
			setPixelColor(183, ENEMY_BULLET);
			break;
		case 2:
			if (enemyShootFirstDiode_2) {
				DiodeArray[168].EnemyBullet = true;
				setPixelColor(168, THEME);
				setPixelColor(168, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[183].FreeSpace = true;
				DiodeArray[183].EnemyBullet = false;
				setPixelColor(183, THEME);

				DiodeArray[168].EnemyBullet = true;
				setPixelColor(168, THEME);
				setPixelColor(168, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 168;
			break;
		case 3:
			if (enemyShootFirstDiode_2) {
				DiodeArray[151].EnemyBullet = true;
				setPixelColor(151, THEME);
				setPixelColor(151, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[168].FreeSpace = true;
				DiodeArray[168].EnemyBullet = false;
				setPixelColor(168, THEME);

				DiodeArray[151].EnemyBullet = true;
				setPixelColor(151, THEME);
				setPixelColor(151, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 151;
			break;
		case 4:
			if (enemyShootFirstDiode_2) {
				DiodeArray[136].EnemyBullet = true;
				setPixelColor(136, THEME);
				setPixelColor(136, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[151].FreeSpace = true;
				DiodeArray[151].EnemyBullet = false;
				setPixelColor(151, THEME);

				DiodeArray[136].EnemyBullet = true;
				setPixelColor(136, THEME);
				setPixelColor(136, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 136;
			break;
		case 5:
			if (enemyShootFirstDiode_2) {
				DiodeArray[119].EnemyBullet = true;
				setPixelColor(119, THEME);
				setPixelColor(119, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[136].FreeSpace = true;
				DiodeArray[136].EnemyBullet = false;
				setPixelColor(136, THEME);

				DiodeArray[119].EnemyBullet = true;
				setPixelColor(119, THEME);
				setPixelColor(119, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 119;
			break;
		case 6:
			if (enemyShootFirstDiode_2) {
				DiodeArray[104].EnemyBullet = true;
				setPixelColor(104, THEME);
				setPixelColor(104, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[119].FreeSpace = true;
				DiodeArray[119].EnemyBullet = false;
				setPixelColor(119, THEME);

				DiodeArray[104].EnemyBullet = true;
				setPixelColor(104, THEME);
				setPixelColor(104, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 104;
			break;
		case 7:
			if (enemyShootFirstDiode_2) {
				DiodeArray[87].EnemyBullet = true;
				setPixelColor(87, THEME);
				setPixelColor(87, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[104].FreeSpace = true;
				DiodeArray[104].EnemyBullet = false;
				setPixelColor(104, THEME);

				DiodeArray[87].EnemyBullet = true;
				setPixelColor(87, THEME);
				setPixelColor(87, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 87;
			break;
		case 8:
			DiodeArray[87].FreeSpace = true;
			DiodeArray[87].EnemyBullet = false;
			setPixelColor(87, THEME);

			DiodeArray[72].FreeSpace = false;
			DiodeArray[72].EnemyBullet = true;
			setPixelColor(72, THEME);
			setPixelColor(72, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 72;
			break;
		case 9:
			DiodeArray[72].FreeSpace = true;
			DiodeArray[72].EnemyBullet = false;
			setPixelColor(72, THEME);

			DiodeArray[55].FreeSpace = false;
			DiodeArray[55].EnemyBullet = true;
			setPixelColor(55, THEME);
			setPixelColor(55, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 55;
			break;
		case 10:
			DiodeArray[55].FreeSpace = true;
			DiodeArray[55].EnemyBullet = false;
			setPixelColor(55, THEME);

			DiodeArray[40].FreeSpace = false;
			DiodeArray[40].EnemyBullet = true;
			setPixelColor(40, THEME);
			setPixelColor(40, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 40;
			break;
		case 11:
			DiodeArray[40].FreeSpace = true;
			DiodeArray[40].EnemyBullet = false;
			setPixelColor(40, THEME);

			DiodeArray[23].FreeSpace = false;
			DiodeArray[23].EnemyBullet = true;
			setPixelColor(23, THEME);
			setPixelColor(23, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 23;
			break;
		case 12:
			DiodeArray[23].FreeSpace = true;
			DiodeArray[23].EnemyBullet = false;
			setPixelColor(23, THEME);

			DiodeArray[8].FreeSpace = false;
			DiodeArray[8].EnemyBullet = true;
			setPixelColor(8, THEME);
			setPixelColor(8, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 8;
			break;
		case 13:
			DiodeArray[8].FreeSpace = true;
			DiodeArray[8].EnemyBullet = false;
			setPixelColor(8, THEME);

			enemyShootFirstDiode_2 = true;
			enemyShootInit_2 = true;
			enemyActivateShoot_2 = false;
			break;
		default:
			break;
		}
		break;
	case 10:
		if (enemyShootInit_2) {
			switch (enemyDiodeStartShootID_2) {
			case 201:
				enemyDiodeShootRoute_2 = 1;

				DiodeArray[182].FreeSpace = false;
				DiodeArray[169].FreeSpace = false;
				DiodeArray[150].FreeSpace = false;
				DiodeArray[137].FreeSpace = false;
				DiodeArray[118].FreeSpace = false;
				DiodeArray[105].FreeSpace = false;
				break;
			case 182:
				enemyDiodeShootRoute_2 = 2;

				DiodeArray[169].FreeSpace = false;
				DiodeArray[150].FreeSpace = false;
				DiodeArray[137].FreeSpace = false;
				DiodeArray[118].FreeSpace = false;
				DiodeArray[105].FreeSpace = false;
				break;
			case 169:
				enemyDiodeShootRoute_2 = 3;

				DiodeArray[150].FreeSpace = false;
				DiodeArray[137].FreeSpace = false;
				DiodeArray[118].FreeSpace = false;
				DiodeArray[105].FreeSpace = false;
				break;
			case 150:
				enemyDiodeShootRoute_2 = 4;

				DiodeArray[137].FreeSpace = false;
				DiodeArray[118].FreeSpace = false;
				DiodeArray[105].FreeSpace = false;
				break;
			case 137:
				enemyDiodeShootRoute_2 = 5;

				DiodeArray[118].FreeSpace = false;
				DiodeArray[105].FreeSpace = false;
				break;
			case 118:
				enemyDiodeShootRoute_2 = 6;

				DiodeArray[105].FreeSpace = false;
				break;
			case 105:
				enemyDiodeShootRoute_2 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_2 = false;
		}
		switch (enemyDiodeShootRoute_2) {
		case 1:
			enemyShootFirstDiode_2 = false;
			DiodeArray[182].EnemyBullet = true;
			setPixelColor(182, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 182;
			break;
		case 2:
			if (enemyShootFirstDiode_2) {
				DiodeArray[169].EnemyBullet = true;
				setPixelColor(169, THEME);
				setPixelColor(169, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[182].FreeSpace = true;
				DiodeArray[182].EnemyBullet = false;
				setPixelColor(182, THEME);

				DiodeArray[169].EnemyBullet = true;
				setPixelColor(169, THEME);
				setPixelColor(169, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 169;
			break;
		case 3:
			if (enemyShootFirstDiode_2) {
				DiodeArray[150].EnemyBullet = true;
				setPixelColor(150, THEME);
				setPixelColor(150, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[169].FreeSpace = true;
				DiodeArray[169].EnemyBullet = false;
				setPixelColor(169, THEME);

				DiodeArray[150].EnemyBullet = true;
				setPixelColor(150, THEME);
				setPixelColor(150, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 150;
			break;
		case 4:
			if (enemyShootFirstDiode_2) {
				DiodeArray[137].EnemyBullet = true;
				setPixelColor(137, THEME);
				setPixelColor(137, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[150].FreeSpace = true;
				DiodeArray[150].EnemyBullet = false;
				setPixelColor(150, THEME);

				DiodeArray[137].EnemyBullet = true;
				setPixelColor(137, THEME);
				setPixelColor(137, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 137;
			break;
		case 5:
			if (enemyShootFirstDiode_2) {
				DiodeArray[118].EnemyBullet = true;
				setPixelColor(118, THEME);
				setPixelColor(118, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[137].FreeSpace = true;
				DiodeArray[137].EnemyBullet = false;
				setPixelColor(137, THEME);

				DiodeArray[118].EnemyBullet = true;
				setPixelColor(118, THEME);
				setPixelColor(118, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 118;
			break;
		case 6:
			if (enemyShootFirstDiode_2) {
				DiodeArray[105].EnemyBullet = true;
				setPixelColor(105, THEME);
				setPixelColor(105, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[118].FreeSpace = true;
				DiodeArray[118].EnemyBullet = false;
				setPixelColor(118, THEME);

				DiodeArray[105].EnemyBullet = true;
				setPixelColor(105, THEME);
				setPixelColor(105, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 105;
			break;
		case 7:
			if (enemyShootFirstDiode_2) {
				DiodeArray[86].EnemyBullet = true;
				setPixelColor(86, THEME);
				setPixelColor(86, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[105].FreeSpace = true;
				DiodeArray[105].EnemyBullet = false;
				setPixelColor(105, THEME);

				DiodeArray[86].EnemyBullet = true;
				setPixelColor(86, THEME);
				setPixelColor(86, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 86;
			break;
		case 8:
			DiodeArray[86].FreeSpace = true;
			DiodeArray[86].EnemyBullet = false;
			setPixelColor(86, THEME);

			DiodeArray[73].FreeSpace = false;
			DiodeArray[73].EnemyBullet = true;
			setPixelColor(73, THEME);
			setPixelColor(73, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 73;
			break;
		case 9:
			DiodeArray[73].FreeSpace = true;
			DiodeArray[73].EnemyBullet = false;
			setPixelColor(73, THEME);

			DiodeArray[54].FreeSpace = false;
			DiodeArray[54].EnemyBullet = true;
			setPixelColor(54, THEME);
			setPixelColor(54, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 54;
			break;
		case 10:
			DiodeArray[54].FreeSpace = true;
			DiodeArray[54].EnemyBullet = false;
			setPixelColor(54, THEME);

			DiodeArray[41].FreeSpace = false;
			DiodeArray[41].EnemyBullet = true;
			setPixelColor(41, THEME);
			setPixelColor(41, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 41;
			break;
		case 11:
			DiodeArray[41].FreeSpace = true;
			DiodeArray[41].EnemyBullet = false;
			setPixelColor(41, THEME);

			DiodeArray[22].FreeSpace = false;
			DiodeArray[22].EnemyBullet = true;
			setPixelColor(22, THEME);
			setPixelColor(22, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 22;
			break;
		case 12:
			DiodeArray[22].FreeSpace = true;
			DiodeArray[22].EnemyBullet = false;
			setPixelColor(22, THEME);

			DiodeArray[9].FreeSpace = false;
			DiodeArray[9].EnemyBullet = true;
			setPixelColor(9, THEME);
			setPixelColor(9, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 9;
			break;
		case 13:
			DiodeArray[9].FreeSpace = true;
			DiodeArray[9].EnemyBullet = false;
			setPixelColor(9, THEME);

			enemyShootFirstDiode_2 = true;
			enemyShootInit_2 = true;
			enemyActivateShoot_2 = false;
			break;
		default:
			break;
		}
		break;
	case 11:
		if (enemyShootInit_2) {
			switch (enemyDiodeStartShootID_2) {
			case 202:
				enemyDiodeShootRoute_2 = 1;

				DiodeArray[181].FreeSpace = false;
				DiodeArray[170].FreeSpace = false;
				DiodeArray[149].FreeSpace = false;
				DiodeArray[138].FreeSpace = false;
				DiodeArray[117].FreeSpace = false;
				DiodeArray[106].FreeSpace = false;
				break;
			case 181:
				enemyDiodeShootRoute_2 = 2;

				DiodeArray[170].FreeSpace = false;
				DiodeArray[149].FreeSpace = false;
				DiodeArray[138].FreeSpace = false;
				DiodeArray[117].FreeSpace = false;
				DiodeArray[106].FreeSpace = false;
				break;
			case 170:
				enemyDiodeShootRoute_2 = 3;

				DiodeArray[149].FreeSpace = false;
				DiodeArray[138].FreeSpace = false;
				DiodeArray[117].FreeSpace = false;
				DiodeArray[106].FreeSpace = false;
				break;
			case 149:
				enemyDiodeShootRoute_2 = 4;

				DiodeArray[138].FreeSpace = false;
				DiodeArray[117].FreeSpace = false;
				DiodeArray[106].FreeSpace = false;
				break;
			case 138:
				enemyDiodeShootRoute_2 = 5;

				DiodeArray[117].FreeSpace = false;
				DiodeArray[106].FreeSpace = false;
				break;
			case 117:
				enemyDiodeShootRoute_2 = 6;

				DiodeArray[106].FreeSpace = false;
				break;
			case 106:
				enemyDiodeShootRoute_2 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_2 = false;
		}
		switch (enemyDiodeShootRoute_2) {
		case 1:
			enemyShootFirstDiode_2 = false;
			DiodeArray[181].EnemyBullet = true;
			setPixelColor(181, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 181;
			break;
		case 2:
			if (enemyShootFirstDiode_2) {
				DiodeArray[170].EnemyBullet = true;
				setPixelColor(170, THEME);
				setPixelColor(170, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[181].FreeSpace = true;
				DiodeArray[181].EnemyBullet = false;
				setPixelColor(181, THEME);

				DiodeArray[170].EnemyBullet = true;
				setPixelColor(170, THEME);
				setPixelColor(170, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 170;
			break;
		case 3:
			if (enemyShootFirstDiode_2) {
				DiodeArray[149].EnemyBullet = true;
				setPixelColor(149, THEME);
				setPixelColor(149, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[170].FreeSpace = true;
				DiodeArray[170].EnemyBullet = false;
				setPixelColor(170, THEME);

				DiodeArray[149].EnemyBullet = true;
				setPixelColor(149, THEME);
				setPixelColor(149, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 149;
			break;
		case 4:
			if (enemyShootFirstDiode_2) {
				DiodeArray[138].EnemyBullet = true;
				setPixelColor(138, THEME);
				setPixelColor(138, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[149].FreeSpace = true;
				DiodeArray[149].EnemyBullet = false;
				setPixelColor(149, THEME);

				DiodeArray[138].EnemyBullet = true;
				setPixelColor(138, THEME);
				setPixelColor(138, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 138;
			break;
		case 5:
			if (enemyShootFirstDiode_2) {
				DiodeArray[117].EnemyBullet = true;
				setPixelColor(117, THEME);
				setPixelColor(117, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[138].FreeSpace = true;
				DiodeArray[138].EnemyBullet = false;
				setPixelColor(138, THEME);

				DiodeArray[117].EnemyBullet = true;
				setPixelColor(117, THEME);
				setPixelColor(117, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 117;
			break;
		case 6:
			if (enemyShootFirstDiode_2) {
				DiodeArray[106].EnemyBullet = true;
				setPixelColor(106, THEME);
				setPixelColor(106, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[117].FreeSpace = true;
				DiodeArray[117].EnemyBullet = false;
				setPixelColor(117, THEME);

				DiodeArray[106].EnemyBullet = true;
				setPixelColor(106, THEME);
				setPixelColor(106, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 106;
			break;
		case 7:
			if (enemyShootFirstDiode_2) {
				DiodeArray[85].EnemyBullet = true;
				setPixelColor(85, THEME);
				setPixelColor(85, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[106].FreeSpace = true;
				DiodeArray[106].EnemyBullet = false;
				setPixelColor(106, THEME);

				DiodeArray[85].EnemyBullet = true;
				setPixelColor(85, THEME);
				setPixelColor(85, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 85;
			break;
		case 8:
			DiodeArray[85].FreeSpace = true;
			DiodeArray[85].EnemyBullet = false;
			setPixelColor(85, THEME);

			DiodeArray[74].FreeSpace = false;
			DiodeArray[74].EnemyBullet = true;
			setPixelColor(74, THEME);
			setPixelColor(74, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 74;
			break;
		case 9:
			DiodeArray[74].FreeSpace = true;
			DiodeArray[74].EnemyBullet = false;
			setPixelColor(74, THEME);

			DiodeArray[53].FreeSpace = false;
			DiodeArray[53].EnemyBullet = true;
			setPixelColor(53, THEME);
			setPixelColor(53, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 53;
			break;
		case 10:
			DiodeArray[53].FreeSpace = true;
			DiodeArray[53].EnemyBullet = false;
			setPixelColor(53, THEME);

			DiodeArray[42].FreeSpace = false;
			DiodeArray[42].EnemyBullet = true;
			setPixelColor(42, THEME);
			setPixelColor(42, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 42;
			break;
		case 11:
			DiodeArray[42].FreeSpace = true;
			DiodeArray[42].EnemyBullet = false;
			setPixelColor(42, THEME);

			DiodeArray[21].FreeSpace = false;
			DiodeArray[21].EnemyBullet = true;
			setPixelColor(21, THEME);
			setPixelColor(21, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 21;
			break;
		case 12:
			DiodeArray[21].FreeSpace = true;
			DiodeArray[21].EnemyBullet = false;
			setPixelColor(21, THEME);

			DiodeArray[10].FreeSpace = false;
			DiodeArray[10].EnemyBullet = true;
			setPixelColor(10, THEME);
			setPixelColor(10, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 10;
			break;
		case 13:
			DiodeArray[10].FreeSpace = true;
			DiodeArray[10].EnemyBullet = false;
			setPixelColor(10, THEME);

			enemyShootFirstDiode_2 = true;
			enemyShootInit_2 = true;
			enemyActivateShoot_2 = false;
			break;
		default:
			break;
		}
		break;
	case 12:
		if (enemyShootInit_2) {
			switch (enemyDiodeStartShootID_2) {
			case 203:
				enemyDiodeShootRoute_2 = 1;

				DiodeArray[180].FreeSpace = false;
				DiodeArray[171].FreeSpace = false;
				DiodeArray[148].FreeSpace = false;
				DiodeArray[139].FreeSpace = false;
				DiodeArray[116].FreeSpace = false;
				DiodeArray[107].FreeSpace = false;
				break;
			case 180:
				enemyDiodeShootRoute_2 = 2;

				DiodeArray[171].FreeSpace = false;
				DiodeArray[148].FreeSpace = false;
				DiodeArray[139].FreeSpace = false;
				DiodeArray[116].FreeSpace = false;
				DiodeArray[107].FreeSpace = false;
				break;
			case 171:
				enemyDiodeShootRoute_2 = 3;

				DiodeArray[148].FreeSpace = false;
				DiodeArray[139].FreeSpace = false;
				DiodeArray[116].FreeSpace = false;
				DiodeArray[107].FreeSpace = false;
				break;
			case 148:
				enemyDiodeShootRoute_2 = 4;

				DiodeArray[139].FreeSpace = false;
				DiodeArray[116].FreeSpace = false;
				DiodeArray[107].FreeSpace = false;
				break;
			case 139:
				enemyDiodeShootRoute_2 = 5;

				DiodeArray[116].FreeSpace = false;
				DiodeArray[107].FreeSpace = false;
				break;
			case 116:
				enemyDiodeShootRoute_2 = 6;

				DiodeArray[107].FreeSpace = false;
				break;
			case 107:
				enemyDiodeShootRoute_2 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_2 = false;
		}
		switch (enemyDiodeShootRoute_2) {
		case 1:
			enemyShootFirstDiode_2 = false;
			DiodeArray[180].EnemyBullet = true;
			setPixelColor(180, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 180;
			break;
		case 2:
			if (enemyShootFirstDiode_2) {
				DiodeArray[171].EnemyBullet = true;
				setPixelColor(171, THEME);
				setPixelColor(171, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[180].FreeSpace = true;
				DiodeArray[180].EnemyBullet = false;
				setPixelColor(180, THEME);

				DiodeArray[171].EnemyBullet = true;
				setPixelColor(171, THEME);
				setPixelColor(171, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 171;
			break;
		case 3:
			if (enemyShootFirstDiode_2) {
				DiodeArray[148].EnemyBullet = true;
				setPixelColor(148, THEME);
				setPixelColor(148, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[171].FreeSpace = true;
				DiodeArray[171].EnemyBullet = false;
				setPixelColor(171, THEME);

				DiodeArray[148].EnemyBullet = true;
				setPixelColor(148, THEME);
				setPixelColor(148, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 148;
			break;
		case 4:
			if (enemyShootFirstDiode_2) {
				DiodeArray[139].EnemyBullet = true;
				setPixelColor(139, THEME);
				setPixelColor(139, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[148].FreeSpace = true;
				DiodeArray[148].EnemyBullet = false;
				setPixelColor(148, THEME);

				DiodeArray[139].EnemyBullet = true;
				setPixelColor(139, THEME);
				setPixelColor(139, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 139;
			break;
		case 5:
			if (enemyShootFirstDiode_2) {
				DiodeArray[116].EnemyBullet = true;
				setPixelColor(116, THEME);
				setPixelColor(116, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[139].FreeSpace = true;
				DiodeArray[139].EnemyBullet = false;
				setPixelColor(139, THEME);

				DiodeArray[116].EnemyBullet = true;
				setPixelColor(116, THEME);
				setPixelColor(116, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 116;
			break;
		case 6:
			if (enemyShootFirstDiode_2) {
				DiodeArray[107].EnemyBullet = true;
				setPixelColor(107, THEME);
				setPixelColor(107, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[116].FreeSpace = true;
				DiodeArray[116].EnemyBullet = false;
				setPixelColor(116, THEME);

				DiodeArray[107].EnemyBullet = true;
				setPixelColor(107, THEME);
				setPixelColor(107, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 107;
			break;
		case 7:
			if (enemyShootFirstDiode_2) {
				DiodeArray[84].EnemyBullet = true;
				setPixelColor(84, THEME);
				setPixelColor(84, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[107].FreeSpace = true;
				DiodeArray[107].EnemyBullet = false;
				setPixelColor(107, THEME);

				DiodeArray[84].EnemyBullet = true;
				setPixelColor(84, THEME);
				setPixelColor(84, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 84;
			break;
		case 8:
			DiodeArray[84].FreeSpace = true;
			DiodeArray[84].EnemyBullet = false;
			setPixelColor(84, THEME);

			DiodeArray[75].FreeSpace = false;
			DiodeArray[75].EnemyBullet = true;
			setPixelColor(75, THEME);
			setPixelColor(75, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 75;
			break;
		case 9:
			DiodeArray[75].FreeSpace = true;
			DiodeArray[75].EnemyBullet = false;
			setPixelColor(75, THEME);

			DiodeArray[52].FreeSpace = false;
			DiodeArray[52].EnemyBullet = true;
			setPixelColor(52, THEME);
			setPixelColor(52, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 52;
			break;
		case 10:
			DiodeArray[52].FreeSpace = true;
			DiodeArray[52].EnemyBullet = false;
			setPixelColor(52, THEME);

			DiodeArray[43].FreeSpace = false;
			DiodeArray[43].EnemyBullet = true;
			setPixelColor(43, THEME);
			setPixelColor(43, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 43;
			break;
		case 11:
			DiodeArray[43].FreeSpace = true;
			DiodeArray[43].EnemyBullet = false;
			setPixelColor(43, THEME);

			DiodeArray[20].FreeSpace = false;
			DiodeArray[20].EnemyBullet = true;
			setPixelColor(20, THEME);
			setPixelColor(20, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 20;
			break;
		case 12:
			DiodeArray[20].FreeSpace = true;
			DiodeArray[20].EnemyBullet = false;
			setPixelColor(20, THEME);

			DiodeArray[11].FreeSpace = false;
			DiodeArray[11].EnemyBullet = true;
			setPixelColor(11, THEME);
			setPixelColor(11, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 11;
			break;
		case 13:
			DiodeArray[11].FreeSpace = true;
			DiodeArray[11].EnemyBullet = false;
			setPixelColor(11, THEME);

			enemyShootFirstDiode_2 = true;
			enemyShootInit_2 = true;
			enemyActivateShoot_2 = false;
			break;
		default:
			break;
		}
		break;
	case 13:
		if (enemyShootInit_2) {
			switch (enemyDiodeStartShootID_2) {
			case 204:
				enemyDiodeShootRoute_2 = 1;

				DiodeArray[179].FreeSpace = false;
				DiodeArray[172].FreeSpace = false;
				DiodeArray[147].FreeSpace = false;
				DiodeArray[140].FreeSpace = false;
				DiodeArray[115].FreeSpace = false;
				DiodeArray[108].FreeSpace = false;
				break;
			case 179:
				enemyDiodeShootRoute_2 = 2;

				DiodeArray[172].FreeSpace = false;
				DiodeArray[147].FreeSpace = false;
				DiodeArray[140].FreeSpace = false;
				DiodeArray[115].FreeSpace = false;
				DiodeArray[108].FreeSpace = false;
				break;
			case 172:
				enemyDiodeShootRoute_2 = 3;

				DiodeArray[147].FreeSpace = false;
				DiodeArray[140].FreeSpace = false;
				DiodeArray[115].FreeSpace = false;
				DiodeArray[108].FreeSpace = false;
				break;
			case 147:
				enemyDiodeShootRoute_2 = 4;

				DiodeArray[140].FreeSpace = false;
				DiodeArray[115].FreeSpace = false;
				DiodeArray[108].FreeSpace = false;
				break;
			case 140:
				enemyDiodeShootRoute_2 = 5;

				DiodeArray[115].FreeSpace = false;
				DiodeArray[108].FreeSpace = false;
				break;
			case 115:
				enemyDiodeShootRoute_2 = 6;

				DiodeArray[108].FreeSpace = false;
				break;
			case 108:
				enemyDiodeShootRoute_2 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_2 = false;
		}
		switch (enemyDiodeShootRoute_2) {
		case 1:
			enemyShootFirstDiode_2 = false;
			DiodeArray[179].EnemyBullet = true;
			setPixelColor(179, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 179;
			break;
		case 2:
			if (enemyShootFirstDiode_2) {
				DiodeArray[172].EnemyBullet = true;
				setPixelColor(172, THEME);
				setPixelColor(172, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[179].FreeSpace = true;
				DiodeArray[179].EnemyBullet = false;
				setPixelColor(179, THEME);

				DiodeArray[172].EnemyBullet = true;
				setPixelColor(172, THEME);
				setPixelColor(172, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 172;
			break;
		case 3:
			if (enemyShootFirstDiode_2) {
				DiodeArray[147].EnemyBullet = true;
				setPixelColor(147, THEME);
				setPixelColor(147, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[172].FreeSpace = true;
				DiodeArray[172].EnemyBullet = false;
				setPixelColor(172, THEME);

				DiodeArray[147].EnemyBullet = true;
				setPixelColor(147, THEME);
				setPixelColor(147, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 147;
			break;
		case 4:
			if (enemyShootFirstDiode_2) {
				DiodeArray[140].EnemyBullet = true;
				setPixelColor(140, THEME);
				setPixelColor(140, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[147].FreeSpace = true;
				DiodeArray[147].EnemyBullet = false;
				setPixelColor(147, THEME);

				DiodeArray[140].EnemyBullet = true;
				setPixelColor(140, THEME);
				setPixelColor(140, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 140;
			break;
		case 5:
			if (enemyShootFirstDiode_2) {
				DiodeArray[115].EnemyBullet = true;
				setPixelColor(115, THEME);
				setPixelColor(115, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[140].FreeSpace = true;
				DiodeArray[140].EnemyBullet = false;
				setPixelColor(140, THEME);

				DiodeArray[115].EnemyBullet = true;
				setPixelColor(115, THEME);
				setPixelColor(115, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 115;
			break;
		case 6:
			if (enemyShootFirstDiode_2) {
				DiodeArray[108].EnemyBullet = true;
				setPixelColor(108, THEME);
				setPixelColor(108, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[115].FreeSpace = true;
				DiodeArray[115].EnemyBullet = false;
				setPixelColor(115, THEME);

				DiodeArray[108].EnemyBullet = true;
				setPixelColor(108, THEME);
				setPixelColor(108, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 108;
			break;
		case 7:
			if (enemyShootFirstDiode_2) {
				DiodeArray[83].EnemyBullet = true;
				setPixelColor(83, THEME);
				setPixelColor(83, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[108].FreeSpace = true;
				DiodeArray[108].EnemyBullet = false;
				setPixelColor(108, THEME);

				DiodeArray[83].EnemyBullet = true;
				setPixelColor(83, THEME);
				setPixelColor(83, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 83;
			break;
		case 8:
			DiodeArray[83].FreeSpace = true;
			DiodeArray[83].EnemyBullet = false;
			setPixelColor(83, THEME);

			DiodeArray[76].FreeSpace = false;
			DiodeArray[76].EnemyBullet = true;
			setPixelColor(76, THEME);
			setPixelColor(76, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 76;
			break;
		case 9:
			DiodeArray[76].FreeSpace = true;
			DiodeArray[76].EnemyBullet = false;
			setPixelColor(76, THEME);

			DiodeArray[51].FreeSpace = false;
			DiodeArray[51].EnemyBullet = true;
			setPixelColor(51, THEME);
			setPixelColor(51, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 51;
			break;
		case 10:
			DiodeArray[51].FreeSpace = true;
			DiodeArray[51].EnemyBullet = false;
			setPixelColor(51, THEME);

			DiodeArray[44].FreeSpace = false;
			DiodeArray[44].EnemyBullet = true;
			setPixelColor(44, THEME);
			setPixelColor(44, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 44;
			break;
		case 11:
			DiodeArray[44].FreeSpace = true;
			DiodeArray[44].EnemyBullet = false;
			setPixelColor(44, THEME);

			DiodeArray[19].FreeSpace = false;
			DiodeArray[19].EnemyBullet = true;
			setPixelColor(19, THEME);
			setPixelColor(19, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 19;
			break;
		case 12:
			DiodeArray[19].FreeSpace = true;
			DiodeArray[19].EnemyBullet = false;
			setPixelColor(19, THEME);

			DiodeArray[12].FreeSpace = false;
			DiodeArray[12].EnemyBullet = true;
			setPixelColor(12, THEME);
			setPixelColor(12, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 12;
			break;
		case 13:
			DiodeArray[12].FreeSpace = true;
			DiodeArray[12].EnemyBullet = false;
			setPixelColor(12, THEME);

			enemyShootFirstDiode_2 = true;
			enemyShootInit_2 = true;
			enemyActivateShoot_2 = false;
			break;
		default:
			break;
		}
		break;
	case 14:
		if (enemyShootInit_2) {
			switch (enemyDiodeStartShootID_2) {
			case 205:
				enemyDiodeShootRoute_2 = 1;

				DiodeArray[178].FreeSpace = false;
				DiodeArray[173].FreeSpace = false;
				DiodeArray[146].FreeSpace = false;
				DiodeArray[141].FreeSpace = false;
				DiodeArray[114].FreeSpace = false;
				DiodeArray[109].FreeSpace = false;
				break;
			case 178:
				enemyDiodeShootRoute_2 = 2;

				DiodeArray[173].FreeSpace = false;
				DiodeArray[146].FreeSpace = false;
				DiodeArray[141].FreeSpace = false;
				DiodeArray[114].FreeSpace = false;
				DiodeArray[109].FreeSpace = false;
				break;
			case 173:
				enemyDiodeShootRoute_2 = 3;

				DiodeArray[146].FreeSpace = false;
				DiodeArray[141].FreeSpace = false;
				DiodeArray[114].FreeSpace = false;
				DiodeArray[109].FreeSpace = false;
				break;
			case 146:
				enemyDiodeShootRoute_2 = 4;

				DiodeArray[141].FreeSpace = false;
				DiodeArray[114].FreeSpace = false;
				DiodeArray[109].FreeSpace = false;
				break;
			case 141:
				enemyDiodeShootRoute_2 = 5;

				DiodeArray[114].FreeSpace = false;
				DiodeArray[109].FreeSpace = false;
				break;
			case 114:
				enemyDiodeShootRoute_2 = 6;

				DiodeArray[109].FreeSpace = false;
				break;
			case 109:
				enemyDiodeShootRoute_2 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_2 = false;
		}
		switch (enemyDiodeShootRoute_2) {
		case 1:
			enemyShootFirstDiode_2 = false;
			DiodeArray[178].EnemyBullet = true;
			setPixelColor(178, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 178;
			break;
		case 2:
			if (enemyShootFirstDiode_2) {
				DiodeArray[173].EnemyBullet = true;
				setPixelColor(173, THEME);
				setPixelColor(173, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[178].FreeSpace = true;
				DiodeArray[178].EnemyBullet = false;
				setPixelColor(178, THEME);

				DiodeArray[173].EnemyBullet = true;
				setPixelColor(173, THEME);
				setPixelColor(173, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 173;
			break;
		case 3:
			if (enemyShootFirstDiode_2) {
				DiodeArray[146].EnemyBullet = true;
				setPixelColor(146, THEME);
				setPixelColor(146, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[173].FreeSpace = true;
				DiodeArray[173].EnemyBullet = false;
				setPixelColor(173, THEME);

				DiodeArray[146].EnemyBullet = true;
				setPixelColor(146, THEME);
				setPixelColor(146, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 146;
			break;
		case 4:
			if (enemyShootFirstDiode_2) {
				DiodeArray[141].EnemyBullet = true;
				setPixelColor(141, THEME);
				setPixelColor(141, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[146].FreeSpace = true;
				DiodeArray[146].EnemyBullet = false;
				setPixelColor(146, THEME);

				DiodeArray[141].EnemyBullet = true;
				setPixelColor(141, THEME);
				setPixelColor(141, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 141;
			break;
		case 5:
			if (enemyShootFirstDiode_2) {
				DiodeArray[114].EnemyBullet = true;
				setPixelColor(114, THEME);
				setPixelColor(114, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[141].FreeSpace = true;
				DiodeArray[141].EnemyBullet = false;
				setPixelColor(141, THEME);

				DiodeArray[114].EnemyBullet = true;
				setPixelColor(114, THEME);
				setPixelColor(114, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 114;
			break;
		case 6:
			if (enemyShootFirstDiode_2) {
				DiodeArray[109].EnemyBullet = true;
				setPixelColor(109, THEME);
				setPixelColor(109, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[114].FreeSpace = true;
				DiodeArray[114].EnemyBullet = false;
				setPixelColor(114, THEME);

				DiodeArray[109].EnemyBullet = true;
				setPixelColor(109, THEME);
				setPixelColor(109, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 109;
			break;
		case 7:
			if (enemyShootFirstDiode_2) {
				DiodeArray[82].EnemyBullet = true;
				setPixelColor(82, THEME);
				setPixelColor(82, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[109].FreeSpace = true;
				DiodeArray[109].EnemyBullet = false;
				setPixelColor(109, THEME);

				DiodeArray[82].EnemyBullet = true;
				setPixelColor(82, THEME);
				setPixelColor(82, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 82;
			break;
		case 8:
			DiodeArray[82].FreeSpace = true;
			DiodeArray[82].EnemyBullet = false;
			setPixelColor(82, THEME);

			DiodeArray[77].FreeSpace = false;
			DiodeArray[77].EnemyBullet = true;
			setPixelColor(77, THEME);
			setPixelColor(77, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 77;
			break;
		case 9:
			DiodeArray[77].FreeSpace = true;
			DiodeArray[77].EnemyBullet = false;
			setPixelColor(77, THEME);

			DiodeArray[50].FreeSpace = false;
			DiodeArray[50].EnemyBullet = true;
			setPixelColor(50, THEME);
			setPixelColor(50, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 50;
			break;
		case 10:
			DiodeArray[50].FreeSpace = true;
			DiodeArray[50].EnemyBullet = false;
			setPixelColor(50, THEME);

			DiodeArray[45].FreeSpace = false;
			DiodeArray[45].EnemyBullet = true;
			setPixelColor(45, THEME);
			setPixelColor(45, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 45;
			break;
		case 11:
			DiodeArray[45].FreeSpace = true;
			DiodeArray[45].EnemyBullet = false;
			setPixelColor(45, THEME);

			DiodeArray[18].FreeSpace = false;
			DiodeArray[18].EnemyBullet = true;
			setPixelColor(18, THEME);
			setPixelColor(18, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 18;
			break;
		case 12:
			DiodeArray[18].FreeSpace = true;
			DiodeArray[18].EnemyBullet = false;
			setPixelColor(18, THEME);

			DiodeArray[13].FreeSpace = false;
			DiodeArray[13].EnemyBullet = true;
			setPixelColor(13, THEME);
			setPixelColor(13, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 13;
			break;
		case 13:
			DiodeArray[13].FreeSpace = true;
			DiodeArray[13].EnemyBullet = false;
			setPixelColor(13, THEME);

			enemyShootFirstDiode_2 = true;
			enemyShootInit_2 = true;
			enemyActivateShoot_2 = false;
			break;
		default:
			break;
		}
		break;
	case 15:
		if (enemyShootInit_2) {
			switch (enemyDiodeStartShootID_2) {
			case 206:
				enemyDiodeShootRoute_2 = 1;

				DiodeArray[177].FreeSpace = false;
				DiodeArray[174].FreeSpace = false;
				DiodeArray[145].FreeSpace = false;
				DiodeArray[142].FreeSpace = false;
				DiodeArray[113].FreeSpace = false;
				DiodeArray[110].FreeSpace = false;
				break;
			case 177:
				enemyDiodeShootRoute_2 = 2;

				DiodeArray[174].FreeSpace = false;
				DiodeArray[145].FreeSpace = false;
				DiodeArray[142].FreeSpace = false;
				DiodeArray[113].FreeSpace = false;
				DiodeArray[110].FreeSpace = false;
				break;
			case 174:
				enemyDiodeShootRoute_2 = 3;

				DiodeArray[145].FreeSpace = false;
				DiodeArray[142].FreeSpace = false;
				DiodeArray[113].FreeSpace = false;
				DiodeArray[110].FreeSpace = false;
				break;
			case 145:
				enemyDiodeShootRoute_2 = 4;

				DiodeArray[142].FreeSpace = false;
				DiodeArray[113].FreeSpace = false;
				DiodeArray[110].FreeSpace = false;
				break;
			case 142:
				enemyDiodeShootRoute_2 = 5;

				DiodeArray[113].FreeSpace = false;
				DiodeArray[110].FreeSpace = false;
				break;
			case 113:
				enemyDiodeShootRoute_2 = 6;

				DiodeArray[110].FreeSpace = false;
				break;
			case 110:
				enemyDiodeShootRoute_2 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_2 = false;
		}
		switch (enemyDiodeShootRoute_2) {
		case 1:
			enemyShootFirstDiode_2 = false;
			DiodeArray[177].EnemyBullet = true;
			setPixelColor(177, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 177;
			break;
		case 2:
			if (enemyShootFirstDiode_2) {
				DiodeArray[174].EnemyBullet = true;
				setPixelColor(174, THEME);
				setPixelColor(174, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[177].FreeSpace = true;
				DiodeArray[177].EnemyBullet = false;
				setPixelColor(177, THEME);

				DiodeArray[174].EnemyBullet = true;
				setPixelColor(174, THEME);
				setPixelColor(174, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 174;
			break;
		case 3:
			if (enemyShootFirstDiode_2) {
				DiodeArray[145].EnemyBullet = true;
				setPixelColor(145, THEME);
				setPixelColor(145, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[174].FreeSpace = true;
				DiodeArray[174].EnemyBullet = false;
				setPixelColor(174, THEME);

				DiodeArray[145].EnemyBullet = true;
				setPixelColor(145, THEME);
				setPixelColor(145, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 145;
			break;
		case 4:
			if (enemyShootFirstDiode_2) {
				DiodeArray[142].EnemyBullet = true;
				setPixelColor(142, THEME);
				setPixelColor(142, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[145].FreeSpace = true;
				DiodeArray[145].EnemyBullet = false;
				setPixelColor(145, THEME);

				DiodeArray[142].EnemyBullet = true;
				setPixelColor(142, THEME);
				setPixelColor(142, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 142;
			break;
		case 5:
			if (enemyShootFirstDiode_2) {
				DiodeArray[113].EnemyBullet = true;
				setPixelColor(113, THEME);
				setPixelColor(113, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[142].FreeSpace = true;
				DiodeArray[142].EnemyBullet = false;
				setPixelColor(142, THEME);

				DiodeArray[113].EnemyBullet = true;
				setPixelColor(113, THEME);
				setPixelColor(113, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 113;
			break;
		case 6:
			if (enemyShootFirstDiode_2) {
				DiodeArray[110].EnemyBullet = true;
				setPixelColor(110, THEME);
				setPixelColor(110, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[113].FreeSpace = true;
				DiodeArray[113].EnemyBullet = false;
				setPixelColor(113, THEME);

				DiodeArray[110].EnemyBullet = true;
				setPixelColor(110, THEME);
				setPixelColor(110, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 110;
			break;
		case 7:
			if (enemyShootFirstDiode_2) {
				DiodeArray[81].EnemyBullet = true;
				setPixelColor(81, THEME);
				setPixelColor(81, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[110].FreeSpace = true;
				DiodeArray[110].EnemyBullet = false;
				setPixelColor(110, THEME);

				DiodeArray[81].EnemyBullet = true;
				setPixelColor(81, THEME);
				setPixelColor(81, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 81;
			break;
		case 8:
			DiodeArray[81].FreeSpace = true;
			DiodeArray[81].EnemyBullet = false;
			setPixelColor(81, THEME);

			DiodeArray[78].FreeSpace = false;
			DiodeArray[78].EnemyBullet = true;
			setPixelColor(78, THEME);
			setPixelColor(78, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 78;
			break;
		case 9:
			DiodeArray[78].FreeSpace = true;
			DiodeArray[78].EnemyBullet = false;
			setPixelColor(78, THEME);

			DiodeArray[49].FreeSpace = false;
			DiodeArray[49].EnemyBullet = true;
			setPixelColor(49, THEME);
			setPixelColor(49, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 49;
			break;
		case 10:
			DiodeArray[49].FreeSpace = true;
			DiodeArray[49].EnemyBullet = false;
			setPixelColor(49, THEME);

			DiodeArray[46].FreeSpace = false;
			DiodeArray[46].EnemyBullet = true;
			setPixelColor(46, THEME);
			setPixelColor(46, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 46;
			break;
		case 11:
			DiodeArray[46].FreeSpace = true;
			DiodeArray[46].EnemyBullet = false;
			setPixelColor(46, THEME);

			DiodeArray[17].FreeSpace = false;
			DiodeArray[17].EnemyBullet = true;
			setPixelColor(17, THEME);
			setPixelColor(17, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 17;
			break;
		case 12:
			DiodeArray[17].FreeSpace = true;
			DiodeArray[17].EnemyBullet = false;
			setPixelColor(17, THEME);

			DiodeArray[14].FreeSpace = false;
			DiodeArray[14].EnemyBullet = true;
			setPixelColor(14, THEME);
			setPixelColor(14, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 14;
			break;
		case 13:
			DiodeArray[14].FreeSpace = true;
			DiodeArray[14].EnemyBullet = false;
			setPixelColor(14, THEME);

			enemyShootFirstDiode_2 = true;
			enemyShootInit_2 = true;
			enemyActivateShoot_2 = false;
			break;
		default:
			break;
		}
		break;
	case 16:
		if (enemyShootInit_2) {
			switch (enemyDiodeStartShootID_2) {
			case 207:
				enemyDiodeShootRoute_2 = 1;

				DiodeArray[176].FreeSpace = false;
				DiodeArray[175].FreeSpace = false;
				DiodeArray[144].FreeSpace = false;
				DiodeArray[143].FreeSpace = false;
				DiodeArray[112].FreeSpace = false;
				DiodeArray[111].FreeSpace = false;
				break;
			case 176:
				enemyDiodeShootRoute_2 = 2;

				DiodeArray[175].FreeSpace = false;
				DiodeArray[144].FreeSpace = false;
				DiodeArray[143].FreeSpace = false;
				DiodeArray[112].FreeSpace = false;
				DiodeArray[111].FreeSpace = false;
				break;
			case 175:
				enemyDiodeShootRoute_2 = 3;

				DiodeArray[144].FreeSpace = false;
				DiodeArray[143].FreeSpace = false;
				DiodeArray[112].FreeSpace = false;
				DiodeArray[111].FreeSpace = false;
				break;
			case 144:
				enemyDiodeShootRoute_2 = 4;

				DiodeArray[143].FreeSpace = false;
				DiodeArray[112].FreeSpace = false;
				DiodeArray[111].FreeSpace = false;
				break;
			case 143:
				enemyDiodeShootRoute_2 = 5;

				DiodeArray[112].FreeSpace = false;
				DiodeArray[111].FreeSpace = false;
				break;
			case 112:
				enemyDiodeShootRoute_2 = 6;

				DiodeArray[111].FreeSpace = false;
				break;
			case 111:
				enemyDiodeShootRoute_2 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_2 = false;
		}
		switch (enemyDiodeShootRoute_2) {
		case 1:
			enemyShootFirstDiode_2 = false;
			DiodeArray[176].EnemyBullet = true;
			setPixelColor(176, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 176;
			break;
		case 2:
			if (enemyShootFirstDiode_2) {
				DiodeArray[175].EnemyBullet = true;
				setPixelColor(175, THEME);
				setPixelColor(175, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[176].FreeSpace = true;
				DiodeArray[176].EnemyBullet = false;
				setPixelColor(176, THEME);

				DiodeArray[175].EnemyBullet = true;
				setPixelColor(175, THEME);
				setPixelColor(175, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 175;
			break;
		case 3:
			if (enemyShootFirstDiode_2) {
				DiodeArray[144].EnemyBullet = true;
				setPixelColor(144, THEME);
				setPixelColor(144, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[175].FreeSpace = true;
				DiodeArray[175].EnemyBullet = false;
				setPixelColor(175, THEME);

				DiodeArray[144].EnemyBullet = true;
				setPixelColor(144, THEME);
				setPixelColor(144, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 144;
			break;
		case 4:
			if (enemyShootFirstDiode_2) {
				DiodeArray[143].EnemyBullet = true;
				setPixelColor(143, THEME);
				setPixelColor(143, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[144].FreeSpace = true;
				DiodeArray[144].EnemyBullet = false;
				setPixelColor(144, THEME);

				DiodeArray[143].EnemyBullet = true;
				setPixelColor(143, THEME);
				setPixelColor(143, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 143;
			break;
		case 5:
			if (enemyShootFirstDiode_2) {
				DiodeArray[112].EnemyBullet = true;
				setPixelColor(112, THEME);
				setPixelColor(112, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[143].FreeSpace = true;
				DiodeArray[143].EnemyBullet = false;
				setPixelColor(143, THEME);

				DiodeArray[112].EnemyBullet = true;
				setPixelColor(112, THEME);
				setPixelColor(112, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 112;
			break;
		case 6:
			if (enemyShootFirstDiode_2) {
				DiodeArray[111].EnemyBullet = true;
				setPixelColor(111, THEME);
				setPixelColor(111, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[112].FreeSpace = true;
				DiodeArray[112].EnemyBullet = false;
				setPixelColor(112, THEME);

				DiodeArray[111].EnemyBullet = true;
				setPixelColor(111, THEME);
				setPixelColor(111, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 111;
			break;
		case 7:
			if (enemyShootFirstDiode_2) {
				DiodeArray[80].EnemyBullet = true;
				setPixelColor(80, THEME);
				setPixelColor(80, ENEMY_BULLET);

				enemyShootFirstDiode_2 = false;
			} else {
				DiodeArray[111].FreeSpace = true;
				DiodeArray[111].EnemyBullet = false;
				setPixelColor(111, THEME);

				DiodeArray[80].EnemyBullet = true;
				setPixelColor(80, THEME);
				setPixelColor(80, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_2 = 80;
			break;
		case 8:
			DiodeArray[80].FreeSpace = true;
			DiodeArray[80].EnemyBullet = false;
			setPixelColor(80, THEME);

			DiodeArray[79].FreeSpace = false;
			DiodeArray[79].EnemyBullet = true;
			setPixelColor(79, THEME);
			setPixelColor(79, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 79;
			break;
		case 9:
			DiodeArray[79].FreeSpace = true;
			DiodeArray[79].EnemyBullet = false;
			setPixelColor(79, THEME);

			DiodeArray[48].FreeSpace = false;
			DiodeArray[48].EnemyBullet = true;
			setPixelColor(48, THEME);
			setPixelColor(48, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 48;
			break;
		case 10:
			DiodeArray[48].FreeSpace = true;
			DiodeArray[48].EnemyBullet = false;
			setPixelColor(48, THEME);

			DiodeArray[47].FreeSpace = false;
			DiodeArray[47].EnemyBullet = true;
			setPixelColor(47, THEME);
			setPixelColor(47, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 47;
			break;
		case 11:
			DiodeArray[47].FreeSpace = true;
			DiodeArray[47].EnemyBullet = false;
			setPixelColor(47, THEME);

			DiodeArray[16].FreeSpace = false;
			DiodeArray[16].EnemyBullet = true;
			setPixelColor(16, THEME);
			setPixelColor(16, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 16;
			break;
		case 12:
			DiodeArray[16].FreeSpace = true;
			DiodeArray[16].EnemyBullet = false;
			setPixelColor(16, THEME);

			DiodeArray[15].FreeSpace = false;
			DiodeArray[15].EnemyBullet = true;
			setPixelColor(15, THEME);
			setPixelColor(15, ENEMY_BULLET);
			enemyCurrentShootDiode_2 = 15;
			break;
		case 13:
			DiodeArray[15].FreeSpace = true;
			DiodeArray[15].EnemyBullet = false;
			setPixelColor(15, THEME);

			enemyShootFirstDiode_2 = true;
			enemyShootInit_2 = true;
			enemyActivateShoot_2 = false;
			break;
		default:
			break;
		}
		break;
	default:
		break;
	}
}

void enemyShooting_3() {



	int bulletLine = getEnemyBulletLine(enemyDiodeStartShootID_3);

	switch (bulletLine) {
	case 1:
		if (enemyShootInit_3) {
			switch (enemyDiodeStartShootID_3) {
			case 192:
				enemyDiodeShootRoute_3 = 1;

				DiodeArray[191].FreeSpace = false;
				DiodeArray[160].FreeSpace = false;
				DiodeArray[159].FreeSpace = false;
				DiodeArray[128].FreeSpace = false;
				DiodeArray[127].FreeSpace = false;
				DiodeArray[96].FreeSpace = false;
				break;
			case 191:
				enemyDiodeShootRoute_3 = 2;

				DiodeArray[160].FreeSpace = false;
				DiodeArray[159].FreeSpace = false;
				DiodeArray[128].FreeSpace = false;
				DiodeArray[127].FreeSpace = false;
				DiodeArray[96].FreeSpace = false;
				break;
			case 160:
				enemyDiodeShootRoute_3 = 3;

				DiodeArray[159].FreeSpace = false;
				DiodeArray[128].FreeSpace = false;
				DiodeArray[127].FreeSpace = false;
				DiodeArray[96].FreeSpace = false;
				break;
			case 159:
				enemyDiodeShootRoute_3 = 4;

				DiodeArray[128].FreeSpace = false;
				DiodeArray[127].FreeSpace = false;
				DiodeArray[96].FreeSpace = false;
				break;
			case 128:
				enemyDiodeShootRoute_3 = 5;

				DiodeArray[127].FreeSpace = false;
				DiodeArray[96].FreeSpace = false;
				break;
			case 127:
				enemyDiodeShootRoute_3 = 6;

				DiodeArray[96].FreeSpace = false;
				break;
			case 96:
				enemyDiodeShootRoute_3 = 7;

				break;
			default:
				break;
			}
			enemyShootInit_3 = false;
		}
		switch (enemyDiodeShootRoute_3) {
		case 1:
			enemyShootFirstDiode_3 = false;
			DiodeArray[191].EnemyBullet = true;
			setPixelColor(191, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 191;
			break;
		case 2:
			if (enemyShootFirstDiode_3) {
				DiodeArray[160].EnemyBullet = true;
				setPixelColor(160, THEME);
				setPixelColor(160, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[191].FreeSpace = true;
				DiodeArray[191].EnemyBullet = false;
				setPixelColor(191, THEME);

				DiodeArray[160].EnemyBullet = true;
				setPixelColor(160, THEME);
				setPixelColor(160, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 160;
			break;
		case 3:
			if (enemyShootFirstDiode_3) {
				DiodeArray[159].EnemyBullet = true;
				setPixelColor(159, THEME);
				setPixelColor(159, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[160].FreeSpace = true;
				DiodeArray[160].EnemyBullet = false;
				setPixelColor(160, THEME);

				DiodeArray[159].EnemyBullet = true;
				setPixelColor(159, THEME);
				setPixelColor(159, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 159;
			break;
		case 4:
			if (enemyShootFirstDiode_3) {
				DiodeArray[128].EnemyBullet = true;
				setPixelColor(128, THEME);
				setPixelColor(128, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[159].FreeSpace = true;
				DiodeArray[159].EnemyBullet = false;
				setPixelColor(159, THEME);

				DiodeArray[128].EnemyBullet = true;
				setPixelColor(128, THEME);
				setPixelColor(128, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 128;
			break;
		case 5:
			if (enemyShootFirstDiode_3) {
				DiodeArray[127].EnemyBullet = true;
				setPixelColor(127, THEME);
				setPixelColor(127, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[128].FreeSpace = true;
				DiodeArray[128].EnemyBullet = false;
				setPixelColor(128, THEME);

				DiodeArray[127].EnemyBullet = true;
				setPixelColor(127, THEME);
				setPixelColor(127, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 127;
			break;
		case 6:
			if (enemyShootFirstDiode_3) {
				DiodeArray[96].EnemyBullet = true;
				setPixelColor(96, THEME);
				setPixelColor(96, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[127].FreeSpace = true;
				DiodeArray[127].EnemyBullet = false;
				setPixelColor(127, THEME);

				DiodeArray[96].EnemyBullet = true;
				setPixelColor(96, THEME);
				setPixelColor(96, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 96;
			break;
		case 7:
			if (enemyShootFirstDiode_3) {
				DiodeArray[95].EnemyBullet = true;
				setPixelColor(95, THEME);
				setPixelColor(95, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[96].FreeSpace = true;
				DiodeArray[96].EnemyBullet = false;
				setPixelColor(96, THEME);

				DiodeArray[95].EnemyBullet = true;
				setPixelColor(95, THEME);
				setPixelColor(95, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 95;
			break;
		case 8:
			DiodeArray[95].FreeSpace = true;
			DiodeArray[95].EnemyBullet = false;
			setPixelColor(95, THEME);

			DiodeArray[64].FreeSpace = false;
			DiodeArray[64].EnemyBullet = true;
			setPixelColor(64, THEME);
			setPixelColor(64, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 64;
			break;
		case 9:
			DiodeArray[64].FreeSpace = true;
			DiodeArray[64].EnemyBullet = false;
			setPixelColor(64, THEME);

			DiodeArray[63].FreeSpace = false;
			DiodeArray[63].EnemyBullet = true;
			setPixelColor(63, THEME);
			setPixelColor(63, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 63;
			break;
		case 10:
			DiodeArray[63].FreeSpace = true;
			DiodeArray[63].EnemyBullet = false;
			setPixelColor(63, THEME);

			DiodeArray[32].FreeSpace = false;
			DiodeArray[32].EnemyBullet = true;
			setPixelColor(32, THEME);
			setPixelColor(32, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 32;
			break;
		case 11:
			DiodeArray[32].FreeSpace = true;
			DiodeArray[32].EnemyBullet = false;
			setPixelColor(32, THEME);

			DiodeArray[31].FreeSpace = false;
			DiodeArray[31].EnemyBullet = true;
			setPixelColor(31, THEME);
			setPixelColor(31, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 31;
			break;
		case 12:
			DiodeArray[31].FreeSpace = true;
			DiodeArray[31].EnemyBullet = false;
			setPixelColor(31, THEME);

			DiodeArray[0].FreeSpace = false;
			DiodeArray[0].EnemyBullet = true;
			setPixelColor(0, THEME);
			setPixelColor(0, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 0;
			break;
		case 13:
			DiodeArray[0].FreeSpace = true;
			DiodeArray[0].EnemyBullet = false;
			setPixelColor(0, THEME);

			enemyShootFirstDiode_3 = true;
			enemyShootInit_3 = true;
			enemyActivateShoot_3 = false;
			break;
		default:
			break;
		}
		break;
	case 2:
		if (enemyShootInit_3) {
			switch (enemyDiodeStartShootID_3) {
			case 193:
				enemyDiodeShootRoute_3 = 1;

				DiodeArray[190].FreeSpace = false;
				DiodeArray[161].FreeSpace = false;
				DiodeArray[158].FreeSpace = false;
				DiodeArray[129].FreeSpace = false;
				DiodeArray[126].FreeSpace = false;
				DiodeArray[97].FreeSpace = false;
				break;
			case 190:
				enemyDiodeShootRoute_3 = 2;

				DiodeArray[161].FreeSpace = false;
				DiodeArray[158].FreeSpace = false;
				DiodeArray[129].FreeSpace = false;
				DiodeArray[126].FreeSpace = false;
				DiodeArray[97].FreeSpace = false;
				break;
			case 161:
				enemyDiodeShootRoute_3 = 3;

				DiodeArray[158].FreeSpace = false;
				DiodeArray[129].FreeSpace = false;
				DiodeArray[126].FreeSpace = false;
				DiodeArray[97].FreeSpace = false;
				break;
			case 158:
				enemyDiodeShootRoute_3 = 4;

				DiodeArray[129].FreeSpace = false;
				DiodeArray[126].FreeSpace = false;
				DiodeArray[97].FreeSpace = false;
				break;
			case 129:
				enemyDiodeShootRoute_3 = 5;

				DiodeArray[126].FreeSpace = false;
				DiodeArray[97].FreeSpace = false;
				break;
			case 126:
				enemyDiodeShootRoute_3 = 6;

				DiodeArray[97].FreeSpace = false;
				break;
			case 97:
				enemyDiodeShootRoute_3 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_3 = false;
		}
		switch (enemyDiodeShootRoute_3) {
		case 1:
			enemyShootFirstDiode_3 = false;
			DiodeArray[190].EnemyBullet = true;
			setPixelColor(190, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 190;
			break;
		case 2:
			if (enemyShootFirstDiode_3) {
				DiodeArray[161].EnemyBullet = true;
				setPixelColor(161, THEME);
				setPixelColor(161, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[190].FreeSpace = true;
				DiodeArray[190].EnemyBullet = false;
				setPixelColor(190, THEME);

				DiodeArray[161].EnemyBullet = true;
				setPixelColor(161, THEME);
				setPixelColor(161, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 161;
			break;
		case 3:
			if (enemyShootFirstDiode_3) {
				DiodeArray[158].EnemyBullet = true;
				setPixelColor(158, THEME);
				setPixelColor(158, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[161].FreeSpace = true;
				DiodeArray[161].EnemyBullet = false;
				setPixelColor(161, THEME);

				DiodeArray[158].EnemyBullet = true;
				setPixelColor(158, THEME);
				setPixelColor(158, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 158;
			break;
		case 4:
			if (enemyShootFirstDiode_3) {
				DiodeArray[129].EnemyBullet = true;
				setPixelColor(129, THEME);
				setPixelColor(129, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[158].FreeSpace = true;
				DiodeArray[158].EnemyBullet = false;
				setPixelColor(158, THEME);

				DiodeArray[129].EnemyBullet = true;
				setPixelColor(129, THEME);
				setPixelColor(129, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 129;
			break;
		case 5:
			if (enemyShootFirstDiode_3) {
				DiodeArray[126].EnemyBullet = true;
				setPixelColor(126, THEME);
				setPixelColor(126, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[129].FreeSpace = true;
				DiodeArray[129].EnemyBullet = false;
				setPixelColor(129, THEME);

				DiodeArray[126].EnemyBullet = true;
				setPixelColor(126, THEME);
				setPixelColor(126, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 126;
			break;
		case 6:
			if (enemyShootFirstDiode_3) {
				DiodeArray[97].EnemyBullet = true;
				setPixelColor(97, THEME);
				setPixelColor(97, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[126].FreeSpace = true;
				DiodeArray[126].EnemyBullet = false;
				setPixelColor(126, THEME);

				DiodeArray[97].EnemyBullet = true;
				setPixelColor(97, THEME);
				setPixelColor(97, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 97;
			break;
		case 7:
			if (enemyShootFirstDiode_3) {
				DiodeArray[94].EnemyBullet = true;
				setPixelColor(94, THEME);
				setPixelColor(94, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[97].FreeSpace = true;
				DiodeArray[97].EnemyBullet = false;
				setPixelColor(97, THEME);

				DiodeArray[94].EnemyBullet = true;
				setPixelColor(94, THEME);
				setPixelColor(94, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 94;
			break;
		case 8:
			DiodeArray[94].FreeSpace = true;
			DiodeArray[94].EnemyBullet = false;
			setPixelColor(94, THEME);

			DiodeArray[65].FreeSpace = false;
			DiodeArray[65].EnemyBullet = true;
			setPixelColor(65, THEME);
			setPixelColor(65, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 65;
			break;
		case 9:
			DiodeArray[65].FreeSpace = true;
			DiodeArray[65].EnemyBullet = false;
			setPixelColor(65, THEME);

			DiodeArray[62].FreeSpace = false;
			DiodeArray[62].EnemyBullet = true;
			setPixelColor(62, THEME);
			setPixelColor(62, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 62;
			break;
		case 10:
			DiodeArray[62].FreeSpace = true;
			DiodeArray[62].EnemyBullet = false;
			setPixelColor(62, THEME);

			DiodeArray[33].FreeSpace = false;
			DiodeArray[33].EnemyBullet = true;
			setPixelColor(33, THEME);
			setPixelColor(33, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 33;
			break;
		case 11:
			DiodeArray[33].FreeSpace = true;
			DiodeArray[33].EnemyBullet = false;
			setPixelColor(33, THEME);

			DiodeArray[30].FreeSpace = false;
			DiodeArray[30].EnemyBullet = true;
			setPixelColor(30, THEME);
			setPixelColor(30, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 30;
			break;
		case 12:
			DiodeArray[30].FreeSpace = true;
			DiodeArray[30].EnemyBullet = false;
			setPixelColor(30, THEME);

			DiodeArray[1].FreeSpace = false;
			DiodeArray[1].EnemyBullet = true;
			setPixelColor(1, THEME);
			setPixelColor(1, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 1;
			break;
		case 13:
			DiodeArray[1].FreeSpace = true;
			DiodeArray[1].EnemyBullet = false;
			setPixelColor(1, THEME);

			enemyShootFirstDiode_3 = true;
			enemyShootInit_3 = true;
			enemyActivateShoot_3 = false;
			break;
		default:
			break;
		}
		break;
	case 3:
		if (enemyShootInit_3) {
			switch (enemyDiodeStartShootID_3) {
			case 194:
				enemyDiodeShootRoute_3 = 1;

				DiodeArray[189].FreeSpace = false;
				DiodeArray[162].FreeSpace = false;
				DiodeArray[157].FreeSpace = false;
				DiodeArray[130].FreeSpace = false;
				DiodeArray[125].FreeSpace = false;
				DiodeArray[98].FreeSpace = false;
				break;
			case 189:
				enemyDiodeShootRoute_3 = 2;

				DiodeArray[162].FreeSpace = false;
				DiodeArray[157].FreeSpace = false;
				DiodeArray[130].FreeSpace = false;
				DiodeArray[125].FreeSpace = false;
				DiodeArray[98].FreeSpace = false;
				break;
			case 162:
				enemyDiodeShootRoute_3 = 3;

				DiodeArray[157].FreeSpace = false;
				DiodeArray[130].FreeSpace = false;
				DiodeArray[125].FreeSpace = false;
				DiodeArray[98].FreeSpace = false;
				break;
			case 157:
				enemyDiodeShootRoute_3 = 4;

				DiodeArray[130].FreeSpace = false;
				DiodeArray[125].FreeSpace = false;
				DiodeArray[98].FreeSpace = false;
				break;
			case 130:
				enemyDiodeShootRoute_3 = 5;

				DiodeArray[125].FreeSpace = false;
				DiodeArray[98].FreeSpace = false;
				break;
			case 125:
				enemyDiodeShootRoute_3 = 6;

				DiodeArray[98].FreeSpace = false;
				break;
			case 98:
				enemyDiodeShootRoute_3 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_3 = false;
		}
		switch (enemyDiodeShootRoute_3) {
		case 1:
			enemyShootFirstDiode_3 = false;
			DiodeArray[189].EnemyBullet = true;
			setPixelColor(189, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 189;
			break;
		case 2:
			if (enemyShootFirstDiode_3) {
				DiodeArray[162].EnemyBullet = true;
				setPixelColor(162, THEME);
				setPixelColor(162, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[189].FreeSpace = true;
				DiodeArray[189].EnemyBullet = false;
				setPixelColor(189, THEME);

				DiodeArray[162].EnemyBullet = true;
				setPixelColor(162, THEME);
				setPixelColor(162, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 162;
			break;
		case 3:
			if (enemyShootFirstDiode_3) {
				DiodeArray[157].EnemyBullet = true;
				setPixelColor(157, THEME);
				setPixelColor(157, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[162].FreeSpace = true;
				DiodeArray[162].EnemyBullet = false;
				setPixelColor(162, THEME);

				DiodeArray[157].EnemyBullet = true;
				setPixelColor(157, THEME);
				setPixelColor(157, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 157;
			break;
		case 4:
			if (enemyShootFirstDiode_3) {
				DiodeArray[130].EnemyBullet = true;
				setPixelColor(130, THEME);
				setPixelColor(130, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[157].FreeSpace = true;
				DiodeArray[157].EnemyBullet = false;
				setPixelColor(157, THEME);

				DiodeArray[130].EnemyBullet = true;
				setPixelColor(130, THEME);
				setPixelColor(130, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 130;
			break;
		case 5:
			if (enemyShootFirstDiode_3) {
				DiodeArray[125].EnemyBullet = true;
				setPixelColor(125, THEME);
				setPixelColor(125, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[130].FreeSpace = true;
				DiodeArray[130].EnemyBullet = false;
				setPixelColor(130, THEME);

				DiodeArray[125].EnemyBullet = true;
				setPixelColor(125, THEME);
				setPixelColor(125, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 125;
			break;
		case 6:
			if (enemyShootFirstDiode_3) {
				DiodeArray[98].EnemyBullet = true;
				setPixelColor(98, THEME);
				setPixelColor(98, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[125].FreeSpace = true;
				DiodeArray[125].EnemyBullet = false;
				setPixelColor(125, THEME);

				DiodeArray[98].EnemyBullet = true;
				setPixelColor(98, THEME);
				setPixelColor(98, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 98;
			break;
		case 7:
			if (enemyShootFirstDiode_3) {
				DiodeArray[93].EnemyBullet = true;
				setPixelColor(93, THEME);
				setPixelColor(93, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[98].FreeSpace = true;
				DiodeArray[98].EnemyBullet = false;
				setPixelColor(98, THEME);

				DiodeArray[93].EnemyBullet = true;
				setPixelColor(93, THEME);
				setPixelColor(93, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 93;
			break;
		case 8:
			DiodeArray[93].FreeSpace = true;
			DiodeArray[93].EnemyBullet = false;
			setPixelColor(93, THEME);

			DiodeArray[66].FreeSpace = false;
			DiodeArray[66].EnemyBullet = true;
			setPixelColor(66, THEME);
			setPixelColor(66, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 66;
			break;
		case 9:
			DiodeArray[66].FreeSpace = true;
			DiodeArray[66].EnemyBullet = false;
			setPixelColor(66, THEME);

			DiodeArray[61].FreeSpace = false;
			DiodeArray[61].EnemyBullet = true;
			setPixelColor(61, THEME);
			setPixelColor(61, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 61;
			break;
		case 10:
			DiodeArray[61].FreeSpace = true;
			DiodeArray[61].EnemyBullet = false;
			setPixelColor(61, THEME);

			DiodeArray[34].FreeSpace = false;
			DiodeArray[34].EnemyBullet = true;
			setPixelColor(34, THEME);
			setPixelColor(34, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 34;
			break;
		case 11:
			DiodeArray[34].FreeSpace = true;
			DiodeArray[34].EnemyBullet = false;
			setPixelColor(34, THEME);

			DiodeArray[29].FreeSpace = false;
			DiodeArray[29].EnemyBullet = true;
			setPixelColor(29, THEME);
			setPixelColor(29, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 29;
			break;
		case 12:
			DiodeArray[29].FreeSpace = true;
			DiodeArray[29].EnemyBullet = false;
			setPixelColor(29, THEME);

			DiodeArray[2].FreeSpace = false;
			DiodeArray[2].EnemyBullet = true;
			setPixelColor(2, THEME);
			setPixelColor(2, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 2;
			break;
		case 13:
			DiodeArray[2].FreeSpace = true;
			DiodeArray[2].EnemyBullet = false;
			setPixelColor(2, THEME);

			enemyShootFirstDiode_3 = true;
			enemyShootInit_3 = true;
			enemyActivateShoot_3 = false;
			break;
		default:
			break;
		}
		break;
	case 4:
		if (enemyShootInit_3) {
			switch (enemyDiodeStartShootID_3) {
			case 195:
				enemyDiodeShootRoute_3 = 1;

				DiodeArray[188].FreeSpace = false;
				DiodeArray[163].FreeSpace = false;
				DiodeArray[156].FreeSpace = false;
				DiodeArray[131].FreeSpace = false;
				DiodeArray[124].FreeSpace = false;
				DiodeArray[99].FreeSpace = false;
				break;
			case 188:
				enemyDiodeShootRoute_3 = 2;

				DiodeArray[163].FreeSpace = false;
				DiodeArray[156].FreeSpace = false;
				DiodeArray[131].FreeSpace = false;
				DiodeArray[124].FreeSpace = false;
				DiodeArray[99].FreeSpace = false;
				break;
			case 163:
				enemyDiodeShootRoute_3 = 3;

				DiodeArray[156].FreeSpace = false;
				DiodeArray[131].FreeSpace = false;
				DiodeArray[124].FreeSpace = false;
				DiodeArray[99].FreeSpace = false;
				break;
			case 156:
				enemyDiodeShootRoute_3 = 4;

				DiodeArray[131].FreeSpace = false;
				DiodeArray[124].FreeSpace = false;
				DiodeArray[99].FreeSpace = false;
				break;
			case 131:
				enemyDiodeShootRoute_3 = 5;

				DiodeArray[124].FreeSpace = false;
				DiodeArray[99].FreeSpace = false;
				break;
			case 124:
				enemyDiodeShootRoute_3 = 6;

				DiodeArray[99].FreeSpace = false;
				break;
			case 99:
				enemyDiodeShootRoute_3 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_3 = false;
		}
		switch (enemyDiodeShootRoute_3) {
		case 1:
			enemyShootFirstDiode_3 = false;
			DiodeArray[188].EnemyBullet = true;
			setPixelColor(188, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 188;
			break;
		case 2:
			if (enemyShootFirstDiode_3) {
				DiodeArray[163].EnemyBullet = true;
				setPixelColor(163, THEME);
				setPixelColor(163, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[188].FreeSpace = true;
				DiodeArray[188].EnemyBullet = false;
				setPixelColor(188, THEME);

				DiodeArray[163].EnemyBullet = true;
				setPixelColor(163, THEME);
				setPixelColor(163, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 163;
			break;
		case 3:
			if (enemyShootFirstDiode_3) {
				DiodeArray[156].EnemyBullet = true;
				setPixelColor(156, THEME);
				setPixelColor(156, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[163].FreeSpace = true;
				DiodeArray[163].EnemyBullet = false;
				setPixelColor(163, THEME);

				DiodeArray[156].EnemyBullet = true;
				setPixelColor(156, THEME);
				setPixelColor(156, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 156;
			break;
		case 4:
			if (enemyShootFirstDiode_3) {
				DiodeArray[131].EnemyBullet = true;
				setPixelColor(131, THEME);
				setPixelColor(131, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[156].FreeSpace = true;
				DiodeArray[156].EnemyBullet = false;
				setPixelColor(156, THEME);

				DiodeArray[131].EnemyBullet = true;
				setPixelColor(131, THEME);
				setPixelColor(131, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 131;
			break;
		case 5:
			if (enemyShootFirstDiode_3) {
				DiodeArray[124].EnemyBullet = true;
				setPixelColor(124, THEME);
				setPixelColor(124, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[131].FreeSpace = true;
				DiodeArray[131].EnemyBullet = false;
				setPixelColor(131, THEME);

				DiodeArray[124].EnemyBullet = true;
				setPixelColor(124, THEME);
				setPixelColor(124, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 124;
			break;
		case 6:
			if (enemyShootFirstDiode_3) {
				DiodeArray[99].EnemyBullet = true;
				setPixelColor(99, THEME);
				setPixelColor(99, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[124].FreeSpace = true;
				DiodeArray[124].EnemyBullet = false;
				setPixelColor(124, THEME);

				DiodeArray[99].EnemyBullet = true;
				setPixelColor(99, THEME);
				setPixelColor(99, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 99;
			break;
		case 7:
			if (enemyShootFirstDiode_3) {
				DiodeArray[92].EnemyBullet = true;
				setPixelColor(92, THEME);
				setPixelColor(92, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[99].FreeSpace = true;
				DiodeArray[99].EnemyBullet = false;
				setPixelColor(99, THEME);

				DiodeArray[92].EnemyBullet = true;
				setPixelColor(92, THEME);
				setPixelColor(92, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 92;
			break;
		case 8:
			DiodeArray[92].FreeSpace = true;
			DiodeArray[92].EnemyBullet = false;
			setPixelColor(92, THEME);

			DiodeArray[67].FreeSpace = false;
			DiodeArray[67].EnemyBullet = true;
			setPixelColor(67, THEME);
			setPixelColor(67, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 67;
			break;
		case 9:
			DiodeArray[67].FreeSpace = true;
			DiodeArray[67].EnemyBullet = false;
			setPixelColor(67, THEME);

			DiodeArray[60].FreeSpace = false;
			DiodeArray[60].EnemyBullet = true;
			setPixelColor(60, THEME);
			setPixelColor(60, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 60;
			break;
		case 10:
			DiodeArray[60].FreeSpace = true;
			DiodeArray[60].EnemyBullet = false;
			setPixelColor(60, THEME);

			DiodeArray[35].FreeSpace = false;
			DiodeArray[35].EnemyBullet = true;
			setPixelColor(35, THEME);
			setPixelColor(35, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 35;
			break;
		case 11:
			DiodeArray[35].FreeSpace = true;
			DiodeArray[35].EnemyBullet = false;
			setPixelColor(35, THEME);

			DiodeArray[28].FreeSpace = false;
			DiodeArray[28].EnemyBullet = true;
			setPixelColor(28, THEME);
			setPixelColor(28, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 28;
			break;
		case 12:
			DiodeArray[28].FreeSpace = true;
			DiodeArray[28].EnemyBullet = false;
			setPixelColor(28, THEME);

			DiodeArray[3].FreeSpace = false;
			DiodeArray[3].EnemyBullet = true;
			setPixelColor(3, THEME);
			setPixelColor(3, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 3;
			break;
		case 13:
			DiodeArray[3].FreeSpace = true;
			DiodeArray[3].EnemyBullet = false;
			setPixelColor(3, THEME);

			enemyShootFirstDiode_3 = true;
			enemyShootInit_3 = true;
			enemyActivateShoot_3 = false;
			break;
		default:
			break;
		}
		break;
	case 5:
		if (enemyShootInit_3) {
			switch (enemyDiodeStartShootID_3) {
			case 196:
				enemyDiodeShootRoute_3 = 1;

				DiodeArray[187].FreeSpace = false;
				DiodeArray[164].FreeSpace = false;
				DiodeArray[155].FreeSpace = false;
				DiodeArray[132].FreeSpace = false;
				DiodeArray[123].FreeSpace = false;
				DiodeArray[100].FreeSpace = false;
				break;
			case 187:
				enemyDiodeShootRoute_3 = 2;

				DiodeArray[164].FreeSpace = false;
				DiodeArray[155].FreeSpace = false;
				DiodeArray[132].FreeSpace = false;
				DiodeArray[123].FreeSpace = false;
				DiodeArray[100].FreeSpace = false;
				break;
			case 164:
				enemyDiodeShootRoute_3 = 3;

				DiodeArray[155].FreeSpace = false;
				DiodeArray[132].FreeSpace = false;
				DiodeArray[123].FreeSpace = false;
				DiodeArray[100].FreeSpace = false;
				break;
			case 155:
				enemyDiodeShootRoute_3 = 4;

				DiodeArray[132].FreeSpace = false;
				DiodeArray[123].FreeSpace = false;
				DiodeArray[100].FreeSpace = false;
				break;
			case 132:
				enemyDiodeShootRoute_3 = 5;

				DiodeArray[123].FreeSpace = false;
				DiodeArray[100].FreeSpace = false;
				break;
			case 123:
				enemyDiodeShootRoute_3 = 6;

				DiodeArray[100].FreeSpace = false;
				break;
			case 100:
				enemyDiodeShootRoute_3 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_3 = false;
		}
		switch (enemyDiodeShootRoute_3) {
		case 1:
			enemyShootFirstDiode_3 = false;
			DiodeArray[187].EnemyBullet = true;
			setPixelColor(187, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 187;
			break;
		case 2:
			if (enemyShootFirstDiode_3) {
				DiodeArray[164].EnemyBullet = true;
				setPixelColor(164, THEME);
				setPixelColor(164, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[187].FreeSpace = true;
				DiodeArray[187].EnemyBullet = false;
				setPixelColor(187, THEME);

				DiodeArray[164].EnemyBullet = true;
				setPixelColor(164, THEME);
				setPixelColor(164, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 164;
			break;
		case 3:
			if (enemyShootFirstDiode_3) {
				DiodeArray[155].EnemyBullet = true;
				setPixelColor(155, THEME);
				setPixelColor(155, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[164].FreeSpace = true;
				DiodeArray[164].EnemyBullet = false;
				setPixelColor(164, THEME);

				DiodeArray[155].EnemyBullet = true;
				setPixelColor(155, THEME);
				setPixelColor(155, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 155;
			break;
		case 4:
			if (enemyShootFirstDiode_3) {
				DiodeArray[132].EnemyBullet = true;
				setPixelColor(132, THEME);
				setPixelColor(132, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[155].FreeSpace = true;
				DiodeArray[155].EnemyBullet = false;
				setPixelColor(155, THEME);

				DiodeArray[132].EnemyBullet = true;
				setPixelColor(132, THEME);
				setPixelColor(132, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 132;
			break;
		case 5:
			if (enemyShootFirstDiode_3) {
				DiodeArray[123].EnemyBullet = true;
				setPixelColor(123, THEME);
				setPixelColor(123, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[132].FreeSpace = true;
				DiodeArray[132].EnemyBullet = false;
				setPixelColor(132, THEME);

				DiodeArray[123].EnemyBullet = true;
				setPixelColor(123, THEME);
				setPixelColor(123, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 123;
			break;
		case 6:
			if (enemyShootFirstDiode_3) {
				DiodeArray[100].EnemyBullet = true;
				setPixelColor(100, THEME);
				setPixelColor(100, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[123].FreeSpace = true;
				DiodeArray[123].EnemyBullet = false;
				setPixelColor(123, THEME);

				DiodeArray[100].EnemyBullet = true;
				setPixelColor(100, THEME);
				setPixelColor(100, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 100;
			break;
		case 7:
			if (enemyShootFirstDiode_3) {
				DiodeArray[91].EnemyBullet = true;
				setPixelColor(91, THEME);
				setPixelColor(91, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[100].FreeSpace = true;
				DiodeArray[100].EnemyBullet = false;
				setPixelColor(100, THEME);

				DiodeArray[91].EnemyBullet = true;
				setPixelColor(91, THEME);
				setPixelColor(91, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 91;
			break;
		case 8:
			DiodeArray[91].FreeSpace = true;
			DiodeArray[91].EnemyBullet = false;
			setPixelColor(91, THEME);

			DiodeArray[68].FreeSpace = false;
			DiodeArray[68].EnemyBullet = true;
			setPixelColor(68, THEME);
			setPixelColor(68, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 68;
			break;
		case 9:
			DiodeArray[68].FreeSpace = true;
			DiodeArray[68].EnemyBullet = false;
			setPixelColor(68, THEME);

			DiodeArray[59].FreeSpace = false;
			DiodeArray[59].EnemyBullet = true;
			setPixelColor(59, THEME);
			setPixelColor(59, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 59;
			break;
		case 10:
			DiodeArray[59].FreeSpace = true;
			DiodeArray[59].EnemyBullet = false;
			setPixelColor(59, THEME);

			DiodeArray[36].FreeSpace = false;
			DiodeArray[36].EnemyBullet = true;
			setPixelColor(36, THEME);
			setPixelColor(36, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 36;
			break;
		case 11:
			DiodeArray[36].FreeSpace = true;
			DiodeArray[36].EnemyBullet = false;
			setPixelColor(36, THEME);

			DiodeArray[27].FreeSpace = false;
			DiodeArray[27].EnemyBullet = true;
			setPixelColor(27, THEME);
			setPixelColor(27, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 27;
			break;
		case 12:
			DiodeArray[27].FreeSpace = true;
			DiodeArray[27].EnemyBullet = false;
			setPixelColor(27, THEME);

			DiodeArray[4].FreeSpace = false;
			DiodeArray[4].EnemyBullet = true;
			setPixelColor(4, THEME);
			setPixelColor(4, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 4;
			break;
		case 13:
			DiodeArray[4].FreeSpace = true;
			DiodeArray[4].EnemyBullet = false;
			setPixelColor(4, THEME);

			enemyShootFirstDiode_3 = true;
			enemyShootInit_3 = true;
			enemyActivateShoot_3 = false;
			break;
		default:
			break;
		}
		break;
	case 6:
		if (enemyShootInit_3) {
			switch (enemyDiodeStartShootID_3) {
			case 197:
				enemyDiodeShootRoute_3 = 1;

				DiodeArray[186].FreeSpace = false;
				DiodeArray[165].FreeSpace = false;
				DiodeArray[154].FreeSpace = false;
				DiodeArray[133].FreeSpace = false;
				DiodeArray[122].FreeSpace = false;
				DiodeArray[101].FreeSpace = false;
				break;
			case 186:
				enemyDiodeShootRoute_3 = 2;

				DiodeArray[165].FreeSpace = false;
				DiodeArray[154].FreeSpace = false;
				DiodeArray[133].FreeSpace = false;
				DiodeArray[122].FreeSpace = false;
				DiodeArray[101].FreeSpace = false;
				break;
			case 165:
				enemyDiodeShootRoute_3 = 3;

				DiodeArray[154].FreeSpace = false;
				DiodeArray[133].FreeSpace = false;
				DiodeArray[122].FreeSpace = false;
				DiodeArray[101].FreeSpace = false;
				break;
			case 154:
				enemyDiodeShootRoute_3 = 4;

				DiodeArray[133].FreeSpace = false;
				DiodeArray[122].FreeSpace = false;
				DiodeArray[101].FreeSpace = false;
				break;
			case 133:
				enemyDiodeShootRoute_3 = 5;

				DiodeArray[122].FreeSpace = false;
				DiodeArray[101].FreeSpace = false;
				break;
			case 122:
				enemyDiodeShootRoute_3 = 6;

				DiodeArray[101].FreeSpace = false;
				break;
			case 101:
				enemyDiodeShootRoute_3 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_3 = false;
		}
		switch (enemyDiodeShootRoute_3) {
		case 1:
			enemyShootFirstDiode_3 = false;
			DiodeArray[186].EnemyBullet = true;
			setPixelColor(186, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 186;
			break;
		case 2:
			if (enemyShootFirstDiode_3) {
				DiodeArray[165].EnemyBullet = true;
				setPixelColor(165, THEME);
				setPixelColor(165, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[186].FreeSpace = true;
				DiodeArray[186].EnemyBullet = false;
				setPixelColor(186, THEME);

				DiodeArray[165].EnemyBullet = true;
				setPixelColor(165, THEME);
				setPixelColor(165, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 165;
			break;
		case 3:
			if (enemyShootFirstDiode_3) {
				DiodeArray[154].EnemyBullet = true;
				setPixelColor(154, THEME);
				setPixelColor(154, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[165].FreeSpace = true;
				DiodeArray[165].EnemyBullet = false;
				setPixelColor(165, THEME);

				DiodeArray[154].EnemyBullet = true;
				setPixelColor(154, THEME);
				setPixelColor(154, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 154;
			break;
		case 4:
			if (enemyShootFirstDiode_3) {
				DiodeArray[133].EnemyBullet = true;
				setPixelColor(133, THEME);
				setPixelColor(133, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[154].FreeSpace = true;
				DiodeArray[154].EnemyBullet = false;
				setPixelColor(154, THEME);

				DiodeArray[133].EnemyBullet = true;
				setPixelColor(133, THEME);
				setPixelColor(133, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 133;
			break;
		case 5:
			if (enemyShootFirstDiode_3) {
				DiodeArray[122].EnemyBullet = true;
				setPixelColor(122, THEME);
				setPixelColor(122, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[133].FreeSpace = true;
				DiodeArray[133].EnemyBullet = false;
				setPixelColor(133, THEME);

				DiodeArray[122].EnemyBullet = true;
				setPixelColor(122, THEME);
				setPixelColor(122, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 122;
			break;
		case 6:
			if (enemyShootFirstDiode_3) {
				DiodeArray[101].EnemyBullet = true;
				setPixelColor(101, THEME);
				setPixelColor(101, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[122].FreeSpace = true;
				DiodeArray[122].EnemyBullet = false;
				setPixelColor(122, THEME);

				DiodeArray[101].EnemyBullet = true;
				setPixelColor(101, THEME);
				setPixelColor(101, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 101;
			break;
		case 7:
			if (enemyShootFirstDiode_3) {
				DiodeArray[90].EnemyBullet = true;
				setPixelColor(90, THEME);
				setPixelColor(90, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[101].FreeSpace = true;
				DiodeArray[101].EnemyBullet = false;
				setPixelColor(101, THEME);

				DiodeArray[90].EnemyBullet = true;
				setPixelColor(90, THEME);
				setPixelColor(90, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 90;
			break;
		case 8:
			DiodeArray[90].FreeSpace = true;
			DiodeArray[90].EnemyBullet = false;
			setPixelColor(90, THEME);

			DiodeArray[69].FreeSpace = false;
			DiodeArray[69].EnemyBullet = true;
			setPixelColor(69, THEME);
			setPixelColor(69, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 69;
			break;
		case 9:
			DiodeArray[69].FreeSpace = true;
			DiodeArray[69].EnemyBullet = false;
			setPixelColor(69, THEME);

			DiodeArray[58].FreeSpace = false;
			DiodeArray[58].EnemyBullet = true;
			setPixelColor(58, THEME);
			setPixelColor(58, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 58;
			break;
		case 10:
			DiodeArray[58].FreeSpace = true;
			DiodeArray[58].EnemyBullet = false;
			setPixelColor(58, THEME);

			DiodeArray[37].FreeSpace = false;
			DiodeArray[37].EnemyBullet = true;
			setPixelColor(37, THEME);
			setPixelColor(37, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 37;
			break;
		case 11:
			DiodeArray[37].FreeSpace = true;
			DiodeArray[37].EnemyBullet = false;
			setPixelColor(37, THEME);

			DiodeArray[26].FreeSpace = false;
			DiodeArray[26].EnemyBullet = true;
			setPixelColor(26, THEME);
			setPixelColor(26, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 26;
			break;
		case 12:
			DiodeArray[26].FreeSpace = true;
			DiodeArray[26].EnemyBullet = false;
			setPixelColor(26, THEME);

			DiodeArray[5].FreeSpace = false;
			DiodeArray[5].EnemyBullet = true;
			setPixelColor(5, THEME);
			setPixelColor(5, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 5;
			break;
		case 13:
			DiodeArray[5].FreeSpace = true;
			DiodeArray[5].EnemyBullet = false;
			setPixelColor(5, THEME);

			enemyShootFirstDiode_3 = true;
			enemyShootInit_3 = true;
			enemyActivateShoot_3 = false;
			break;
		default:
			break;
		}
		break;
	case 7:
		if (enemyShootInit_3) {
			switch (enemyDiodeStartShootID_3) {
			case 198:
				enemyDiodeShootRoute_3 = 1;

				DiodeArray[185].FreeSpace = false;
				DiodeArray[166].FreeSpace = false;
				DiodeArray[153].FreeSpace = false;
				DiodeArray[134].FreeSpace = false;
				DiodeArray[121].FreeSpace = false;
				DiodeArray[102].FreeSpace = false;
				break;
			case 185:
				enemyDiodeShootRoute_3 = 2;

				DiodeArray[166].FreeSpace = false;
				DiodeArray[153].FreeSpace = false;
				DiodeArray[134].FreeSpace = false;
				DiodeArray[121].FreeSpace = false;
				DiodeArray[102].FreeSpace = false;
				break;
			case 166:
				enemyDiodeShootRoute_3 = 3;

				DiodeArray[153].FreeSpace = false;
				DiodeArray[134].FreeSpace = false;
				DiodeArray[121].FreeSpace = false;
				DiodeArray[102].FreeSpace = false;
				break;
			case 153:
				enemyDiodeShootRoute_3 = 4;

				DiodeArray[134].FreeSpace = false;
				DiodeArray[121].FreeSpace = false;
				DiodeArray[102].FreeSpace = false;
				break;
			case 134:
				enemyDiodeShootRoute_3 = 5;

				DiodeArray[121].FreeSpace = false;
				DiodeArray[102].FreeSpace = false;
				break;
			case 121:
				enemyDiodeShootRoute_3 = 6;

				DiodeArray[102].FreeSpace = false;
				break;
			case 102:
				enemyDiodeShootRoute_3 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_3 = false;
		}
		switch (enemyDiodeShootRoute_3) {
		case 1:
			enemyShootFirstDiode_3 = false;
			DiodeArray[185].EnemyBullet = true;
			setPixelColor(185, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 185;
			break;
		case 2:
			if (enemyShootFirstDiode_3) {
				DiodeArray[166].EnemyBullet = true;
				setPixelColor(166, THEME);
				setPixelColor(166, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[185].FreeSpace = true;
				DiodeArray[185].EnemyBullet = false;
				setPixelColor(185, THEME);

				DiodeArray[166].EnemyBullet = true;
				setPixelColor(166, THEME);
				setPixelColor(166, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 166;
			break;
		case 3:
			if (enemyShootFirstDiode_3) {
				DiodeArray[153].EnemyBullet = true;
				setPixelColor(153, THEME);
				setPixelColor(153, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[166].FreeSpace = true;
				DiodeArray[166].EnemyBullet = false;
				setPixelColor(166, THEME);

				DiodeArray[153].EnemyBullet = true;
				setPixelColor(153, THEME);
				setPixelColor(153, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 153;
			break;
		case 4:
			if (enemyShootFirstDiode_3) {
				DiodeArray[134].EnemyBullet = true;
				setPixelColor(134, THEME);
				setPixelColor(134, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[153].FreeSpace = true;
				DiodeArray[153].EnemyBullet = false;
				setPixelColor(153, THEME);

				DiodeArray[134].EnemyBullet = true;
				setPixelColor(134, THEME);
				setPixelColor(134, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 134;
			break;
		case 5:
			if (enemyShootFirstDiode_3) {
				DiodeArray[121].EnemyBullet = true;
				setPixelColor(121, THEME);
				setPixelColor(121, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[134].FreeSpace = true;
				DiodeArray[134].EnemyBullet = false;
				setPixelColor(134, THEME);

				DiodeArray[121].EnemyBullet = true;
				setPixelColor(121, THEME);
				setPixelColor(121, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 121;
			break;
		case 6:
			if (enemyShootFirstDiode_3) {
				DiodeArray[102].EnemyBullet = true;
				setPixelColor(102, THEME);
				setPixelColor(102, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[121].FreeSpace = true;
				DiodeArray[121].EnemyBullet = false;
				setPixelColor(121, THEME);

				DiodeArray[102].EnemyBullet = true;
				setPixelColor(102, THEME);
				setPixelColor(102, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 102;
			break;
		case 7:
			if (enemyShootFirstDiode_3) {
				DiodeArray[89].EnemyBullet = true;
				setPixelColor(89, THEME);
				setPixelColor(89, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[102].FreeSpace = true;
				DiodeArray[102].EnemyBullet = false;
				setPixelColor(102, THEME);

				DiodeArray[89].EnemyBullet = true;
				setPixelColor(89, THEME);
				setPixelColor(89, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 89;
			break;
		case 8:
			DiodeArray[89].FreeSpace = true;
			DiodeArray[89].EnemyBullet = false;
			setPixelColor(89, THEME);

			DiodeArray[70].FreeSpace = false;
			DiodeArray[70].EnemyBullet = true;
			setPixelColor(70, THEME);
			setPixelColor(70, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 70;
			break;
		case 9:
			DiodeArray[70].FreeSpace = true;
			DiodeArray[70].EnemyBullet = false;
			setPixelColor(70, THEME);

			DiodeArray[57].FreeSpace = false;
			DiodeArray[57].EnemyBullet = true;
			setPixelColor(57, THEME);
			setPixelColor(57, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 57;
			break;
		case 10:
			DiodeArray[57].FreeSpace = true;
			DiodeArray[57].EnemyBullet = false;
			setPixelColor(57, THEME);

			DiodeArray[38].FreeSpace = false;
			DiodeArray[38].EnemyBullet = true;
			setPixelColor(38, THEME);
			setPixelColor(38, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 38;
			break;
		case 11:
			DiodeArray[38].FreeSpace = true;
			DiodeArray[38].EnemyBullet = false;
			setPixelColor(38, THEME);

			DiodeArray[25].FreeSpace = false;
			DiodeArray[25].EnemyBullet = true;
			setPixelColor(25, THEME);
			setPixelColor(25, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 25;
			break;
		case 12:
			DiodeArray[25].FreeSpace = true;
			DiodeArray[25].EnemyBullet = false;
			setPixelColor(25, THEME);

			DiodeArray[6].FreeSpace = false;
			DiodeArray[6].EnemyBullet = true;
			setPixelColor(6, THEME);
			setPixelColor(6, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 6;
			break;
		case 13:
			DiodeArray[6].FreeSpace = true;
			DiodeArray[6].EnemyBullet = false;
			setPixelColor(6, THEME);

			enemyShootFirstDiode_3 = true;
			enemyShootInit_3 = true;
			enemyActivateShoot_3 = false;
			break;
		default:
			break;
		}
		break;
	case 8:
		if (enemyShootInit_3) {
			switch (enemyDiodeStartShootID_3) {
			case 199:
				enemyDiodeShootRoute_3 = 1;

				DiodeArray[184].FreeSpace = false;
				DiodeArray[167].FreeSpace = false;
				DiodeArray[152].FreeSpace = false;
				DiodeArray[135].FreeSpace = false;
				DiodeArray[120].FreeSpace = false;
				DiodeArray[103].FreeSpace = false;
				break;
			case 184:
				enemyDiodeShootRoute_3 = 2;

				DiodeArray[167].FreeSpace = false;
				DiodeArray[152].FreeSpace = false;
				DiodeArray[135].FreeSpace = false;
				DiodeArray[120].FreeSpace = false;
				DiodeArray[103].FreeSpace = false;
				break;
			case 167:
				enemyDiodeShootRoute_3 = 3;

				DiodeArray[152].FreeSpace = false;
				DiodeArray[135].FreeSpace = false;
				DiodeArray[120].FreeSpace = false;
				DiodeArray[103].FreeSpace = false;
				break;
			case 152:
				enemyDiodeShootRoute_3 = 4;

				DiodeArray[135].FreeSpace = false;
				DiodeArray[120].FreeSpace = false;
				DiodeArray[103].FreeSpace = false;
				break;
			case 135:
				enemyDiodeShootRoute_3 = 5;

				DiodeArray[120].FreeSpace = false;
				DiodeArray[103].FreeSpace = false;
				break;
			case 120:
				enemyDiodeShootRoute_3 = 6;

				DiodeArray[103].FreeSpace = false;
				break;
			case 103:
				enemyDiodeShootRoute_3 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_3 = false;
		}
		switch (enemyDiodeShootRoute_3) {
		case 1:
			enemyShootFirstDiode_3 = false;
			DiodeArray[184].EnemyBullet = true;
			setPixelColor(184, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 184;
			break;
		case 2:
			if (enemyShootFirstDiode_3) {
				DiodeArray[167].EnemyBullet = true;
				setPixelColor(167, THEME);
				setPixelColor(167, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[184].FreeSpace = true;
				DiodeArray[184].EnemyBullet = false;
				setPixelColor(184, THEME);

				DiodeArray[167].EnemyBullet = true;
				setPixelColor(167, THEME);
				setPixelColor(167, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 167;
			break;
		case 3:
			if (enemyShootFirstDiode_3) {
				DiodeArray[152].EnemyBullet = true;
				setPixelColor(152, THEME);
				setPixelColor(152, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[167].FreeSpace = true;
				DiodeArray[167].EnemyBullet = false;
				setPixelColor(167, THEME);

				DiodeArray[152].EnemyBullet = true;
				setPixelColor(152, THEME);
				setPixelColor(152, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 152;
			break;
		case 4:
			if (enemyShootFirstDiode_3) {
				DiodeArray[135].EnemyBullet = true;
				setPixelColor(135, THEME);
				setPixelColor(135, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[152].FreeSpace = true;
				DiodeArray[152].EnemyBullet = false;
				setPixelColor(152, THEME);

				DiodeArray[135].EnemyBullet = true;
				setPixelColor(135, THEME);
				setPixelColor(135, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 135;
			break;
		case 5:
			if (enemyShootFirstDiode_3) {
				DiodeArray[120].EnemyBullet = true;
				setPixelColor(120, THEME);
				setPixelColor(120, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[135].FreeSpace = true;
				DiodeArray[135].EnemyBullet = false;
				setPixelColor(135, THEME);

				DiodeArray[120].EnemyBullet = true;
				setPixelColor(120, THEME);
				setPixelColor(120, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 120;
			break;
		case 6:
			if (enemyShootFirstDiode_3) {
				DiodeArray[103].EnemyBullet = true;
				setPixelColor(103, THEME);
				setPixelColor(103, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[120].FreeSpace = true;
				DiodeArray[120].EnemyBullet = false;
				setPixelColor(120, THEME);

				DiodeArray[103].EnemyBullet = true;
				setPixelColor(103, THEME);
				setPixelColor(103, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 103;
			break;
		case 7:
			if (enemyShootFirstDiode_3) {
				DiodeArray[88].EnemyBullet = true;
				setPixelColor(88, THEME);
				setPixelColor(88, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[103].FreeSpace = true;
				DiodeArray[103].EnemyBullet = false;
				setPixelColor(103, THEME);

				DiodeArray[88].EnemyBullet = true;
				setPixelColor(88, THEME);
				setPixelColor(88, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 88;
			break;
		case 8:
			DiodeArray[88].FreeSpace = true;
			DiodeArray[88].EnemyBullet = false;
			setPixelColor(88, THEME);

			DiodeArray[71].FreeSpace = false;
			DiodeArray[71].EnemyBullet = true;
			setPixelColor(71, THEME);
			setPixelColor(71, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 71;
			break;
		case 9:
			DiodeArray[71].FreeSpace = true;
			DiodeArray[71].EnemyBullet = false;
			setPixelColor(71, THEME);

			DiodeArray[56].FreeSpace = false;
			DiodeArray[56].EnemyBullet = true;
			setPixelColor(56, THEME);
			setPixelColor(56, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 56;
			break;
		case 10:
			DiodeArray[56].FreeSpace = true;
			DiodeArray[56].EnemyBullet = false;
			setPixelColor(56, THEME);

			DiodeArray[39].FreeSpace = false;
			DiodeArray[39].EnemyBullet = true;
			setPixelColor(39, THEME);
			setPixelColor(39, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 39;
			break;
		case 11:
			DiodeArray[39].FreeSpace = true;
			DiodeArray[39].EnemyBullet = false;
			setPixelColor(39, THEME);

			DiodeArray[24].FreeSpace = false;
			DiodeArray[24].EnemyBullet = true;
			setPixelColor(24, THEME);
			setPixelColor(24, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 24;
			break;
		case 12:
			DiodeArray[24].FreeSpace = true;
			DiodeArray[24].EnemyBullet = false;
			setPixelColor(24, THEME);

			DiodeArray[7].FreeSpace = false;
			DiodeArray[7].EnemyBullet = true;
			setPixelColor(7, THEME);
			setPixelColor(7, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 7;
			break;
		case 13:
			DiodeArray[7].FreeSpace = true;
			DiodeArray[7].EnemyBullet = false;
			setPixelColor(7, THEME);

			enemyShootFirstDiode_3 = true;
			enemyShootInit_3 = true;
			enemyActivateShoot_3 = false;
			break;
		default:
			break;
		}
		break;
	case 9:
		if (enemyShootInit_3) {
			switch (enemyDiodeStartShootID_3) {
			case 200:
				enemyDiodeShootRoute_3 = 1;

				DiodeArray[183].FreeSpace = false;
				DiodeArray[168].FreeSpace = false;
				DiodeArray[151].FreeSpace = false;
				DiodeArray[136].FreeSpace = false;
				DiodeArray[119].FreeSpace = false;
				DiodeArray[104].FreeSpace = false;
				break;
			case 183:
				enemyDiodeShootRoute_3 = 2;

				DiodeArray[168].FreeSpace = false;
				DiodeArray[151].FreeSpace = false;
				DiodeArray[136].FreeSpace = false;
				DiodeArray[119].FreeSpace = false;
				DiodeArray[104].FreeSpace = false;
				break;
			case 168:
				enemyDiodeShootRoute_3 = 3;

				DiodeArray[151].FreeSpace = false;
				DiodeArray[136].FreeSpace = false;
				DiodeArray[119].FreeSpace = false;
				DiodeArray[104].FreeSpace = false;
				break;
			case 151:
				enemyDiodeShootRoute_3 = 4;

				DiodeArray[136].FreeSpace = false;
				DiodeArray[119].FreeSpace = false;
				DiodeArray[104].FreeSpace = false;
				break;
			case 136:
				enemyDiodeShootRoute_3 = 5;

				DiodeArray[119].FreeSpace = false;
				DiodeArray[104].FreeSpace = false;
				break;
			case 119:
				enemyDiodeShootRoute_3 = 6;

				DiodeArray[104].FreeSpace = false;
				break;
			case 104:
				enemyDiodeShootRoute_3 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_3 = false;
		}
		switch (enemyDiodeShootRoute_3) {
		case 1:
			enemyShootFirstDiode_3 = false;
			DiodeArray[183].EnemyBullet = true;
			setPixelColor(183, ENEMY_BULLET);
			break;
		case 2:
			if (enemyShootFirstDiode_3) {
				DiodeArray[168].EnemyBullet = true;
				setPixelColor(168, THEME);
				setPixelColor(168, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[183].FreeSpace = true;
				DiodeArray[183].EnemyBullet = false;
				setPixelColor(183, THEME);

				DiodeArray[168].EnemyBullet = true;
				setPixelColor(168, THEME);
				setPixelColor(168, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 168;
			break;
		case 3:
			if (enemyShootFirstDiode_3) {
				DiodeArray[151].EnemyBullet = true;
				setPixelColor(151, THEME);
				setPixelColor(151, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[168].FreeSpace = true;
				DiodeArray[168].EnemyBullet = false;
				setPixelColor(168, THEME);

				DiodeArray[151].EnemyBullet = true;
				setPixelColor(151, THEME);
				setPixelColor(151, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 151;
			break;
		case 4:
			if (enemyShootFirstDiode_3) {
				DiodeArray[136].EnemyBullet = true;
				setPixelColor(136, THEME);
				setPixelColor(136, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[151].FreeSpace = true;
				DiodeArray[151].EnemyBullet = false;
				setPixelColor(151, THEME);

				DiodeArray[136].EnemyBullet = true;
				setPixelColor(136, THEME);
				setPixelColor(136, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 136;
			break;
		case 5:
			if (enemyShootFirstDiode_3) {
				DiodeArray[119].EnemyBullet = true;
				setPixelColor(119, THEME);
				setPixelColor(119, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[136].FreeSpace = true;
				DiodeArray[136].EnemyBullet = false;
				setPixelColor(136, THEME);

				DiodeArray[119].EnemyBullet = true;
				setPixelColor(119, THEME);
				setPixelColor(119, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 119;
			break;
		case 6:
			if (enemyShootFirstDiode_3) {
				DiodeArray[104].EnemyBullet = true;
				setPixelColor(104, THEME);
				setPixelColor(104, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[119].FreeSpace = true;
				DiodeArray[119].EnemyBullet = false;
				setPixelColor(119, THEME);

				DiodeArray[104].EnemyBullet = true;
				setPixelColor(104, THEME);
				setPixelColor(104, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 104;
			break;
		case 7:
			if (enemyShootFirstDiode_3) {
				DiodeArray[87].EnemyBullet = true;
				setPixelColor(87, THEME);
				setPixelColor(87, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[104].FreeSpace = true;
				DiodeArray[104].EnemyBullet = false;
				setPixelColor(104, THEME);

				DiodeArray[87].EnemyBullet = true;
				setPixelColor(87, THEME);
				setPixelColor(87, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 87;
			break;
		case 8:
			DiodeArray[87].FreeSpace = true;
			DiodeArray[87].EnemyBullet = false;
			setPixelColor(87, THEME);

			DiodeArray[72].FreeSpace = false;
			DiodeArray[72].EnemyBullet = true;
			setPixelColor(72, THEME);
			setPixelColor(72, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 72;
			break;
		case 9:
			DiodeArray[72].FreeSpace = true;
			DiodeArray[72].EnemyBullet = false;
			setPixelColor(72, THEME);

			DiodeArray[55].FreeSpace = false;
			DiodeArray[55].EnemyBullet = true;
			setPixelColor(55, THEME);
			setPixelColor(55, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 55;
			break;
		case 10:
			DiodeArray[55].FreeSpace = true;
			DiodeArray[55].EnemyBullet = false;
			setPixelColor(55, THEME);

			DiodeArray[40].FreeSpace = false;
			DiodeArray[40].EnemyBullet = true;
			setPixelColor(40, THEME);
			setPixelColor(40, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 40;
			break;
		case 11:
			DiodeArray[40].FreeSpace = true;
			DiodeArray[40].EnemyBullet = false;
			setPixelColor(40, THEME);

			DiodeArray[23].FreeSpace = false;
			DiodeArray[23].EnemyBullet = true;
			setPixelColor(23, THEME);
			setPixelColor(23, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 23;
			break;
		case 12:
			DiodeArray[23].FreeSpace = true;
			DiodeArray[23].EnemyBullet = false;
			setPixelColor(23, THEME);

			DiodeArray[8].FreeSpace = false;
			DiodeArray[8].EnemyBullet = true;
			setPixelColor(8, THEME);
			setPixelColor(8, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 8;
			break;
		case 13:
			DiodeArray[8].FreeSpace = true;
			DiodeArray[8].EnemyBullet = false;
			setPixelColor(8, THEME);

			enemyShootFirstDiode_3 = true;
			enemyShootInit_3 = true;
			enemyActivateShoot_3 = false;
			break;
		default:
			break;
		}
		break;
	case 10:
		if (enemyShootInit_3) {
			switch (enemyDiodeStartShootID_3) {
			case 201:
				enemyDiodeShootRoute_3 = 1;

				DiodeArray[182].FreeSpace = false;
				DiodeArray[169].FreeSpace = false;
				DiodeArray[150].FreeSpace = false;
				DiodeArray[137].FreeSpace = false;
				DiodeArray[118].FreeSpace = false;
				DiodeArray[105].FreeSpace = false;
				break;
			case 182:
				enemyDiodeShootRoute_3 = 2;

				DiodeArray[169].FreeSpace = false;
				DiodeArray[150].FreeSpace = false;
				DiodeArray[137].FreeSpace = false;
				DiodeArray[118].FreeSpace = false;
				DiodeArray[105].FreeSpace = false;
				break;
			case 169:
				enemyDiodeShootRoute_3 = 3;

				DiodeArray[150].FreeSpace = false;
				DiodeArray[137].FreeSpace = false;
				DiodeArray[118].FreeSpace = false;
				DiodeArray[105].FreeSpace = false;
				break;
			case 150:
				enemyDiodeShootRoute_3 = 4;

				DiodeArray[137].FreeSpace = false;
				DiodeArray[118].FreeSpace = false;
				DiodeArray[105].FreeSpace = false;
				break;
			case 137:
				enemyDiodeShootRoute_3 = 5;

				DiodeArray[118].FreeSpace = false;
				DiodeArray[105].FreeSpace = false;
				break;
			case 118:
				enemyDiodeShootRoute_3 = 6;

				DiodeArray[105].FreeSpace = false;
				break;
			case 105:
				enemyDiodeShootRoute_3 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_3 = false;
		}
		switch (enemyDiodeShootRoute_3) {
		case 1:
			enemyShootFirstDiode_3 = false;
			DiodeArray[182].EnemyBullet = true;
			setPixelColor(182, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 182;
			break;
		case 2:
			if (enemyShootFirstDiode_3) {
				DiodeArray[169].EnemyBullet = true;
				setPixelColor(169, THEME);
				setPixelColor(169, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[182].FreeSpace = true;
				DiodeArray[182].EnemyBullet = false;
				setPixelColor(182, THEME);

				DiodeArray[169].EnemyBullet = true;
				setPixelColor(169, THEME);
				setPixelColor(169, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 169;
			break;
		case 3:
			if (enemyShootFirstDiode_3) {
				DiodeArray[150].EnemyBullet = true;
				setPixelColor(150, THEME);
				setPixelColor(150, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[169].FreeSpace = true;
				DiodeArray[169].EnemyBullet = false;
				setPixelColor(169, THEME);

				DiodeArray[150].EnemyBullet = true;
				setPixelColor(150, THEME);
				setPixelColor(150, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 150;
			break;
		case 4:
			if (enemyShootFirstDiode_3) {
				DiodeArray[137].EnemyBullet = true;
				setPixelColor(137, THEME);
				setPixelColor(137, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[150].FreeSpace = true;
				DiodeArray[150].EnemyBullet = false;
				setPixelColor(150, THEME);

				DiodeArray[137].EnemyBullet = true;
				setPixelColor(137, THEME);
				setPixelColor(137, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 137;
			break;
		case 5:
			if (enemyShootFirstDiode_3) {
				DiodeArray[118].EnemyBullet = true;
				setPixelColor(118, THEME);
				setPixelColor(118, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[137].FreeSpace = true;
				DiodeArray[137].EnemyBullet = false;
				setPixelColor(137, THEME);

				DiodeArray[118].EnemyBullet = true;
				setPixelColor(118, THEME);
				setPixelColor(118, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 118;
			break;
		case 6:
			if (enemyShootFirstDiode_3) {
				DiodeArray[105].EnemyBullet = true;
				setPixelColor(105, THEME);
				setPixelColor(105, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[118].FreeSpace = true;
				DiodeArray[118].EnemyBullet = false;
				setPixelColor(118, THEME);

				DiodeArray[105].EnemyBullet = true;
				setPixelColor(105, THEME);
				setPixelColor(105, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 105;
			break;
		case 7:
			if (enemyShootFirstDiode_3) {
				DiodeArray[86].EnemyBullet = true;
				setPixelColor(86, THEME);
				setPixelColor(86, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[105].FreeSpace = true;
				DiodeArray[105].EnemyBullet = false;
				setPixelColor(105, THEME);

				DiodeArray[86].EnemyBullet = true;
				setPixelColor(86, THEME);
				setPixelColor(86, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 86;
			break;
		case 8:
			DiodeArray[86].FreeSpace = true;
			DiodeArray[86].EnemyBullet = false;
			setPixelColor(86, THEME);

			DiodeArray[73].FreeSpace = false;
			DiodeArray[73].EnemyBullet = true;
			setPixelColor(73, THEME);
			setPixelColor(73, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 73;
			break;
		case 9:
			DiodeArray[73].FreeSpace = true;
			DiodeArray[73].EnemyBullet = false;
			setPixelColor(73, THEME);

			DiodeArray[54].FreeSpace = false;
			DiodeArray[54].EnemyBullet = true;
			setPixelColor(54, THEME);
			setPixelColor(54, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 54;
			break;
		case 10:
			DiodeArray[54].FreeSpace = true;
			DiodeArray[54].EnemyBullet = false;
			setPixelColor(54, THEME);

			DiodeArray[41].FreeSpace = false;
			DiodeArray[41].EnemyBullet = true;
			setPixelColor(41, THEME);
			setPixelColor(41, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 41;
			break;
		case 11:
			DiodeArray[41].FreeSpace = true;
			DiodeArray[41].EnemyBullet = false;
			setPixelColor(41, THEME);

			DiodeArray[22].FreeSpace = false;
			DiodeArray[22].EnemyBullet = true;
			setPixelColor(22, THEME);
			setPixelColor(22, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 22;
			break;
		case 12:
			DiodeArray[22].FreeSpace = true;
			DiodeArray[22].EnemyBullet = false;
			setPixelColor(22, THEME);

			DiodeArray[9].FreeSpace = false;
			DiodeArray[9].EnemyBullet = true;
			setPixelColor(9, THEME);
			setPixelColor(9, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 9;
			break;
		case 13:
			DiodeArray[9].FreeSpace = true;
			DiodeArray[9].EnemyBullet = false;
			setPixelColor(9, THEME);

			enemyShootFirstDiode_3 = true;
			enemyShootInit_3 = true;
			enemyActivateShoot_3 = false;
			break;
		default:
			break;
		}
		break;
	case 11:
		if (enemyShootInit_3) {
			switch (enemyDiodeStartShootID_3) {
			case 202:
				enemyDiodeShootRoute_3 = 1;

				DiodeArray[181].FreeSpace = false;
				DiodeArray[170].FreeSpace = false;
				DiodeArray[149].FreeSpace = false;
				DiodeArray[138].FreeSpace = false;
				DiodeArray[117].FreeSpace = false;
				DiodeArray[106].FreeSpace = false;
				break;
			case 181:
				enemyDiodeShootRoute_3 = 2;

				DiodeArray[170].FreeSpace = false;
				DiodeArray[149].FreeSpace = false;
				DiodeArray[138].FreeSpace = false;
				DiodeArray[117].FreeSpace = false;
				DiodeArray[106].FreeSpace = false;
				break;
			case 170:
				enemyDiodeShootRoute_3 = 3;

				DiodeArray[149].FreeSpace = false;
				DiodeArray[138].FreeSpace = false;
				DiodeArray[117].FreeSpace = false;
				DiodeArray[106].FreeSpace = false;
				break;
			case 149:
				enemyDiodeShootRoute_3 = 4;

				DiodeArray[138].FreeSpace = false;
				DiodeArray[117].FreeSpace = false;
				DiodeArray[106].FreeSpace = false;
				break;
			case 138:
				enemyDiodeShootRoute_3 = 5;

				DiodeArray[117].FreeSpace = false;
				DiodeArray[106].FreeSpace = false;
				break;
			case 117:
				enemyDiodeShootRoute_3 = 6;

				DiodeArray[106].FreeSpace = false;
				break;
			case 106:
				enemyDiodeShootRoute_3 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_3 = false;
		}
		switch (enemyDiodeShootRoute_3) {
		case 1:
			enemyShootFirstDiode_3 = false;
			DiodeArray[181].EnemyBullet = true;
			setPixelColor(181, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 181;
			break;
		case 2:
			if (enemyShootFirstDiode_3) {
				DiodeArray[170].EnemyBullet = true;
				setPixelColor(170, THEME);
				setPixelColor(170, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[181].FreeSpace = true;
				DiodeArray[181].EnemyBullet = false;
				setPixelColor(181, THEME);

				DiodeArray[170].EnemyBullet = true;
				setPixelColor(170, THEME);
				setPixelColor(170, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 170;
			break;
		case 3:
			if (enemyShootFirstDiode_3) {
				DiodeArray[149].EnemyBullet = true;
				setPixelColor(149, THEME);
				setPixelColor(149, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[170].FreeSpace = true;
				DiodeArray[170].EnemyBullet = false;
				setPixelColor(170, THEME);

				DiodeArray[149].EnemyBullet = true;
				setPixelColor(149, THEME);
				setPixelColor(149, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 149;
			break;
		case 4:
			if (enemyShootFirstDiode_3) {
				DiodeArray[138].EnemyBullet = true;
				setPixelColor(138, THEME);
				setPixelColor(138, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[149].FreeSpace = true;
				DiodeArray[149].EnemyBullet = false;
				setPixelColor(149, THEME);

				DiodeArray[138].EnemyBullet = true;
				setPixelColor(138, THEME);
				setPixelColor(138, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 138;
			break;
		case 5:
			if (enemyShootFirstDiode_3) {
				DiodeArray[117].EnemyBullet = true;
				setPixelColor(117, THEME);
				setPixelColor(117, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[138].FreeSpace = true;
				DiodeArray[138].EnemyBullet = false;
				setPixelColor(138, THEME);

				DiodeArray[117].EnemyBullet = true;
				setPixelColor(117, THEME);
				setPixelColor(117, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 117;
			break;
		case 6:
			if (enemyShootFirstDiode_3) {
				DiodeArray[106].EnemyBullet = true;
				setPixelColor(106, THEME);
				setPixelColor(106, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[117].FreeSpace = true;
				DiodeArray[117].EnemyBullet = false;
				setPixelColor(117, THEME);

				DiodeArray[106].EnemyBullet = true;
				setPixelColor(106, THEME);
				setPixelColor(106, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 106;
			break;
		case 7:
			if (enemyShootFirstDiode_3) {
				DiodeArray[85].EnemyBullet = true;
				setPixelColor(85, THEME);
				setPixelColor(85, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[106].FreeSpace = true;
				DiodeArray[106].EnemyBullet = false;
				setPixelColor(106, THEME);

				DiodeArray[85].EnemyBullet = true;
				setPixelColor(85, THEME);
				setPixelColor(85, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 85;
			break;
		case 8:
			DiodeArray[85].FreeSpace = true;
			DiodeArray[85].EnemyBullet = false;
			setPixelColor(85, THEME);

			DiodeArray[74].FreeSpace = false;
			DiodeArray[74].EnemyBullet = true;
			setPixelColor(74, THEME);
			setPixelColor(74, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 74;
			break;
		case 9:
			DiodeArray[74].FreeSpace = true;
			DiodeArray[74].EnemyBullet = false;
			setPixelColor(74, THEME);

			DiodeArray[53].FreeSpace = false;
			DiodeArray[53].EnemyBullet = true;
			setPixelColor(53, THEME);
			setPixelColor(53, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 53;
			break;
		case 10:
			DiodeArray[53].FreeSpace = true;
			DiodeArray[53].EnemyBullet = false;
			setPixelColor(53, THEME);

			DiodeArray[42].FreeSpace = false;
			DiodeArray[42].EnemyBullet = true;
			setPixelColor(42, THEME);
			setPixelColor(42, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 42;
			break;
		case 11:
			DiodeArray[42].FreeSpace = true;
			DiodeArray[42].EnemyBullet = false;
			setPixelColor(42, THEME);

			DiodeArray[21].FreeSpace = false;
			DiodeArray[21].EnemyBullet = true;
			setPixelColor(21, THEME);
			setPixelColor(21, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 21;
			break;
		case 12:
			DiodeArray[21].FreeSpace = true;
			DiodeArray[21].EnemyBullet = false;
			setPixelColor(21, THEME);

			DiodeArray[10].FreeSpace = false;
			DiodeArray[10].EnemyBullet = true;
			setPixelColor(10, THEME);
			setPixelColor(10, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 10;
			break;
		case 13:
			DiodeArray[10].FreeSpace = true;
			DiodeArray[10].EnemyBullet = false;
			setPixelColor(10, THEME);

			enemyShootFirstDiode_3 = true;
			enemyShootInit_3 = true;
			enemyActivateShoot_3 = false;
			break;
		default:
			break;
		}
		break;
	case 12:
		if (enemyShootInit_3) {
			switch (enemyDiodeStartShootID_3) {
			case 203:
				enemyDiodeShootRoute_3 = 1;

				DiodeArray[180].FreeSpace = false;
				DiodeArray[171].FreeSpace = false;
				DiodeArray[148].FreeSpace = false;
				DiodeArray[139].FreeSpace = false;
				DiodeArray[116].FreeSpace = false;
				DiodeArray[107].FreeSpace = false;
				break;
			case 180:
				enemyDiodeShootRoute_3 = 2;

				DiodeArray[171].FreeSpace = false;
				DiodeArray[148].FreeSpace = false;
				DiodeArray[139].FreeSpace = false;
				DiodeArray[116].FreeSpace = false;
				DiodeArray[107].FreeSpace = false;
				break;
			case 171:
				enemyDiodeShootRoute_3 = 3;

				DiodeArray[148].FreeSpace = false;
				DiodeArray[139].FreeSpace = false;
				DiodeArray[116].FreeSpace = false;
				DiodeArray[107].FreeSpace = false;
				break;
			case 148:
				enemyDiodeShootRoute_3 = 4;

				DiodeArray[139].FreeSpace = false;
				DiodeArray[116].FreeSpace = false;
				DiodeArray[107].FreeSpace = false;
				break;
			case 139:
				enemyDiodeShootRoute_3 = 5;

				DiodeArray[116].FreeSpace = false;
				DiodeArray[107].FreeSpace = false;
				break;
			case 116:
				enemyDiodeShootRoute_3 = 6;

				DiodeArray[107].FreeSpace = false;
				break;
			case 107:
				enemyDiodeShootRoute_3 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_3 = false;
		}
		switch (enemyDiodeShootRoute_3) {
		case 1:
			enemyShootFirstDiode_3 = false;
			DiodeArray[180].EnemyBullet = true;
			setPixelColor(180, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 180;
			break;
		case 2:
			if (enemyShootFirstDiode_3) {
				DiodeArray[171].EnemyBullet = true;
				setPixelColor(171, THEME);
				setPixelColor(171, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[180].FreeSpace = true;
				DiodeArray[180].EnemyBullet = false;
				setPixelColor(180, THEME);

				DiodeArray[171].EnemyBullet = true;
				setPixelColor(171, THEME);
				setPixelColor(171, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 171;
			break;
		case 3:
			if (enemyShootFirstDiode_3) {
				DiodeArray[148].EnemyBullet = true;
				setPixelColor(148, THEME);
				setPixelColor(148, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[171].FreeSpace = true;
				DiodeArray[171].EnemyBullet = false;
				setPixelColor(171, THEME);

				DiodeArray[148].EnemyBullet = true;
				setPixelColor(148, THEME);
				setPixelColor(148, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 148;
			break;
		case 4:
			if (enemyShootFirstDiode_3) {
				DiodeArray[139].EnemyBullet = true;
				setPixelColor(139, THEME);
				setPixelColor(139, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[148].FreeSpace = true;
				DiodeArray[148].EnemyBullet = false;
				setPixelColor(148, THEME);

				DiodeArray[139].EnemyBullet = true;
				setPixelColor(139, THEME);
				setPixelColor(139, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 139;
			break;
		case 5:
			if (enemyShootFirstDiode_3) {
				DiodeArray[116].EnemyBullet = true;
				setPixelColor(116, THEME);
				setPixelColor(116, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[139].FreeSpace = true;
				DiodeArray[139].EnemyBullet = false;
				setPixelColor(139, THEME);

				DiodeArray[116].EnemyBullet = true;
				setPixelColor(116, THEME);
				setPixelColor(116, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 116;
			break;
		case 6:
			if (enemyShootFirstDiode_3) {
				DiodeArray[107].EnemyBullet = true;
				setPixelColor(107, THEME);
				setPixelColor(107, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[116].FreeSpace = true;
				DiodeArray[116].EnemyBullet = false;
				setPixelColor(116, THEME);

				DiodeArray[107].EnemyBullet = true;
				setPixelColor(107, THEME);
				setPixelColor(107, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 107;
			break;
		case 7:
			if (enemyShootFirstDiode_3) {
				DiodeArray[84].EnemyBullet = true;
				setPixelColor(84, THEME);
				setPixelColor(84, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[107].FreeSpace = true;
				DiodeArray[107].EnemyBullet = false;
				setPixelColor(107, THEME);

				DiodeArray[84].EnemyBullet = true;
				setPixelColor(84, THEME);
				setPixelColor(84, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 84;
			break;
		case 8:
			DiodeArray[84].FreeSpace = true;
			DiodeArray[84].EnemyBullet = false;
			setPixelColor(84, THEME);

			DiodeArray[75].FreeSpace = false;
			DiodeArray[75].EnemyBullet = true;
			setPixelColor(75, THEME);
			setPixelColor(75, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 75;
			break;
		case 9:
			DiodeArray[75].FreeSpace = true;
			DiodeArray[75].EnemyBullet = false;
			setPixelColor(75, THEME);

			DiodeArray[52].FreeSpace = false;
			DiodeArray[52].EnemyBullet = true;
			setPixelColor(52, THEME);
			setPixelColor(52, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 52;
			break;
		case 10:
			DiodeArray[52].FreeSpace = true;
			DiodeArray[52].EnemyBullet = false;
			setPixelColor(52, THEME);

			DiodeArray[43].FreeSpace = false;
			DiodeArray[43].EnemyBullet = true;
			setPixelColor(43, THEME);
			setPixelColor(43, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 43;
			break;
		case 11:
			DiodeArray[43].FreeSpace = true;
			DiodeArray[43].EnemyBullet = false;
			setPixelColor(43, THEME);

			DiodeArray[20].FreeSpace = false;
			DiodeArray[20].EnemyBullet = true;
			setPixelColor(20, THEME);
			setPixelColor(20, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 20;
			break;
		case 12:
			DiodeArray[20].FreeSpace = true;
			DiodeArray[20].EnemyBullet = false;
			setPixelColor(20, THEME);

			DiodeArray[11].FreeSpace = false;
			DiodeArray[11].EnemyBullet = true;
			setPixelColor(11, THEME);
			setPixelColor(11, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 11;
			break;
		case 13:
			DiodeArray[11].FreeSpace = true;
			DiodeArray[11].EnemyBullet = false;
			setPixelColor(11, THEME);

			enemyShootFirstDiode_3 = true;
			enemyShootInit_3 = true;
			enemyActivateShoot_3 = false;
			break;
		default:
			break;
		}
		break;
	case 13:
		if (enemyShootInit_3) {
			switch (enemyDiodeStartShootID_3) {
			case 204:
				enemyDiodeShootRoute_3 = 1;

				DiodeArray[179].FreeSpace = false;
				DiodeArray[172].FreeSpace = false;
				DiodeArray[147].FreeSpace = false;
				DiodeArray[140].FreeSpace = false;
				DiodeArray[115].FreeSpace = false;
				DiodeArray[108].FreeSpace = false;
				break;
			case 179:
				enemyDiodeShootRoute_3 = 2;

				DiodeArray[172].FreeSpace = false;
				DiodeArray[147].FreeSpace = false;
				DiodeArray[140].FreeSpace = false;
				DiodeArray[115].FreeSpace = false;
				DiodeArray[108].FreeSpace = false;
				break;
			case 172:
				enemyDiodeShootRoute_3 = 3;

				DiodeArray[147].FreeSpace = false;
				DiodeArray[140].FreeSpace = false;
				DiodeArray[115].FreeSpace = false;
				DiodeArray[108].FreeSpace = false;
				break;
			case 147:
				enemyDiodeShootRoute_3 = 4;

				DiodeArray[140].FreeSpace = false;
				DiodeArray[115].FreeSpace = false;
				DiodeArray[108].FreeSpace = false;
				break;
			case 140:
				enemyDiodeShootRoute_3 = 5;

				DiodeArray[115].FreeSpace = false;
				DiodeArray[108].FreeSpace = false;
				break;
			case 115:
				enemyDiodeShootRoute_3 = 6;

				DiodeArray[108].FreeSpace = false;
				break;
			case 108:
				enemyDiodeShootRoute_3 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_3 = false;
		}
		switch (enemyDiodeShootRoute_3) {
		case 1:
			enemyShootFirstDiode_3 = false;
			DiodeArray[179].EnemyBullet = true;
			setPixelColor(179, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 179;
			break;
		case 2:
			if (enemyShootFirstDiode_3) {
				DiodeArray[172].EnemyBullet = true;
				setPixelColor(172, THEME);
				setPixelColor(172, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[179].FreeSpace = true;
				DiodeArray[179].EnemyBullet = false;
				setPixelColor(179, THEME);

				DiodeArray[172].EnemyBullet = true;
				setPixelColor(172, THEME);
				setPixelColor(172, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 172;
			break;
		case 3:
			if (enemyShootFirstDiode_3) {
				DiodeArray[147].EnemyBullet = true;
				setPixelColor(147, THEME);
				setPixelColor(147, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[172].FreeSpace = true;
				DiodeArray[172].EnemyBullet = false;
				setPixelColor(172, THEME);

				DiodeArray[147].EnemyBullet = true;
				setPixelColor(147, THEME);
				setPixelColor(147, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 147;
			break;
		case 4:
			if (enemyShootFirstDiode_3) {
				DiodeArray[140].EnemyBullet = true;
				setPixelColor(140, THEME);
				setPixelColor(140, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[147].FreeSpace = true;
				DiodeArray[147].EnemyBullet = false;
				setPixelColor(147, THEME);

				DiodeArray[140].EnemyBullet = true;
				setPixelColor(140, THEME);
				setPixelColor(140, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 140;
			break;
		case 5:
			if (enemyShootFirstDiode_3) {
				DiodeArray[115].EnemyBullet = true;
				setPixelColor(115, THEME);
				setPixelColor(115, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[140].FreeSpace = true;
				DiodeArray[140].EnemyBullet = false;
				setPixelColor(140, THEME);

				DiodeArray[115].EnemyBullet = true;
				setPixelColor(115, THEME);
				setPixelColor(115, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 115;
			break;
		case 6:
			if (enemyShootFirstDiode_3) {
				DiodeArray[108].EnemyBullet = true;
				setPixelColor(108, THEME);
				setPixelColor(108, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[115].FreeSpace = true;
				DiodeArray[115].EnemyBullet = false;
				setPixelColor(115, THEME);

				DiodeArray[108].EnemyBullet = true;
				setPixelColor(108, THEME);
				setPixelColor(108, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 108;
			break;
		case 7:
			if (enemyShootFirstDiode_3) {
				DiodeArray[83].EnemyBullet = true;
				setPixelColor(83, THEME);
				setPixelColor(83, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[108].FreeSpace = true;
				DiodeArray[108].EnemyBullet = false;
				setPixelColor(108, THEME);

				DiodeArray[83].EnemyBullet = true;
				setPixelColor(83, THEME);
				setPixelColor(83, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 83;
			break;
		case 8:
			DiodeArray[83].FreeSpace = true;
			DiodeArray[83].EnemyBullet = false;
			setPixelColor(83, THEME);

			DiodeArray[76].FreeSpace = false;
			DiodeArray[76].EnemyBullet = true;
			setPixelColor(76, THEME);
			setPixelColor(76, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 76;
			break;
		case 9:
			DiodeArray[76].FreeSpace = true;
			DiodeArray[76].EnemyBullet = false;
			setPixelColor(76, THEME);

			DiodeArray[51].FreeSpace = false;
			DiodeArray[51].EnemyBullet = true;
			setPixelColor(51, THEME);
			setPixelColor(51, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 51;
			break;
		case 10:
			DiodeArray[51].FreeSpace = true;
			DiodeArray[51].EnemyBullet = false;
			setPixelColor(51, THEME);

			DiodeArray[44].FreeSpace = false;
			DiodeArray[44].EnemyBullet = true;
			setPixelColor(44, THEME);
			setPixelColor(44, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 44;
			break;
		case 11:
			DiodeArray[44].FreeSpace = true;
			DiodeArray[44].EnemyBullet = false;
			setPixelColor(44, THEME);

			DiodeArray[19].FreeSpace = false;
			DiodeArray[19].EnemyBullet = true;
			setPixelColor(19, THEME);
			setPixelColor(19, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 19;
			break;
		case 12:
			DiodeArray[19].FreeSpace = true;
			DiodeArray[19].EnemyBullet = false;
			setPixelColor(19, THEME);

			DiodeArray[12].FreeSpace = false;
			DiodeArray[12].EnemyBullet = true;
			setPixelColor(12, THEME);
			setPixelColor(12, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 12;
			break;
		case 13:
			DiodeArray[12].FreeSpace = true;
			DiodeArray[12].EnemyBullet = false;
			setPixelColor(12, THEME);

			enemyShootFirstDiode_3 = true;
			enemyShootInit_3 = true;
			enemyActivateShoot_3 = false;
			break;
		default:
			break;
		}
		break;
	case 14:
		if (enemyShootInit_3) {
			switch (enemyDiodeStartShootID_3) {
			case 205:
				enemyDiodeShootRoute_3 = 1;

				DiodeArray[178].FreeSpace = false;
				DiodeArray[173].FreeSpace = false;
				DiodeArray[146].FreeSpace = false;
				DiodeArray[141].FreeSpace = false;
				DiodeArray[114].FreeSpace = false;
				DiodeArray[109].FreeSpace = false;
				break;
			case 178:
				enemyDiodeShootRoute_3 = 2;

				DiodeArray[173].FreeSpace = false;
				DiodeArray[146].FreeSpace = false;
				DiodeArray[141].FreeSpace = false;
				DiodeArray[114].FreeSpace = false;
				DiodeArray[109].FreeSpace = false;
				break;
			case 173:
				enemyDiodeShootRoute_3 = 3;

				DiodeArray[146].FreeSpace = false;
				DiodeArray[141].FreeSpace = false;
				DiodeArray[114].FreeSpace = false;
				DiodeArray[109].FreeSpace = false;
				break;
			case 146:
				enemyDiodeShootRoute_3 = 4;

				DiodeArray[141].FreeSpace = false;
				DiodeArray[114].FreeSpace = false;
				DiodeArray[109].FreeSpace = false;
				break;
			case 141:
				enemyDiodeShootRoute_3 = 5;

				DiodeArray[114].FreeSpace = false;
				DiodeArray[109].FreeSpace = false;
				break;
			case 114:
				enemyDiodeShootRoute_3 = 6;

				DiodeArray[109].FreeSpace = false;
				break;
			case 109:
				enemyDiodeShootRoute_3 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_3 = false;
		}
		switch (enemyDiodeShootRoute_3) {
		case 1:
			enemyShootFirstDiode_3 = false;
			DiodeArray[178].EnemyBullet = true;
			setPixelColor(178, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 178;
			break;
		case 2:
			if (enemyShootFirstDiode_3) {
				DiodeArray[173].EnemyBullet = true;
				setPixelColor(173, THEME);
				setPixelColor(173, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[178].FreeSpace = true;
				DiodeArray[178].EnemyBullet = false;
				setPixelColor(178, THEME);

				DiodeArray[173].EnemyBullet = true;
				setPixelColor(173, THEME);
				setPixelColor(173, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 173;
			break;
		case 3:
			if (enemyShootFirstDiode_3) {
				DiodeArray[146].EnemyBullet = true;
				setPixelColor(146, THEME);
				setPixelColor(146, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[173].FreeSpace = true;
				DiodeArray[173].EnemyBullet = false;
				setPixelColor(173, THEME);

				DiodeArray[146].EnemyBullet = true;
				setPixelColor(146, THEME);
				setPixelColor(146, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 146;
			break;
		case 4:
			if (enemyShootFirstDiode_3) {
				DiodeArray[141].EnemyBullet = true;
				setPixelColor(141, THEME);
				setPixelColor(141, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[146].FreeSpace = true;
				DiodeArray[146].EnemyBullet = false;
				setPixelColor(146, THEME);

				DiodeArray[141].EnemyBullet = true;
				setPixelColor(141, THEME);
				setPixelColor(141, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 141;
			break;
		case 5:
			if (enemyShootFirstDiode_3) {
				DiodeArray[114].EnemyBullet = true;
				setPixelColor(114, THEME);
				setPixelColor(114, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[141].FreeSpace = true;
				DiodeArray[141].EnemyBullet = false;
				setPixelColor(141, THEME);

				DiodeArray[114].EnemyBullet = true;
				setPixelColor(114, THEME);
				setPixelColor(114, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 114;
			break;
		case 6:
			if (enemyShootFirstDiode_3) {
				DiodeArray[109].EnemyBullet = true;
				setPixelColor(109, THEME);
				setPixelColor(109, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[114].FreeSpace = true;
				DiodeArray[114].EnemyBullet = false;
				setPixelColor(114, THEME);

				DiodeArray[109].EnemyBullet = true;
				setPixelColor(109, THEME);
				setPixelColor(109, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 109;
			break;
		case 7:
			if (enemyShootFirstDiode_3) {
				DiodeArray[82].EnemyBullet = true;
				setPixelColor(82, THEME);
				setPixelColor(82, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[109].FreeSpace = true;
				DiodeArray[109].EnemyBullet = false;
				setPixelColor(109, THEME);

				DiodeArray[82].EnemyBullet = true;
				setPixelColor(82, THEME);
				setPixelColor(82, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 82;
			break;
		case 8:
			DiodeArray[82].FreeSpace = true;
			DiodeArray[82].EnemyBullet = false;
			setPixelColor(82, THEME);

			DiodeArray[77].FreeSpace = false;
			DiodeArray[77].EnemyBullet = true;
			setPixelColor(77, THEME);
			setPixelColor(77, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 77;
			break;
		case 9:
			DiodeArray[77].FreeSpace = true;
			DiodeArray[77].EnemyBullet = false;
			setPixelColor(77, THEME);

			DiodeArray[50].FreeSpace = false;
			DiodeArray[50].EnemyBullet = true;
			setPixelColor(50, THEME);
			setPixelColor(50, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 50;
			break;
		case 10:
			DiodeArray[50].FreeSpace = true;
			DiodeArray[50].EnemyBullet = false;
			setPixelColor(50, THEME);

			DiodeArray[45].FreeSpace = false;
			DiodeArray[45].EnemyBullet = true;
			setPixelColor(45, THEME);
			setPixelColor(45, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 45;
			break;
		case 11:
			DiodeArray[45].FreeSpace = true;
			DiodeArray[45].EnemyBullet = false;
			setPixelColor(45, THEME);

			DiodeArray[18].FreeSpace = false;
			DiodeArray[18].EnemyBullet = true;
			setPixelColor(18, THEME);
			setPixelColor(18, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 18;
			break;
		case 12:
			DiodeArray[18].FreeSpace = true;
			DiodeArray[18].EnemyBullet = false;
			setPixelColor(18, THEME);

			DiodeArray[13].FreeSpace = false;
			DiodeArray[13].EnemyBullet = true;
			setPixelColor(13, THEME);
			setPixelColor(13, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 13;
			break;
		case 13:
			DiodeArray[13].FreeSpace = true;
			DiodeArray[13].EnemyBullet = false;
			setPixelColor(13, THEME);

			enemyShootFirstDiode_3 = true;
			enemyShootInit_3 = true;
			enemyActivateShoot_3 = false;
			break;
		default:
			break;
		}
		break;
	case 15:
		if (enemyShootInit_3) {
			switch (enemyDiodeStartShootID_3) {
			case 206:
				enemyDiodeShootRoute_3 = 1;

				DiodeArray[177].FreeSpace = false;
				DiodeArray[174].FreeSpace = false;
				DiodeArray[145].FreeSpace = false;
				DiodeArray[142].FreeSpace = false;
				DiodeArray[113].FreeSpace = false;
				DiodeArray[110].FreeSpace = false;
				break;
			case 177:
				enemyDiodeShootRoute_3 = 2;

				DiodeArray[174].FreeSpace = false;
				DiodeArray[145].FreeSpace = false;
				DiodeArray[142].FreeSpace = false;
				DiodeArray[113].FreeSpace = false;
				DiodeArray[110].FreeSpace = false;
				break;
			case 174:
				enemyDiodeShootRoute_3 = 3;

				DiodeArray[145].FreeSpace = false;
				DiodeArray[142].FreeSpace = false;
				DiodeArray[113].FreeSpace = false;
				DiodeArray[110].FreeSpace = false;
				break;
			case 145:
				enemyDiodeShootRoute_3 = 4;

				DiodeArray[142].FreeSpace = false;
				DiodeArray[113].FreeSpace = false;
				DiodeArray[110].FreeSpace = false;
				break;
			case 142:
				enemyDiodeShootRoute_3 = 5;

				DiodeArray[113].FreeSpace = false;
				DiodeArray[110].FreeSpace = false;
				break;
			case 113:
				enemyDiodeShootRoute_3 = 6;

				DiodeArray[110].FreeSpace = false;
				break;
			case 110:
				enemyDiodeShootRoute_3 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_3 = false;
		}
		switch (enemyDiodeShootRoute_3) {
		case 1:
			enemyShootFirstDiode_3 = false;
			DiodeArray[177].EnemyBullet = true;
			setPixelColor(177, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 177;
			break;
		case 2:
			if (enemyShootFirstDiode_3) {
				DiodeArray[174].EnemyBullet = true;
				setPixelColor(174, THEME);
				setPixelColor(174, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[177].FreeSpace = true;
				DiodeArray[177].EnemyBullet = false;
				setPixelColor(177, THEME);

				DiodeArray[174].EnemyBullet = true;
				setPixelColor(174, THEME);
				setPixelColor(174, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 174;
			break;
		case 3:
			if (enemyShootFirstDiode_3) {
				DiodeArray[145].EnemyBullet = true;
				setPixelColor(145, THEME);
				setPixelColor(145, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[174].FreeSpace = true;
				DiodeArray[174].EnemyBullet = false;
				setPixelColor(174, THEME);

				DiodeArray[145].EnemyBullet = true;
				setPixelColor(145, THEME);
				setPixelColor(145, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 145;
			break;
		case 4:
			if (enemyShootFirstDiode_3) {
				DiodeArray[142].EnemyBullet = true;
				setPixelColor(142, THEME);
				setPixelColor(142, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[145].FreeSpace = true;
				DiodeArray[145].EnemyBullet = false;
				setPixelColor(145, THEME);

				DiodeArray[142].EnemyBullet = true;
				setPixelColor(142, THEME);
				setPixelColor(142, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 142;
			break;
		case 5:
			if (enemyShootFirstDiode_3) {
				DiodeArray[113].EnemyBullet = true;
				setPixelColor(113, THEME);
				setPixelColor(113, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[142].FreeSpace = true;
				DiodeArray[142].EnemyBullet = false;
				setPixelColor(142, THEME);

				DiodeArray[113].EnemyBullet = true;
				setPixelColor(113, THEME);
				setPixelColor(113, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 113;
			break;
		case 6:
			if (enemyShootFirstDiode_3) {
				DiodeArray[110].EnemyBullet = true;
				setPixelColor(110, THEME);
				setPixelColor(110, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[113].FreeSpace = true;
				DiodeArray[113].EnemyBullet = false;
				setPixelColor(113, THEME);

				DiodeArray[110].EnemyBullet = true;
				setPixelColor(110, THEME);
				setPixelColor(110, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 110;
			break;
		case 7:
			if (enemyShootFirstDiode_3) {
				DiodeArray[81].EnemyBullet = true;
				setPixelColor(81, THEME);
				setPixelColor(81, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[110].FreeSpace = true;
				DiodeArray[110].EnemyBullet = false;
				setPixelColor(110, THEME);

				DiodeArray[81].EnemyBullet = true;
				setPixelColor(81, THEME);
				setPixelColor(81, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 81;
			break;
		case 8:
			DiodeArray[81].FreeSpace = true;
			DiodeArray[81].EnemyBullet = false;
			setPixelColor(81, THEME);

			DiodeArray[78].FreeSpace = false;
			DiodeArray[78].EnemyBullet = true;
			setPixelColor(78, THEME);
			setPixelColor(78, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 78;
			break;
		case 9:
			DiodeArray[78].FreeSpace = true;
			DiodeArray[78].EnemyBullet = false;
			setPixelColor(78, THEME);

			DiodeArray[49].FreeSpace = false;
			DiodeArray[49].EnemyBullet = true;
			setPixelColor(49, THEME);
			setPixelColor(49, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 49;
			break;
		case 10:
			DiodeArray[49].FreeSpace = true;
			DiodeArray[49].EnemyBullet = false;
			setPixelColor(49, THEME);

			DiodeArray[46].FreeSpace = false;
			DiodeArray[46].EnemyBullet = true;
			setPixelColor(46, THEME);
			setPixelColor(46, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 46;
			break;
		case 11:
			DiodeArray[46].FreeSpace = true;
			DiodeArray[46].EnemyBullet = false;
			setPixelColor(46, THEME);

			DiodeArray[17].FreeSpace = false;
			DiodeArray[17].EnemyBullet = true;
			setPixelColor(17, THEME);
			setPixelColor(17, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 17;
			break;
		case 12:
			DiodeArray[17].FreeSpace = true;
			DiodeArray[17].EnemyBullet = false;
			setPixelColor(17, THEME);

			DiodeArray[14].FreeSpace = false;
			DiodeArray[14].EnemyBullet = true;
			setPixelColor(14, THEME);
			setPixelColor(14, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 14;
			break;
		case 13:
			DiodeArray[14].FreeSpace = true;
			DiodeArray[14].EnemyBullet = false;
			setPixelColor(14, THEME);

			enemyShootFirstDiode_3 = true;
			enemyShootInit_3 = true;
			enemyActivateShoot_3 = false;
			break;
		default:
			break;
		}
		break;
	case 16:
		if (enemyShootInit_3) {
			switch (enemyDiodeStartShootID_3) {
			case 207:
				enemyDiodeShootRoute_3 = 1;

				DiodeArray[176].FreeSpace = false;
				DiodeArray[175].FreeSpace = false;
				DiodeArray[144].FreeSpace = false;
				DiodeArray[143].FreeSpace = false;
				DiodeArray[112].FreeSpace = false;
				DiodeArray[111].FreeSpace = false;
				break;
			case 176:
				enemyDiodeShootRoute_3 = 2;

				DiodeArray[175].FreeSpace = false;
				DiodeArray[144].FreeSpace = false;
				DiodeArray[143].FreeSpace = false;
				DiodeArray[112].FreeSpace = false;
				DiodeArray[111].FreeSpace = false;
				break;
			case 175:
				enemyDiodeShootRoute_3 = 3;

				DiodeArray[144].FreeSpace = false;
				DiodeArray[143].FreeSpace = false;
				DiodeArray[112].FreeSpace = false;
				DiodeArray[111].FreeSpace = false;
				break;
			case 144:
				enemyDiodeShootRoute_3 = 4;

				DiodeArray[143].FreeSpace = false;
				DiodeArray[112].FreeSpace = false;
				DiodeArray[111].FreeSpace = false;
				break;
			case 143:
				enemyDiodeShootRoute_3 = 5;

				DiodeArray[112].FreeSpace = false;
				DiodeArray[111].FreeSpace = false;
				break;
			case 112:
				enemyDiodeShootRoute_3 = 6;

				DiodeArray[111].FreeSpace = false;
				break;
			case 111:
				enemyDiodeShootRoute_3 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_3 = false;
		}
		switch (enemyDiodeShootRoute_3) {
		case 1:
			enemyShootFirstDiode_3 = false;
			DiodeArray[176].EnemyBullet = true;
			setPixelColor(176, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 176;
			break;
		case 2:
			if (enemyShootFirstDiode_3) {
				DiodeArray[175].EnemyBullet = true;
				setPixelColor(175, THEME);
				setPixelColor(175, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[176].FreeSpace = true;
				DiodeArray[176].EnemyBullet = false;
				setPixelColor(176, THEME);

				DiodeArray[175].EnemyBullet = true;
				setPixelColor(175, THEME);
				setPixelColor(175, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 175;
			break;
		case 3:
			if (enemyShootFirstDiode_3) {
				DiodeArray[144].EnemyBullet = true;
				setPixelColor(144, THEME);
				setPixelColor(144, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[175].FreeSpace = true;
				DiodeArray[175].EnemyBullet = false;
				setPixelColor(175, THEME);

				DiodeArray[144].EnemyBullet = true;
				setPixelColor(144, THEME);
				setPixelColor(144, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 144;
			break;
		case 4:
			if (enemyShootFirstDiode_3) {
				DiodeArray[143].EnemyBullet = true;
				setPixelColor(143, THEME);
				setPixelColor(143, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[144].FreeSpace = true;
				DiodeArray[144].EnemyBullet = false;
				setPixelColor(144, THEME);

				DiodeArray[143].EnemyBullet = true;
				setPixelColor(143, THEME);
				setPixelColor(143, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 143;
			break;
		case 5:
			if (enemyShootFirstDiode_3) {
				DiodeArray[112].EnemyBullet = true;
				setPixelColor(112, THEME);
				setPixelColor(112, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[143].FreeSpace = true;
				DiodeArray[143].EnemyBullet = false;
				setPixelColor(143, THEME);

				DiodeArray[112].EnemyBullet = true;
				setPixelColor(112, THEME);
				setPixelColor(112, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 112;
			break;
		case 6:
			if (enemyShootFirstDiode_3) {
				DiodeArray[111].EnemyBullet = true;
				setPixelColor(111, THEME);
				setPixelColor(111, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[112].FreeSpace = true;
				DiodeArray[112].EnemyBullet = false;
				setPixelColor(112, THEME);

				DiodeArray[111].EnemyBullet = true;
				setPixelColor(111, THEME);
				setPixelColor(111, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 111;
			break;
		case 7:
			if (enemyShootFirstDiode_3) {
				DiodeArray[80].EnemyBullet = true;
				setPixelColor(80, THEME);
				setPixelColor(80, ENEMY_BULLET);

				enemyShootFirstDiode_3 = false;
			} else {
				DiodeArray[111].FreeSpace = true;
				DiodeArray[111].EnemyBullet = false;
				setPixelColor(111, THEME);

				DiodeArray[80].EnemyBullet = true;
				setPixelColor(80, THEME);
				setPixelColor(80, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_3 = 80;
			break;
		case 8:
			DiodeArray[80].FreeSpace = true;
			DiodeArray[80].EnemyBullet = false;
			setPixelColor(80, THEME);

			DiodeArray[79].FreeSpace = false;
			DiodeArray[79].EnemyBullet = true;
			setPixelColor(79, THEME);
			setPixelColor(79, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 79;
			break;
		case 9:
			DiodeArray[79].FreeSpace = true;
			DiodeArray[79].EnemyBullet = false;
			setPixelColor(79, THEME);

			DiodeArray[48].FreeSpace = false;
			DiodeArray[48].EnemyBullet = true;
			setPixelColor(48, THEME);
			setPixelColor(48, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 48;
			break;
		case 10:
			DiodeArray[48].FreeSpace = true;
			DiodeArray[48].EnemyBullet = false;
			setPixelColor(48, THEME);

			DiodeArray[47].FreeSpace = false;
			DiodeArray[47].EnemyBullet = true;
			setPixelColor(47, THEME);
			setPixelColor(47, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 47;
			break;
		case 11:
			DiodeArray[47].FreeSpace = true;
			DiodeArray[47].EnemyBullet = false;
			setPixelColor(47, THEME);

			DiodeArray[16].FreeSpace = false;
			DiodeArray[16].EnemyBullet = true;
			setPixelColor(16, THEME);
			setPixelColor(16, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 16;
			break;
		case 12:
			DiodeArray[16].FreeSpace = true;
			DiodeArray[16].EnemyBullet = false;
			setPixelColor(16, THEME);

			DiodeArray[15].FreeSpace = false;
			DiodeArray[15].EnemyBullet = true;
			setPixelColor(15, THEME);
			setPixelColor(15, ENEMY_BULLET);
			enemyCurrentShootDiode_3 = 15;
			break;
		case 13:
			DiodeArray[15].FreeSpace = true;
			DiodeArray[15].EnemyBullet = false;
			setPixelColor(15, THEME);

			enemyShootFirstDiode_3 = true;
			enemyShootInit_3 = true;
			enemyActivateShoot_3 = false;
			break;
		default:
			break;
		}
		break;
	default:
		break;
	}



}

void enemyShooting_4() {



	int bulletLine = getEnemyBulletLine(enemyDiodeStartShootID_4);

	switch (bulletLine) {
	case 1:
		if (enemyShootInit_4) {
			switch (enemyDiodeStartShootID_4) {
			case 192:
				enemyDiodeShootRoute_4 = 1;

				DiodeArray[191].FreeSpace = false;
				DiodeArray[160].FreeSpace = false;
				DiodeArray[159].FreeSpace = false;
				DiodeArray[128].FreeSpace = false;
				DiodeArray[127].FreeSpace = false;
				DiodeArray[96].FreeSpace = false;
				break;
			case 191:
				enemyDiodeShootRoute_4 = 2;

				DiodeArray[160].FreeSpace = false;
				DiodeArray[159].FreeSpace = false;
				DiodeArray[128].FreeSpace = false;
				DiodeArray[127].FreeSpace = false;
				DiodeArray[96].FreeSpace = false;
				break;
			case 160:
				enemyDiodeShootRoute_4 = 3;

				DiodeArray[159].FreeSpace = false;
				DiodeArray[128].FreeSpace = false;
				DiodeArray[127].FreeSpace = false;
				DiodeArray[96].FreeSpace = false;
				break;
			case 159:
				enemyDiodeShootRoute_4 = 4;

				DiodeArray[128].FreeSpace = false;
				DiodeArray[127].FreeSpace = false;
				DiodeArray[96].FreeSpace = false;
				break;
			case 128:
				enemyDiodeShootRoute_4 = 5;

				DiodeArray[127].FreeSpace = false;
				DiodeArray[96].FreeSpace = false;
				break;
			case 127:
				enemyDiodeShootRoute_4 = 6;

				DiodeArray[96].FreeSpace = false;
				break;
			case 96:
				enemyDiodeShootRoute_4 = 7;

				break;
			default:
				break;
			}
			enemyShootInit_4 = false;
		}
		switch (enemyDiodeShootRoute_4) {
		case 1:
			enemyShootFirstDiode_4 = false;
			DiodeArray[191].EnemyBullet = true;
			setPixelColor(191, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 191;
			break;
		case 2:
			if (enemyShootFirstDiode_4) {
				DiodeArray[160].EnemyBullet = true;
				setPixelColor(160, THEME);
				setPixelColor(160, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[191].FreeSpace = true;
				DiodeArray[191].EnemyBullet = false;
				setPixelColor(191, THEME);

				DiodeArray[160].EnemyBullet = true;
				setPixelColor(160, THEME);
				setPixelColor(160, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 160;
			break;
		case 3:
			if (enemyShootFirstDiode_4) {
				DiodeArray[159].EnemyBullet = true;
				setPixelColor(159, THEME);
				setPixelColor(159, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[160].FreeSpace = true;
				DiodeArray[160].EnemyBullet = false;
				setPixelColor(160, THEME);

				DiodeArray[159].EnemyBullet = true;
				setPixelColor(159, THEME);
				setPixelColor(159, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 159;
			break;
		case 4:
			if (enemyShootFirstDiode_4) {
				DiodeArray[128].EnemyBullet = true;
				setPixelColor(128, THEME);
				setPixelColor(128, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[159].FreeSpace = true;
				DiodeArray[159].EnemyBullet = false;
				setPixelColor(159, THEME);

				DiodeArray[128].EnemyBullet = true;
				setPixelColor(128, THEME);
				setPixelColor(128, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 128;
			break;
		case 5:
			if (enemyShootFirstDiode_4) {
				DiodeArray[127].EnemyBullet = true;
				setPixelColor(127, THEME);
				setPixelColor(127, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[128].FreeSpace = true;
				DiodeArray[128].EnemyBullet = false;
				setPixelColor(128, THEME);

				DiodeArray[127].EnemyBullet = true;
				setPixelColor(127, THEME);
				setPixelColor(127, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 127;
			break;
		case 6:
			if (enemyShootFirstDiode_4) {
				DiodeArray[96].EnemyBullet = true;
				setPixelColor(96, THEME);
				setPixelColor(96, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[127].FreeSpace = true;
				DiodeArray[127].EnemyBullet = false;
				setPixelColor(127, THEME);

				DiodeArray[96].EnemyBullet = true;
				setPixelColor(96, THEME);
				setPixelColor(96, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 96;
			break;
		case 7:
			if (enemyShootFirstDiode_4) {
				DiodeArray[95].EnemyBullet = true;
				setPixelColor(95, THEME);
				setPixelColor(95, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[96].FreeSpace = true;
				DiodeArray[96].EnemyBullet = false;
				setPixelColor(96, THEME);

				DiodeArray[95].EnemyBullet = true;
				setPixelColor(95, THEME);
				setPixelColor(95, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 95;
			break;
		case 8:
			DiodeArray[95].FreeSpace = true;
			DiodeArray[95].EnemyBullet = false;
			setPixelColor(95, THEME);

			DiodeArray[64].FreeSpace = false;
			DiodeArray[64].EnemyBullet = true;
			setPixelColor(64, THEME);
			setPixelColor(64, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 64;
			break;
		case 9:
			DiodeArray[64].FreeSpace = true;
			DiodeArray[64].EnemyBullet = false;
			setPixelColor(64, THEME);

			DiodeArray[63].FreeSpace = false;
			DiodeArray[63].EnemyBullet = true;
			setPixelColor(63, THEME);
			setPixelColor(63, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 63;
			break;
		case 10:
			DiodeArray[63].FreeSpace = true;
			DiodeArray[63].EnemyBullet = false;
			setPixelColor(63, THEME);

			DiodeArray[32].FreeSpace = false;
			DiodeArray[32].EnemyBullet = true;
			setPixelColor(32, THEME);
			setPixelColor(32, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 32;
			break;
		case 11:
			DiodeArray[32].FreeSpace = true;
			DiodeArray[32].EnemyBullet = false;
			setPixelColor(32, THEME);

			DiodeArray[31].FreeSpace = false;
			DiodeArray[31].EnemyBullet = true;
			setPixelColor(31, THEME);
			setPixelColor(31, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 31;
			break;
		case 12:
			DiodeArray[31].FreeSpace = true;
			DiodeArray[31].EnemyBullet = false;
			setPixelColor(31, THEME);

			DiodeArray[0].FreeSpace = false;
			DiodeArray[0].EnemyBullet = true;
			setPixelColor(0, THEME);
			setPixelColor(0, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 0;
			break;
		case 13:
			DiodeArray[0].FreeSpace = true;
			DiodeArray[0].EnemyBullet = false;
			setPixelColor(0, THEME);

			enemyShootFirstDiode_4 = true;
			enemyShootInit_4 = true;
			enemyActivateShoot_4 = false;
			break;
		default:
			break;
		}
		break;
	case 2:
		if (enemyShootInit_4) {
			switch (enemyDiodeStartShootID_4) {
			case 193:
				enemyDiodeShootRoute_4 = 1;

				DiodeArray[190].FreeSpace = false;
				DiodeArray[161].FreeSpace = false;
				DiodeArray[158].FreeSpace = false;
				DiodeArray[129].FreeSpace = false;
				DiodeArray[126].FreeSpace = false;
				DiodeArray[97].FreeSpace = false;
				break;
			case 190:
				enemyDiodeShootRoute_4 = 2;

				DiodeArray[161].FreeSpace = false;
				DiodeArray[158].FreeSpace = false;
				DiodeArray[129].FreeSpace = false;
				DiodeArray[126].FreeSpace = false;
				DiodeArray[97].FreeSpace = false;
				break;
			case 161:
				enemyDiodeShootRoute_4 = 3;

				DiodeArray[158].FreeSpace = false;
				DiodeArray[129].FreeSpace = false;
				DiodeArray[126].FreeSpace = false;
				DiodeArray[97].FreeSpace = false;
				break;
			case 158:
				enemyDiodeShootRoute_4 = 4;

				DiodeArray[129].FreeSpace = false;
				DiodeArray[126].FreeSpace = false;
				DiodeArray[97].FreeSpace = false;
				break;
			case 129:
				enemyDiodeShootRoute_4 = 5;

				DiodeArray[126].FreeSpace = false;
				DiodeArray[97].FreeSpace = false;
				break;
			case 126:
				enemyDiodeShootRoute_4 = 6;

				DiodeArray[97].FreeSpace = false;
				break;
			case 97:
				enemyDiodeShootRoute_4 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_4 = false;
		}
		switch (enemyDiodeShootRoute_4) {
		case 1:
			enemyShootFirstDiode_4 = false;
			DiodeArray[190].EnemyBullet = true;
			setPixelColor(190, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 190;
			break;
		case 2:
			if (enemyShootFirstDiode_4) {
				DiodeArray[161].EnemyBullet = true;
				setPixelColor(161, THEME);
				setPixelColor(161, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[190].FreeSpace = true;
				DiodeArray[190].EnemyBullet = false;
				setPixelColor(190, THEME);

				DiodeArray[161].EnemyBullet = true;
				setPixelColor(161, THEME);
				setPixelColor(161, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 161;
			break;
		case 3:
			if (enemyShootFirstDiode_4) {
				DiodeArray[158].EnemyBullet = true;
				setPixelColor(158, THEME);
				setPixelColor(158, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[161].FreeSpace = true;
				DiodeArray[161].EnemyBullet = false;
				setPixelColor(161, THEME);

				DiodeArray[158].EnemyBullet = true;
				setPixelColor(158, THEME);
				setPixelColor(158, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 158;
			break;
		case 4:
			if (enemyShootFirstDiode_4) {
				DiodeArray[129].EnemyBullet = true;
				setPixelColor(129, THEME);
				setPixelColor(129, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[158].FreeSpace = true;
				DiodeArray[158].EnemyBullet = false;
				setPixelColor(158, THEME);

				DiodeArray[129].EnemyBullet = true;
				setPixelColor(129, THEME);
				setPixelColor(129, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 129;
			break;
		case 5:
			if (enemyShootFirstDiode_4) {
				DiodeArray[126].EnemyBullet = true;
				setPixelColor(126, THEME);
				setPixelColor(126, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[129].FreeSpace = true;
				DiodeArray[129].EnemyBullet = false;
				setPixelColor(129, THEME);

				DiodeArray[126].EnemyBullet = true;
				setPixelColor(126, THEME);
				setPixelColor(126, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 126;
			break;
		case 6:
			if (enemyShootFirstDiode_4) {
				DiodeArray[97].EnemyBullet = true;
				setPixelColor(97, THEME);
				setPixelColor(97, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[126].FreeSpace = true;
				DiodeArray[126].EnemyBullet = false;
				setPixelColor(126, THEME);

				DiodeArray[97].EnemyBullet = true;
				setPixelColor(97, THEME);
				setPixelColor(97, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 97;
			break;
		case 7:
			if (enemyShootFirstDiode_4) {
				DiodeArray[94].EnemyBullet = true;
				setPixelColor(94, THEME);
				setPixelColor(94, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[97].FreeSpace = true;
				DiodeArray[97].EnemyBullet = false;
				setPixelColor(97, THEME);

				DiodeArray[94].EnemyBullet = true;
				setPixelColor(94, THEME);
				setPixelColor(94, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 94;
			break;
		case 8:
			DiodeArray[94].FreeSpace = true;
			DiodeArray[94].EnemyBullet = false;
			setPixelColor(94, THEME);

			DiodeArray[65].FreeSpace = false;
			DiodeArray[65].EnemyBullet = true;
			setPixelColor(65, THEME);
			setPixelColor(65, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 65;
			break;
		case 9:
			DiodeArray[65].FreeSpace = true;
			DiodeArray[65].EnemyBullet = false;
			setPixelColor(65, THEME);

			DiodeArray[62].FreeSpace = false;
			DiodeArray[62].EnemyBullet = true;
			setPixelColor(62, THEME);
			setPixelColor(62, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 62;
			break;
		case 10:
			DiodeArray[62].FreeSpace = true;
			DiodeArray[62].EnemyBullet = false;
			setPixelColor(62, THEME);

			DiodeArray[33].FreeSpace = false;
			DiodeArray[33].EnemyBullet = true;
			setPixelColor(33, THEME);
			setPixelColor(33, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 33;
			break;
		case 11:
			DiodeArray[33].FreeSpace = true;
			DiodeArray[33].EnemyBullet = false;
			setPixelColor(33, THEME);

			DiodeArray[30].FreeSpace = false;
			DiodeArray[30].EnemyBullet = true;
			setPixelColor(30, THEME);
			setPixelColor(30, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 30;
			break;
		case 12:
			DiodeArray[30].FreeSpace = true;
			DiodeArray[30].EnemyBullet = false;
			setPixelColor(30, THEME);

			DiodeArray[1].FreeSpace = false;
			DiodeArray[1].EnemyBullet = true;
			setPixelColor(1, THEME);
			setPixelColor(1, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 1;
			break;
		case 13:
			DiodeArray[1].FreeSpace = true;
			DiodeArray[1].EnemyBullet = false;
			setPixelColor(1, THEME);

			enemyShootFirstDiode_4 = true;
			enemyShootInit_4 = true;
			enemyActivateShoot_4 = false;
			break;
		default:
			break;
		}
		break;
	case 3:
		if (enemyShootInit_4) {
			switch (enemyDiodeStartShootID_4) {
			case 194:
				enemyDiodeShootRoute_4 = 1;

				DiodeArray[189].FreeSpace = false;
				DiodeArray[162].FreeSpace = false;
				DiodeArray[157].FreeSpace = false;
				DiodeArray[130].FreeSpace = false;
				DiodeArray[125].FreeSpace = false;
				DiodeArray[98].FreeSpace = false;
				break;
			case 189:
				enemyDiodeShootRoute_4 = 2;

				DiodeArray[162].FreeSpace = false;
				DiodeArray[157].FreeSpace = false;
				DiodeArray[130].FreeSpace = false;
				DiodeArray[125].FreeSpace = false;
				DiodeArray[98].FreeSpace = false;
				break;
			case 162:
				enemyDiodeShootRoute_4 = 3;

				DiodeArray[157].FreeSpace = false;
				DiodeArray[130].FreeSpace = false;
				DiodeArray[125].FreeSpace = false;
				DiodeArray[98].FreeSpace = false;
				break;
			case 157:
				enemyDiodeShootRoute_4 = 4;

				DiodeArray[130].FreeSpace = false;
				DiodeArray[125].FreeSpace = false;
				DiodeArray[98].FreeSpace = false;
				break;
			case 130:
				enemyDiodeShootRoute_4 = 5;

				DiodeArray[125].FreeSpace = false;
				DiodeArray[98].FreeSpace = false;
				break;
			case 125:
				enemyDiodeShootRoute_4 = 6;

				DiodeArray[98].FreeSpace = false;
				break;
			case 98:
				enemyDiodeShootRoute_4 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_4 = false;
		}
		switch (enemyDiodeShootRoute_4) {
		case 1:
			enemyShootFirstDiode_4 = false;
			DiodeArray[189].EnemyBullet = true;
			setPixelColor(189, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 189;
			break;
		case 2:
			if (enemyShootFirstDiode_4) {
				DiodeArray[162].EnemyBullet = true;
				setPixelColor(162, THEME);
				setPixelColor(162, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[189].FreeSpace = true;
				DiodeArray[189].EnemyBullet = false;
				setPixelColor(189, THEME);

				DiodeArray[162].EnemyBullet = true;
				setPixelColor(162, THEME);
				setPixelColor(162, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 162;
			break;
		case 3:
			if (enemyShootFirstDiode_4) {
				DiodeArray[157].EnemyBullet = true;
				setPixelColor(157, THEME);
				setPixelColor(157, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[162].FreeSpace = true;
				DiodeArray[162].EnemyBullet = false;
				setPixelColor(162, THEME);

				DiodeArray[157].EnemyBullet = true;
				setPixelColor(157, THEME);
				setPixelColor(157, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 157;
			break;
		case 4:
			if (enemyShootFirstDiode_4) {
				DiodeArray[130].EnemyBullet = true;
				setPixelColor(130, THEME);
				setPixelColor(130, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[157].FreeSpace = true;
				DiodeArray[157].EnemyBullet = false;
				setPixelColor(157, THEME);

				DiodeArray[130].EnemyBullet = true;
				setPixelColor(130, THEME);
				setPixelColor(130, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 130;
			break;
		case 5:
			if (enemyShootFirstDiode_4) {
				DiodeArray[125].EnemyBullet = true;
				setPixelColor(125, THEME);
				setPixelColor(125, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[130].FreeSpace = true;
				DiodeArray[130].EnemyBullet = false;
				setPixelColor(130, THEME);

				DiodeArray[125].EnemyBullet = true;
				setPixelColor(125, THEME);
				setPixelColor(125, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 125;
			break;
		case 6:
			if (enemyShootFirstDiode_4) {
				DiodeArray[98].EnemyBullet = true;
				setPixelColor(98, THEME);
				setPixelColor(98, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[125].FreeSpace = true;
				DiodeArray[125].EnemyBullet = false;
				setPixelColor(125, THEME);

				DiodeArray[98].EnemyBullet = true;
				setPixelColor(98, THEME);
				setPixelColor(98, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 98;
			break;
		case 7:
			if (enemyShootFirstDiode_4) {
				DiodeArray[93].EnemyBullet = true;
				setPixelColor(93, THEME);
				setPixelColor(93, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[98].FreeSpace = true;
				DiodeArray[98].EnemyBullet = false;
				setPixelColor(98, THEME);

				DiodeArray[93].EnemyBullet = true;
				setPixelColor(93, THEME);
				setPixelColor(93, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 93;
			break;
		case 8:
			DiodeArray[93].FreeSpace = true;
			DiodeArray[93].EnemyBullet = false;
			setPixelColor(93, THEME);

			DiodeArray[66].FreeSpace = false;
			DiodeArray[66].EnemyBullet = true;
			setPixelColor(66, THEME);
			setPixelColor(66, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 66;
			break;
		case 9:
			DiodeArray[66].FreeSpace = true;
			DiodeArray[66].EnemyBullet = false;
			setPixelColor(66, THEME);

			DiodeArray[61].FreeSpace = false;
			DiodeArray[61].EnemyBullet = true;
			setPixelColor(61, THEME);
			setPixelColor(61, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 61;
			break;
		case 10:
			DiodeArray[61].FreeSpace = true;
			DiodeArray[61].EnemyBullet = false;
			setPixelColor(61, THEME);

			DiodeArray[34].FreeSpace = false;
			DiodeArray[34].EnemyBullet = true;
			setPixelColor(34, THEME);
			setPixelColor(34, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 34;
			break;
		case 11:
			DiodeArray[34].FreeSpace = true;
			DiodeArray[34].EnemyBullet = false;
			setPixelColor(34, THEME);

			DiodeArray[29].FreeSpace = false;
			DiodeArray[29].EnemyBullet = true;
			setPixelColor(29, THEME);
			setPixelColor(29, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 29;
			break;
		case 12:
			DiodeArray[29].FreeSpace = true;
			DiodeArray[29].EnemyBullet = false;
			setPixelColor(29, THEME);

			DiodeArray[2].FreeSpace = false;
			DiodeArray[2].EnemyBullet = true;
			setPixelColor(2, THEME);
			setPixelColor(2, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 2;
			break;
		case 13:
			DiodeArray[2].FreeSpace = true;
			DiodeArray[2].EnemyBullet = false;
			setPixelColor(2, THEME);

			enemyShootFirstDiode_4 = true;
			enemyShootInit_4 = true;
			enemyActivateShoot_4 = false;
			break;
		default:
			break;
		}
		break;
	case 4:
		if (enemyShootInit_4) {
			switch (enemyDiodeStartShootID_4) {
			case 195:
				enemyDiodeShootRoute_4 = 1;

				DiodeArray[188].FreeSpace = false;
				DiodeArray[163].FreeSpace = false;
				DiodeArray[156].FreeSpace = false;
				DiodeArray[131].FreeSpace = false;
				DiodeArray[124].FreeSpace = false;
				DiodeArray[99].FreeSpace = false;
				break;
			case 188:
				enemyDiodeShootRoute_4 = 2;

				DiodeArray[163].FreeSpace = false;
				DiodeArray[156].FreeSpace = false;
				DiodeArray[131].FreeSpace = false;
				DiodeArray[124].FreeSpace = false;
				DiodeArray[99].FreeSpace = false;
				break;
			case 163:
				enemyDiodeShootRoute_4 = 3;

				DiodeArray[156].FreeSpace = false;
				DiodeArray[131].FreeSpace = false;
				DiodeArray[124].FreeSpace = false;
				DiodeArray[99].FreeSpace = false;
				break;
			case 156:
				enemyDiodeShootRoute_4 = 4;

				DiodeArray[131].FreeSpace = false;
				DiodeArray[124].FreeSpace = false;
				DiodeArray[99].FreeSpace = false;
				break;
			case 131:
				enemyDiodeShootRoute_4 = 5;

				DiodeArray[124].FreeSpace = false;
				DiodeArray[99].FreeSpace = false;
				break;
			case 124:
				enemyDiodeShootRoute_4 = 6;

				DiodeArray[99].FreeSpace = false;
				break;
			case 99:
				enemyDiodeShootRoute_4 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_4 = false;
		}
		switch (enemyDiodeShootRoute_4) {
		case 1:
			enemyShootFirstDiode_4 = false;
			DiodeArray[188].EnemyBullet = true;
			setPixelColor(188, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 188;
			break;
		case 2:
			if (enemyShootFirstDiode_4) {
				DiodeArray[163].EnemyBullet = true;
				setPixelColor(163, THEME);
				setPixelColor(163, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[188].FreeSpace = true;
				DiodeArray[188].EnemyBullet = false;
				setPixelColor(188, THEME);

				DiodeArray[163].EnemyBullet = true;
				setPixelColor(163, THEME);
				setPixelColor(163, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 163;
			break;
		case 3:
			if (enemyShootFirstDiode_4) {
				DiodeArray[156].EnemyBullet = true;
				setPixelColor(156, THEME);
				setPixelColor(156, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[163].FreeSpace = true;
				DiodeArray[163].EnemyBullet = false;
				setPixelColor(163, THEME);

				DiodeArray[156].EnemyBullet = true;
				setPixelColor(156, THEME);
				setPixelColor(156, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 156;
			break;
		case 4:
			if (enemyShootFirstDiode_4) {
				DiodeArray[131].EnemyBullet = true;
				setPixelColor(131, THEME);
				setPixelColor(131, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[156].FreeSpace = true;
				DiodeArray[156].EnemyBullet = false;
				setPixelColor(156, THEME);

				DiodeArray[131].EnemyBullet = true;
				setPixelColor(131, THEME);
				setPixelColor(131, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 131;
			break;
		case 5:
			if (enemyShootFirstDiode_4) {
				DiodeArray[124].EnemyBullet = true;
				setPixelColor(124, THEME);
				setPixelColor(124, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[131].FreeSpace = true;
				DiodeArray[131].EnemyBullet = false;
				setPixelColor(131, THEME);

				DiodeArray[124].EnemyBullet = true;
				setPixelColor(124, THEME);
				setPixelColor(124, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 124;
			break;
		case 6:
			if (enemyShootFirstDiode_4) {
				DiodeArray[99].EnemyBullet = true;
				setPixelColor(99, THEME);
				setPixelColor(99, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[124].FreeSpace = true;
				DiodeArray[124].EnemyBullet = false;
				setPixelColor(124, THEME);

				DiodeArray[99].EnemyBullet = true;
				setPixelColor(99, THEME);
				setPixelColor(99, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 99;
			break;
		case 7:
			if (enemyShootFirstDiode_4) {
				DiodeArray[92].EnemyBullet = true;
				setPixelColor(92, THEME);
				setPixelColor(92, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[99].FreeSpace = true;
				DiodeArray[99].EnemyBullet = false;
				setPixelColor(99, THEME);

				DiodeArray[92].EnemyBullet = true;
				setPixelColor(92, THEME);
				setPixelColor(92, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 92;
			break;
		case 8:
			DiodeArray[92].FreeSpace = true;
			DiodeArray[92].EnemyBullet = false;
			setPixelColor(92, THEME);

			DiodeArray[67].FreeSpace = false;
			DiodeArray[67].EnemyBullet = true;
			setPixelColor(67, THEME);
			setPixelColor(67, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 67;
			break;
		case 9:
			DiodeArray[67].FreeSpace = true;
			DiodeArray[67].EnemyBullet = false;
			setPixelColor(67, THEME);

			DiodeArray[60].FreeSpace = false;
			DiodeArray[60].EnemyBullet = true;
			setPixelColor(60, THEME);
			setPixelColor(60, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 60;
			break;
		case 10:
			DiodeArray[60].FreeSpace = true;
			DiodeArray[60].EnemyBullet = false;
			setPixelColor(60, THEME);

			DiodeArray[35].FreeSpace = false;
			DiodeArray[35].EnemyBullet = true;
			setPixelColor(35, THEME);
			setPixelColor(35, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 35;
			break;
		case 11:
			DiodeArray[35].FreeSpace = true;
			DiodeArray[35].EnemyBullet = false;
			setPixelColor(35, THEME);

			DiodeArray[28].FreeSpace = false;
			DiodeArray[28].EnemyBullet = true;
			setPixelColor(28, THEME);
			setPixelColor(28, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 28;
			break;
		case 12:
			DiodeArray[28].FreeSpace = true;
			DiodeArray[28].EnemyBullet = false;
			setPixelColor(28, THEME);

			DiodeArray[3].FreeSpace = false;
			DiodeArray[3].EnemyBullet = true;
			setPixelColor(3, THEME);
			setPixelColor(3, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 3;
			break;
		case 13:
			DiodeArray[3].FreeSpace = true;
			DiodeArray[3].EnemyBullet = false;
			setPixelColor(3, THEME);

			enemyShootFirstDiode_4 = true;
			enemyShootInit_4 = true;
			enemyActivateShoot_4 = false;
			break;
		default:
			break;
		}
		break;
	case 5:
		if (enemyShootInit_4) {
			switch (enemyDiodeStartShootID_4) {
			case 196:
				enemyDiodeShootRoute_4 = 1;

				DiodeArray[187].FreeSpace = false;
				DiodeArray[164].FreeSpace = false;
				DiodeArray[155].FreeSpace = false;
				DiodeArray[132].FreeSpace = false;
				DiodeArray[123].FreeSpace = false;
				DiodeArray[100].FreeSpace = false;
				break;
			case 187:
				enemyDiodeShootRoute_4 = 2;

				DiodeArray[164].FreeSpace = false;
				DiodeArray[155].FreeSpace = false;
				DiodeArray[132].FreeSpace = false;
				DiodeArray[123].FreeSpace = false;
				DiodeArray[100].FreeSpace = false;
				break;
			case 164:
				enemyDiodeShootRoute_4 = 3;

				DiodeArray[155].FreeSpace = false;
				DiodeArray[132].FreeSpace = false;
				DiodeArray[123].FreeSpace = false;
				DiodeArray[100].FreeSpace = false;
				break;
			case 155:
				enemyDiodeShootRoute_4 = 4;

				DiodeArray[132].FreeSpace = false;
				DiodeArray[123].FreeSpace = false;
				DiodeArray[100].FreeSpace = false;
				break;
			case 132:
				enemyDiodeShootRoute_4 = 5;

				DiodeArray[123].FreeSpace = false;
				DiodeArray[100].FreeSpace = false;
				break;
			case 123:
				enemyDiodeShootRoute_4 = 6;

				DiodeArray[100].FreeSpace = false;
				break;
			case 100:
				enemyDiodeShootRoute_4 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_4 = false;
		}
		switch (enemyDiodeShootRoute_4) {
		case 1:
			enemyShootFirstDiode_4 = false;
			DiodeArray[187].EnemyBullet = true;
			setPixelColor(187, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 187;
			break;
		case 2:
			if (enemyShootFirstDiode_4) {
				DiodeArray[164].EnemyBullet = true;
				setPixelColor(164, THEME);
				setPixelColor(164, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[187].FreeSpace = true;
				DiodeArray[187].EnemyBullet = false;
				setPixelColor(187, THEME);

				DiodeArray[164].EnemyBullet = true;
				setPixelColor(164, THEME);
				setPixelColor(164, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 164;
			break;
		case 3:
			if (enemyShootFirstDiode_4) {
				DiodeArray[155].EnemyBullet = true;
				setPixelColor(155, THEME);
				setPixelColor(155, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[164].FreeSpace = true;
				DiodeArray[164].EnemyBullet = false;
				setPixelColor(164, THEME);

				DiodeArray[155].EnemyBullet = true;
				setPixelColor(155, THEME);
				setPixelColor(155, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 155;
			break;
		case 4:
			if (enemyShootFirstDiode_4) {
				DiodeArray[132].EnemyBullet = true;
				setPixelColor(132, THEME);
				setPixelColor(132, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[155].FreeSpace = true;
				DiodeArray[155].EnemyBullet = false;
				setPixelColor(155, THEME);

				DiodeArray[132].EnemyBullet = true;
				setPixelColor(132, THEME);
				setPixelColor(132, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 132;
			break;
		case 5:
			if (enemyShootFirstDiode_4) {
				DiodeArray[123].EnemyBullet = true;
				setPixelColor(123, THEME);
				setPixelColor(123, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[132].FreeSpace = true;
				DiodeArray[132].EnemyBullet = false;
				setPixelColor(132, THEME);

				DiodeArray[123].EnemyBullet = true;
				setPixelColor(123, THEME);
				setPixelColor(123, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 123;
			break;
		case 6:
			if (enemyShootFirstDiode_4) {
				DiodeArray[100].EnemyBullet = true;
				setPixelColor(100, THEME);
				setPixelColor(100, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[123].FreeSpace = true;
				DiodeArray[123].EnemyBullet = false;
				setPixelColor(123, THEME);

				DiodeArray[100].EnemyBullet = true;
				setPixelColor(100, THEME);
				setPixelColor(100, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 100;
			break;
		case 7:
			if (enemyShootFirstDiode_4) {
				DiodeArray[91].EnemyBullet = true;
				setPixelColor(91, THEME);
				setPixelColor(91, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[100].FreeSpace = true;
				DiodeArray[100].EnemyBullet = false;
				setPixelColor(100, THEME);

				DiodeArray[91].EnemyBullet = true;
				setPixelColor(91, THEME);
				setPixelColor(91, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 91;
			break;
		case 8:
			DiodeArray[91].FreeSpace = true;
			DiodeArray[91].EnemyBullet = false;
			setPixelColor(91, THEME);

			DiodeArray[68].FreeSpace = false;
			DiodeArray[68].EnemyBullet = true;
			setPixelColor(68, THEME);
			setPixelColor(68, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 68;
			break;
		case 9:
			DiodeArray[68].FreeSpace = true;
			DiodeArray[68].EnemyBullet = false;
			setPixelColor(68, THEME);

			DiodeArray[59].FreeSpace = false;
			DiodeArray[59].EnemyBullet = true;
			setPixelColor(59, THEME);
			setPixelColor(59, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 59;
			break;
		case 10:
			DiodeArray[59].FreeSpace = true;
			DiodeArray[59].EnemyBullet = false;
			setPixelColor(59, THEME);

			DiodeArray[36].FreeSpace = false;
			DiodeArray[36].EnemyBullet = true;
			setPixelColor(36, THEME);
			setPixelColor(36, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 36;
			break;
		case 11:
			DiodeArray[36].FreeSpace = true;
			DiodeArray[36].EnemyBullet = false;
			setPixelColor(36, THEME);

			DiodeArray[27].FreeSpace = false;
			DiodeArray[27].EnemyBullet = true;
			setPixelColor(27, THEME);
			setPixelColor(27, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 27;
			break;
		case 12:
			DiodeArray[27].FreeSpace = true;
			DiodeArray[27].EnemyBullet = false;
			setPixelColor(27, THEME);

			DiodeArray[4].FreeSpace = false;
			DiodeArray[4].EnemyBullet = true;
			setPixelColor(4, THEME);
			setPixelColor(4, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 4;
			break;
		case 13:
			DiodeArray[4].FreeSpace = true;
			DiodeArray[4].EnemyBullet = false;
			setPixelColor(4, THEME);

			enemyShootFirstDiode_4 = true;
			enemyShootInit_4 = true;
			enemyActivateShoot_4 = false;
			break;
		default:
			break;
		}
		break;
	case 6:
		if (enemyShootInit_4) {
			switch (enemyDiodeStartShootID_4) {
			case 197:
				enemyDiodeShootRoute_4 = 1;

				DiodeArray[186].FreeSpace = false;
				DiodeArray[165].FreeSpace = false;
				DiodeArray[154].FreeSpace = false;
				DiodeArray[133].FreeSpace = false;
				DiodeArray[122].FreeSpace = false;
				DiodeArray[101].FreeSpace = false;
				break;
			case 186:
				enemyDiodeShootRoute_4 = 2;

				DiodeArray[165].FreeSpace = false;
				DiodeArray[154].FreeSpace = false;
				DiodeArray[133].FreeSpace = false;
				DiodeArray[122].FreeSpace = false;
				DiodeArray[101].FreeSpace = false;
				break;
			case 165:
				enemyDiodeShootRoute_4 = 3;

				DiodeArray[154].FreeSpace = false;
				DiodeArray[133].FreeSpace = false;
				DiodeArray[122].FreeSpace = false;
				DiodeArray[101].FreeSpace = false;
				break;
			case 154:
				enemyDiodeShootRoute_4 = 4;

				DiodeArray[133].FreeSpace = false;
				DiodeArray[122].FreeSpace = false;
				DiodeArray[101].FreeSpace = false;
				break;
			case 133:
				enemyDiodeShootRoute_4 = 5;

				DiodeArray[122].FreeSpace = false;
				DiodeArray[101].FreeSpace = false;
				break;
			case 122:
				enemyDiodeShootRoute_4 = 6;

				DiodeArray[101].FreeSpace = false;
				break;
			case 101:
				enemyDiodeShootRoute_4 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_4 = false;
		}
		switch (enemyDiodeShootRoute_4) {
		case 1:
			enemyShootFirstDiode_4 = false;
			DiodeArray[186].EnemyBullet = true;
			setPixelColor(186, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 186;
			break;
		case 2:
			if (enemyShootFirstDiode_4) {
				DiodeArray[165].EnemyBullet = true;
				setPixelColor(165, THEME);
				setPixelColor(165, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[186].FreeSpace = true;
				DiodeArray[186].EnemyBullet = false;
				setPixelColor(186, THEME);

				DiodeArray[165].EnemyBullet = true;
				setPixelColor(165, THEME);
				setPixelColor(165, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 165;
			break;
		case 3:
			if (enemyShootFirstDiode_4) {
				DiodeArray[154].EnemyBullet = true;
				setPixelColor(154, THEME);
				setPixelColor(154, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[165].FreeSpace = true;
				DiodeArray[165].EnemyBullet = false;
				setPixelColor(165, THEME);

				DiodeArray[154].EnemyBullet = true;
				setPixelColor(154, THEME);
				setPixelColor(154, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 154;
			break;
		case 4:
			if (enemyShootFirstDiode_4) {
				DiodeArray[133].EnemyBullet = true;
				setPixelColor(133, THEME);
				setPixelColor(133, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[154].FreeSpace = true;
				DiodeArray[154].EnemyBullet = false;
				setPixelColor(154, THEME);

				DiodeArray[133].EnemyBullet = true;
				setPixelColor(133, THEME);
				setPixelColor(133, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 133;
			break;
		case 5:
			if (enemyShootFirstDiode_4) {
				DiodeArray[122].EnemyBullet = true;
				setPixelColor(122, THEME);
				setPixelColor(122, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[133].FreeSpace = true;
				DiodeArray[133].EnemyBullet = false;
				setPixelColor(133, THEME);

				DiodeArray[122].EnemyBullet = true;
				setPixelColor(122, THEME);
				setPixelColor(122, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 122;
			break;
		case 6:
			if (enemyShootFirstDiode_4) {
				DiodeArray[101].EnemyBullet = true;
				setPixelColor(101, THEME);
				setPixelColor(101, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[122].FreeSpace = true;
				DiodeArray[122].EnemyBullet = false;
				setPixelColor(122, THEME);

				DiodeArray[101].EnemyBullet = true;
				setPixelColor(101, THEME);
				setPixelColor(101, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 101;
			break;
		case 7:
			if (enemyShootFirstDiode_4) {
				DiodeArray[90].EnemyBullet = true;
				setPixelColor(90, THEME);
				setPixelColor(90, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[101].FreeSpace = true;
				DiodeArray[101].EnemyBullet = false;
				setPixelColor(101, THEME);

				DiodeArray[90].EnemyBullet = true;
				setPixelColor(90, THEME);
				setPixelColor(90, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 90;
			break;
		case 8:
			DiodeArray[90].FreeSpace = true;
			DiodeArray[90].EnemyBullet = false;
			setPixelColor(90, THEME);

			DiodeArray[69].FreeSpace = false;
			DiodeArray[69].EnemyBullet = true;
			setPixelColor(69, THEME);
			setPixelColor(69, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 69;
			break;
		case 9:
			DiodeArray[69].FreeSpace = true;
			DiodeArray[69].EnemyBullet = false;
			setPixelColor(69, THEME);

			DiodeArray[58].FreeSpace = false;
			DiodeArray[58].EnemyBullet = true;
			setPixelColor(58, THEME);
			setPixelColor(58, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 58;
			break;
		case 10:
			DiodeArray[58].FreeSpace = true;
			DiodeArray[58].EnemyBullet = false;
			setPixelColor(58, THEME);

			DiodeArray[37].FreeSpace = false;
			DiodeArray[37].EnemyBullet = true;
			setPixelColor(37, THEME);
			setPixelColor(37, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 37;
			break;
		case 11:
			DiodeArray[37].FreeSpace = true;
			DiodeArray[37].EnemyBullet = false;
			setPixelColor(37, THEME);

			DiodeArray[26].FreeSpace = false;
			DiodeArray[26].EnemyBullet = true;
			setPixelColor(26, THEME);
			setPixelColor(26, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 26;
			break;
		case 12:
			DiodeArray[26].FreeSpace = true;
			DiodeArray[26].EnemyBullet = false;
			setPixelColor(26, THEME);

			DiodeArray[5].FreeSpace = false;
			DiodeArray[5].EnemyBullet = true;
			setPixelColor(5, THEME);
			setPixelColor(5, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 5;
			break;
		case 13:
			DiodeArray[5].FreeSpace = true;
			DiodeArray[5].EnemyBullet = false;
			setPixelColor(5, THEME);

			enemyShootFirstDiode_4 = true;
			enemyShootInit_4 = true;
			enemyActivateShoot_4 = false;
			break;
		default:
			break;
		}
		break;
	case 7:
		if (enemyShootInit_4) {
			switch (enemyDiodeStartShootID_4) {
			case 198:
				enemyDiodeShootRoute_4 = 1;

				DiodeArray[185].FreeSpace = false;
				DiodeArray[166].FreeSpace = false;
				DiodeArray[153].FreeSpace = false;
				DiodeArray[134].FreeSpace = false;
				DiodeArray[121].FreeSpace = false;
				DiodeArray[102].FreeSpace = false;
				break;
			case 185:
				enemyDiodeShootRoute_4 = 2;

				DiodeArray[166].FreeSpace = false;
				DiodeArray[153].FreeSpace = false;
				DiodeArray[134].FreeSpace = false;
				DiodeArray[121].FreeSpace = false;
				DiodeArray[102].FreeSpace = false;
				break;
			case 166:
				enemyDiodeShootRoute_4 = 3;

				DiodeArray[153].FreeSpace = false;
				DiodeArray[134].FreeSpace = false;
				DiodeArray[121].FreeSpace = false;
				DiodeArray[102].FreeSpace = false;
				break;
			case 153:
				enemyDiodeShootRoute_4 = 4;

				DiodeArray[134].FreeSpace = false;
				DiodeArray[121].FreeSpace = false;
				DiodeArray[102].FreeSpace = false;
				break;
			case 134:
				enemyDiodeShootRoute_4 = 5;

				DiodeArray[121].FreeSpace = false;
				DiodeArray[102].FreeSpace = false;
				break;
			case 121:
				enemyDiodeShootRoute_4 = 6;

				DiodeArray[102].FreeSpace = false;
				break;
			case 102:
				enemyDiodeShootRoute_4 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_4 = false;
		}
		switch (enemyDiodeShootRoute_4) {
		case 1:
			enemyShootFirstDiode_4 = false;
			DiodeArray[185].EnemyBullet = true;
			setPixelColor(185, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 185;
			break;
		case 2:
			if (enemyShootFirstDiode_4) {
				DiodeArray[166].EnemyBullet = true;
				setPixelColor(166, THEME);
				setPixelColor(166, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[185].FreeSpace = true;
				DiodeArray[185].EnemyBullet = false;
				setPixelColor(185, THEME);

				DiodeArray[166].EnemyBullet = true;
				setPixelColor(166, THEME);
				setPixelColor(166, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 166;
			break;
		case 3:
			if (enemyShootFirstDiode_4) {
				DiodeArray[153].EnemyBullet = true;
				setPixelColor(153, THEME);
				setPixelColor(153, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[166].FreeSpace = true;
				DiodeArray[166].EnemyBullet = false;
				setPixelColor(166, THEME);

				DiodeArray[153].EnemyBullet = true;
				setPixelColor(153, THEME);
				setPixelColor(153, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 153;
			break;
		case 4:
			if (enemyShootFirstDiode_4) {
				DiodeArray[134].EnemyBullet = true;
				setPixelColor(134, THEME);
				setPixelColor(134, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[153].FreeSpace = true;
				DiodeArray[153].EnemyBullet = false;
				setPixelColor(153, THEME);

				DiodeArray[134].EnemyBullet = true;
				setPixelColor(134, THEME);
				setPixelColor(134, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 134;
			break;
		case 5:
			if (enemyShootFirstDiode_4) {
				DiodeArray[121].EnemyBullet = true;
				setPixelColor(121, THEME);
				setPixelColor(121, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[134].FreeSpace = true;
				DiodeArray[134].EnemyBullet = false;
				setPixelColor(134, THEME);

				DiodeArray[121].EnemyBullet = true;
				setPixelColor(121, THEME);
				setPixelColor(121, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 121;
			break;
		case 6:
			if (enemyShootFirstDiode_4) {
				DiodeArray[102].EnemyBullet = true;
				setPixelColor(102, THEME);
				setPixelColor(102, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[121].FreeSpace = true;
				DiodeArray[121].EnemyBullet = false;
				setPixelColor(121, THEME);

				DiodeArray[102].EnemyBullet = true;
				setPixelColor(102, THEME);
				setPixelColor(102, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 102;
			break;
		case 7:
			if (enemyShootFirstDiode_4) {
				DiodeArray[89].EnemyBullet = true;
				setPixelColor(89, THEME);
				setPixelColor(89, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[102].FreeSpace = true;
				DiodeArray[102].EnemyBullet = false;
				setPixelColor(102, THEME);

				DiodeArray[89].EnemyBullet = true;
				setPixelColor(89, THEME);
				setPixelColor(89, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 89;
			break;
		case 8:
			DiodeArray[89].FreeSpace = true;
			DiodeArray[89].EnemyBullet = false;
			setPixelColor(89, THEME);

			DiodeArray[70].FreeSpace = false;
			DiodeArray[70].EnemyBullet = true;
			setPixelColor(70, THEME);
			setPixelColor(70, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 70;
			break;
		case 9:
			DiodeArray[70].FreeSpace = true;
			DiodeArray[70].EnemyBullet = false;
			setPixelColor(70, THEME);

			DiodeArray[57].FreeSpace = false;
			DiodeArray[57].EnemyBullet = true;
			setPixelColor(57, THEME);
			setPixelColor(57, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 57;
			break;
		case 10:
			DiodeArray[57].FreeSpace = true;
			DiodeArray[57].EnemyBullet = false;
			setPixelColor(57, THEME);

			DiodeArray[38].FreeSpace = false;
			DiodeArray[38].EnemyBullet = true;
			setPixelColor(38, THEME);
			setPixelColor(38, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 38;
			break;
		case 11:
			DiodeArray[38].FreeSpace = true;
			DiodeArray[38].EnemyBullet = false;
			setPixelColor(38, THEME);

			DiodeArray[25].FreeSpace = false;
			DiodeArray[25].EnemyBullet = true;
			setPixelColor(25, THEME);
			setPixelColor(25, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 25;
			break;
		case 12:
			DiodeArray[25].FreeSpace = true;
			DiodeArray[25].EnemyBullet = false;
			setPixelColor(25, THEME);

			DiodeArray[6].FreeSpace = false;
			DiodeArray[6].EnemyBullet = true;
			setPixelColor(6, THEME);
			setPixelColor(6, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 6;
			break;
		case 13:
			DiodeArray[6].FreeSpace = true;
			DiodeArray[6].EnemyBullet = false;
			setPixelColor(6, THEME);

			enemyShootFirstDiode_4 = true;
			enemyShootInit_4 = true;
			enemyActivateShoot_4 = false;
			break;
		default:
			break;
		}
		break;
	case 8:
		if (enemyShootInit_4) {
			switch (enemyDiodeStartShootID_4) {
			case 199:
				enemyDiodeShootRoute_4 = 1;

				DiodeArray[184].FreeSpace = false;
				DiodeArray[167].FreeSpace = false;
				DiodeArray[152].FreeSpace = false;
				DiodeArray[135].FreeSpace = false;
				DiodeArray[120].FreeSpace = false;
				DiodeArray[103].FreeSpace = false;
				break;
			case 184:
				enemyDiodeShootRoute_4 = 2;

				DiodeArray[167].FreeSpace = false;
				DiodeArray[152].FreeSpace = false;
				DiodeArray[135].FreeSpace = false;
				DiodeArray[120].FreeSpace = false;
				DiodeArray[103].FreeSpace = false;
				break;
			case 167:
				enemyDiodeShootRoute_4 = 3;

				DiodeArray[152].FreeSpace = false;
				DiodeArray[135].FreeSpace = false;
				DiodeArray[120].FreeSpace = false;
				DiodeArray[103].FreeSpace = false;
				break;
			case 152:
				enemyDiodeShootRoute_4 = 4;

				DiodeArray[135].FreeSpace = false;
				DiodeArray[120].FreeSpace = false;
				DiodeArray[103].FreeSpace = false;
				break;
			case 135:
				enemyDiodeShootRoute_4 = 5;

				DiodeArray[120].FreeSpace = false;
				DiodeArray[103].FreeSpace = false;
				break;
			case 120:
				enemyDiodeShootRoute_4 = 6;

				DiodeArray[103].FreeSpace = false;
				break;
			case 103:
				enemyDiodeShootRoute_4 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_4 = false;
		}
		switch (enemyDiodeShootRoute_4) {
		case 1:
			enemyShootFirstDiode_4 = false;
			DiodeArray[184].EnemyBullet = true;
			setPixelColor(184, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 184;
			break;
		case 2:
			if (enemyShootFirstDiode_4) {
				DiodeArray[167].EnemyBullet = true;
				setPixelColor(167, THEME);
				setPixelColor(167, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[184].FreeSpace = true;
				DiodeArray[184].EnemyBullet = false;
				setPixelColor(184, THEME);

				DiodeArray[167].EnemyBullet = true;
				setPixelColor(167, THEME);
				setPixelColor(167, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 167;
			break;
		case 3:
			if (enemyShootFirstDiode_4) {
				DiodeArray[152].EnemyBullet = true;
				setPixelColor(152, THEME);
				setPixelColor(152, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[167].FreeSpace = true;
				DiodeArray[167].EnemyBullet = false;
				setPixelColor(167, THEME);

				DiodeArray[152].EnemyBullet = true;
				setPixelColor(152, THEME);
				setPixelColor(152, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 152;
			break;
		case 4:
			if (enemyShootFirstDiode_4) {
				DiodeArray[135].EnemyBullet = true;
				setPixelColor(135, THEME);
				setPixelColor(135, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[152].FreeSpace = true;
				DiodeArray[152].EnemyBullet = false;
				setPixelColor(152, THEME);

				DiodeArray[135].EnemyBullet = true;
				setPixelColor(135, THEME);
				setPixelColor(135, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 135;
			break;
		case 5:
			if (enemyShootFirstDiode_4) {
				DiodeArray[120].EnemyBullet = true;
				setPixelColor(120, THEME);
				setPixelColor(120, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[135].FreeSpace = true;
				DiodeArray[135].EnemyBullet = false;
				setPixelColor(135, THEME);

				DiodeArray[120].EnemyBullet = true;
				setPixelColor(120, THEME);
				setPixelColor(120, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 120;
			break;
		case 6:
			if (enemyShootFirstDiode_4) {
				DiodeArray[103].EnemyBullet = true;
				setPixelColor(103, THEME);
				setPixelColor(103, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[120].FreeSpace = true;
				DiodeArray[120].EnemyBullet = false;
				setPixelColor(120, THEME);

				DiodeArray[103].EnemyBullet = true;
				setPixelColor(103, THEME);
				setPixelColor(103, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 103;
			break;
		case 7:
			if (enemyShootFirstDiode_4) {
				DiodeArray[88].EnemyBullet = true;
				setPixelColor(88, THEME);
				setPixelColor(88, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[103].FreeSpace = true;
				DiodeArray[103].EnemyBullet = false;
				setPixelColor(103, THEME);

				DiodeArray[88].EnemyBullet = true;
				setPixelColor(88, THEME);
				setPixelColor(88, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 88;
			break;
		case 8:
			DiodeArray[88].FreeSpace = true;
			DiodeArray[88].EnemyBullet = false;
			setPixelColor(88, THEME);

			DiodeArray[71].FreeSpace = false;
			DiodeArray[71].EnemyBullet = true;
			setPixelColor(71, THEME);
			setPixelColor(71, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 71;
			break;
		case 9:
			DiodeArray[71].FreeSpace = true;
			DiodeArray[71].EnemyBullet = false;
			setPixelColor(71, THEME);

			DiodeArray[56].FreeSpace = false;
			DiodeArray[56].EnemyBullet = true;
			setPixelColor(56, THEME);
			setPixelColor(56, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 56;
			break;
		case 10:
			DiodeArray[56].FreeSpace = true;
			DiodeArray[56].EnemyBullet = false;
			setPixelColor(56, THEME);

			DiodeArray[39].FreeSpace = false;
			DiodeArray[39].EnemyBullet = true;
			setPixelColor(39, THEME);
			setPixelColor(39, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 39;
			break;
		case 11:
			DiodeArray[39].FreeSpace = true;
			DiodeArray[39].EnemyBullet = false;
			setPixelColor(39, THEME);

			DiodeArray[24].FreeSpace = false;
			DiodeArray[24].EnemyBullet = true;
			setPixelColor(24, THEME);
			setPixelColor(24, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 24;
			break;
		case 12:
			DiodeArray[24].FreeSpace = true;
			DiodeArray[24].EnemyBullet = false;
			setPixelColor(24, THEME);

			DiodeArray[7].FreeSpace = false;
			DiodeArray[7].EnemyBullet = true;
			setPixelColor(7, THEME);
			setPixelColor(7, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 7;
			break;
		case 13:
			DiodeArray[7].FreeSpace = true;
			DiodeArray[7].EnemyBullet = false;
			setPixelColor(7, THEME);

			enemyShootFirstDiode_4 = true;
			enemyShootInit_4 = true;
			enemyActivateShoot_4 = false;
			break;
		default:
			break;
		}
		break;
	case 9:
		if (enemyShootInit_4) {
			switch (enemyDiodeStartShootID_4) {
			case 200:
				enemyDiodeShootRoute_4 = 1;

				DiodeArray[183].FreeSpace = false;
				DiodeArray[168].FreeSpace = false;
				DiodeArray[151].FreeSpace = false;
				DiodeArray[136].FreeSpace = false;
				DiodeArray[119].FreeSpace = false;
				DiodeArray[104].FreeSpace = false;
				break;
			case 183:
				enemyDiodeShootRoute_4 = 2;

				DiodeArray[168].FreeSpace = false;
				DiodeArray[151].FreeSpace = false;
				DiodeArray[136].FreeSpace = false;
				DiodeArray[119].FreeSpace = false;
				DiodeArray[104].FreeSpace = false;
				break;
			case 168:
				enemyDiodeShootRoute_4 = 3;

				DiodeArray[151].FreeSpace = false;
				DiodeArray[136].FreeSpace = false;
				DiodeArray[119].FreeSpace = false;
				DiodeArray[104].FreeSpace = false;
				break;
			case 151:
				enemyDiodeShootRoute_4 = 4;

				DiodeArray[136].FreeSpace = false;
				DiodeArray[119].FreeSpace = false;
				DiodeArray[104].FreeSpace = false;
				break;
			case 136:
				enemyDiodeShootRoute_4 = 5;

				DiodeArray[119].FreeSpace = false;
				DiodeArray[104].FreeSpace = false;
				break;
			case 119:
				enemyDiodeShootRoute_4 = 6;

				DiodeArray[104].FreeSpace = false;
				break;
			case 104:
				enemyDiodeShootRoute_4 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_4 = false;
		}
		switch (enemyDiodeShootRoute_4) {
		case 1:
			enemyShootFirstDiode_4 = false;
			DiodeArray[183].EnemyBullet = true;
			setPixelColor(183, ENEMY_BULLET);
			break;
		case 2:
			if (enemyShootFirstDiode_4) {
				DiodeArray[168].EnemyBullet = true;
				setPixelColor(168, THEME);
				setPixelColor(168, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[183].FreeSpace = true;
				DiodeArray[183].EnemyBullet = false;
				setPixelColor(183, THEME);

				DiodeArray[168].EnemyBullet = true;
				setPixelColor(168, THEME);
				setPixelColor(168, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 168;
			break;
		case 3:
			if (enemyShootFirstDiode_4) {
				DiodeArray[151].EnemyBullet = true;
				setPixelColor(151, THEME);
				setPixelColor(151, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[168].FreeSpace = true;
				DiodeArray[168].EnemyBullet = false;
				setPixelColor(168, THEME);

				DiodeArray[151].EnemyBullet = true;
				setPixelColor(151, THEME);
				setPixelColor(151, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 151;
			break;
		case 4:
			if (enemyShootFirstDiode_4) {
				DiodeArray[136].EnemyBullet = true;
				setPixelColor(136, THEME);
				setPixelColor(136, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[151].FreeSpace = true;
				DiodeArray[151].EnemyBullet = false;
				setPixelColor(151, THEME);

				DiodeArray[136].EnemyBullet = true;
				setPixelColor(136, THEME);
				setPixelColor(136, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 136;
			break;
		case 5:
			if (enemyShootFirstDiode_4) {
				DiodeArray[119].EnemyBullet = true;
				setPixelColor(119, THEME);
				setPixelColor(119, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[136].FreeSpace = true;
				DiodeArray[136].EnemyBullet = false;
				setPixelColor(136, THEME);

				DiodeArray[119].EnemyBullet = true;
				setPixelColor(119, THEME);
				setPixelColor(119, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 119;
			break;
		case 6:
			if (enemyShootFirstDiode_4) {
				DiodeArray[104].EnemyBullet = true;
				setPixelColor(104, THEME);
				setPixelColor(104, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[119].FreeSpace = true;
				DiodeArray[119].EnemyBullet = false;
				setPixelColor(119, THEME);

				DiodeArray[104].EnemyBullet = true;
				setPixelColor(104, THEME);
				setPixelColor(104, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 104;
			break;
		case 7:
			if (enemyShootFirstDiode_4) {
				DiodeArray[87].EnemyBullet = true;
				setPixelColor(87, THEME);
				setPixelColor(87, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[104].FreeSpace = true;
				DiodeArray[104].EnemyBullet = false;
				setPixelColor(104, THEME);

				DiodeArray[87].EnemyBullet = true;
				setPixelColor(87, THEME);
				setPixelColor(87, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 87;
			break;
		case 8:
			DiodeArray[87].FreeSpace = true;
			DiodeArray[87].EnemyBullet = false;
			setPixelColor(87, THEME);

			DiodeArray[72].FreeSpace = false;
			DiodeArray[72].EnemyBullet = true;
			setPixelColor(72, THEME);
			setPixelColor(72, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 72;
			break;
		case 9:
			DiodeArray[72].FreeSpace = true;
			DiodeArray[72].EnemyBullet = false;
			setPixelColor(72, THEME);

			DiodeArray[55].FreeSpace = false;
			DiodeArray[55].EnemyBullet = true;
			setPixelColor(55, THEME);
			setPixelColor(55, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 55;
			break;
		case 10:
			DiodeArray[55].FreeSpace = true;
			DiodeArray[55].EnemyBullet = false;
			setPixelColor(55, THEME);

			DiodeArray[40].FreeSpace = false;
			DiodeArray[40].EnemyBullet = true;
			setPixelColor(40, THEME);
			setPixelColor(40, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 40;
			break;
		case 11:
			DiodeArray[40].FreeSpace = true;
			DiodeArray[40].EnemyBullet = false;
			setPixelColor(40, THEME);

			DiodeArray[23].FreeSpace = false;
			DiodeArray[23].EnemyBullet = true;
			setPixelColor(23, THEME);
			setPixelColor(23, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 23;
			break;
		case 12:
			DiodeArray[23].FreeSpace = true;
			DiodeArray[23].EnemyBullet = false;
			setPixelColor(23, THEME);

			DiodeArray[8].FreeSpace = false;
			DiodeArray[8].EnemyBullet = true;
			setPixelColor(8, THEME);
			setPixelColor(8, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 8;
			break;
		case 13:
			DiodeArray[8].FreeSpace = true;
			DiodeArray[8].EnemyBullet = false;
			setPixelColor(8, THEME);

			enemyShootFirstDiode_4 = true;
			enemyShootInit_4 = true;
			enemyActivateShoot_4 = false;
			break;
		default:
			break;
		}
		break;
	case 10:
		if (enemyShootInit_4) {
			switch (enemyDiodeStartShootID_4) {
			case 201:
				enemyDiodeShootRoute_4 = 1;

				DiodeArray[182].FreeSpace = false;
				DiodeArray[169].FreeSpace = false;
				DiodeArray[150].FreeSpace = false;
				DiodeArray[137].FreeSpace = false;
				DiodeArray[118].FreeSpace = false;
				DiodeArray[105].FreeSpace = false;
				break;
			case 182:
				enemyDiodeShootRoute_4 = 2;

				DiodeArray[169].FreeSpace = false;
				DiodeArray[150].FreeSpace = false;
				DiodeArray[137].FreeSpace = false;
				DiodeArray[118].FreeSpace = false;
				DiodeArray[105].FreeSpace = false;
				break;
			case 169:
				enemyDiodeShootRoute_4 = 3;

				DiodeArray[150].FreeSpace = false;
				DiodeArray[137].FreeSpace = false;
				DiodeArray[118].FreeSpace = false;
				DiodeArray[105].FreeSpace = false;
				break;
			case 150:
				enemyDiodeShootRoute_4 = 4;

				DiodeArray[137].FreeSpace = false;
				DiodeArray[118].FreeSpace = false;
				DiodeArray[105].FreeSpace = false;
				break;
			case 137:
				enemyDiodeShootRoute_4 = 5;

				DiodeArray[118].FreeSpace = false;
				DiodeArray[105].FreeSpace = false;
				break;
			case 118:
				enemyDiodeShootRoute_4 = 6;

				DiodeArray[105].FreeSpace = false;
				break;
			case 105:
				enemyDiodeShootRoute_4 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_4 = false;
		}
		switch (enemyDiodeShootRoute_4) {
		case 1:
			enemyShootFirstDiode_4 = false;
			DiodeArray[182].EnemyBullet = true;
			setPixelColor(182, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 182;
			break;
		case 2:
			if (enemyShootFirstDiode_4) {
				DiodeArray[169].EnemyBullet = true;
				setPixelColor(169, THEME);
				setPixelColor(169, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[182].FreeSpace = true;
				DiodeArray[182].EnemyBullet = false;
				setPixelColor(182, THEME);

				DiodeArray[169].EnemyBullet = true;
				setPixelColor(169, THEME);
				setPixelColor(169, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 169;
			break;
		case 3:
			if (enemyShootFirstDiode_4) {
				DiodeArray[150].EnemyBullet = true;
				setPixelColor(150, THEME);
				setPixelColor(150, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[169].FreeSpace = true;
				DiodeArray[169].EnemyBullet = false;
				setPixelColor(169, THEME);

				DiodeArray[150].EnemyBullet = true;
				setPixelColor(150, THEME);
				setPixelColor(150, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 150;
			break;
		case 4:
			if (enemyShootFirstDiode_4) {
				DiodeArray[137].EnemyBullet = true;
				setPixelColor(137, THEME);
				setPixelColor(137, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[150].FreeSpace = true;
				DiodeArray[150].EnemyBullet = false;
				setPixelColor(150, THEME);

				DiodeArray[137].EnemyBullet = true;
				setPixelColor(137, THEME);
				setPixelColor(137, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 137;
			break;
		case 5:
			if (enemyShootFirstDiode_4) {
				DiodeArray[118].EnemyBullet = true;
				setPixelColor(118, THEME);
				setPixelColor(118, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[137].FreeSpace = true;
				DiodeArray[137].EnemyBullet = false;
				setPixelColor(137, THEME);

				DiodeArray[118].EnemyBullet = true;
				setPixelColor(118, THEME);
				setPixelColor(118, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 118;
			break;
		case 6:
			if (enemyShootFirstDiode_4) {
				DiodeArray[105].EnemyBullet = true;
				setPixelColor(105, THEME);
				setPixelColor(105, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[118].FreeSpace = true;
				DiodeArray[118].EnemyBullet = false;
				setPixelColor(118, THEME);

				DiodeArray[105].EnemyBullet = true;
				setPixelColor(105, THEME);
				setPixelColor(105, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 105;
			break;
		case 7:
			if (enemyShootFirstDiode_4) {
				DiodeArray[86].EnemyBullet = true;
				setPixelColor(86, THEME);
				setPixelColor(86, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[105].FreeSpace = true;
				DiodeArray[105].EnemyBullet = false;
				setPixelColor(105, THEME);

				DiodeArray[86].EnemyBullet = true;
				setPixelColor(86, THEME);
				setPixelColor(86, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 86;
			break;
		case 8:
			DiodeArray[86].FreeSpace = true;
			DiodeArray[86].EnemyBullet = false;
			setPixelColor(86, THEME);

			DiodeArray[73].FreeSpace = false;
			DiodeArray[73].EnemyBullet = true;
			setPixelColor(73, THEME);
			setPixelColor(73, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 73;
			break;
		case 9:
			DiodeArray[73].FreeSpace = true;
			DiodeArray[73].EnemyBullet = false;
			setPixelColor(73, THEME);

			DiodeArray[54].FreeSpace = false;
			DiodeArray[54].EnemyBullet = true;
			setPixelColor(54, THEME);
			setPixelColor(54, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 54;
			break;
		case 10:
			DiodeArray[54].FreeSpace = true;
			DiodeArray[54].EnemyBullet = false;
			setPixelColor(54, THEME);

			DiodeArray[41].FreeSpace = false;
			DiodeArray[41].EnemyBullet = true;
			setPixelColor(41, THEME);
			setPixelColor(41, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 41;
			break;
		case 11:
			DiodeArray[41].FreeSpace = true;
			DiodeArray[41].EnemyBullet = false;
			setPixelColor(41, THEME);

			DiodeArray[22].FreeSpace = false;
			DiodeArray[22].EnemyBullet = true;
			setPixelColor(22, THEME);
			setPixelColor(22, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 22;
			break;
		case 12:
			DiodeArray[22].FreeSpace = true;
			DiodeArray[22].EnemyBullet = false;
			setPixelColor(22, THEME);

			DiodeArray[9].FreeSpace = false;
			DiodeArray[9].EnemyBullet = true;
			setPixelColor(9, THEME);
			setPixelColor(9, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 9;
			break;
		case 13:
			DiodeArray[9].FreeSpace = true;
			DiodeArray[9].EnemyBullet = false;
			setPixelColor(9, THEME);

			enemyShootFirstDiode_4 = true;
			enemyShootInit_4 = true;
			enemyActivateShoot_4 = false;
			break;
		default:
			break;
		}
		break;
	case 11:
		if (enemyShootInit_4) {
			switch (enemyDiodeStartShootID_4) {
			case 202:
				enemyDiodeShootRoute_4 = 1;

				DiodeArray[181].FreeSpace = false;
				DiodeArray[170].FreeSpace = false;
				DiodeArray[149].FreeSpace = false;
				DiodeArray[138].FreeSpace = false;
				DiodeArray[117].FreeSpace = false;
				DiodeArray[106].FreeSpace = false;
				break;
			case 181:
				enemyDiodeShootRoute_4 = 2;

				DiodeArray[170].FreeSpace = false;
				DiodeArray[149].FreeSpace = false;
				DiodeArray[138].FreeSpace = false;
				DiodeArray[117].FreeSpace = false;
				DiodeArray[106].FreeSpace = false;
				break;
			case 170:
				enemyDiodeShootRoute_4 = 3;

				DiodeArray[149].FreeSpace = false;
				DiodeArray[138].FreeSpace = false;
				DiodeArray[117].FreeSpace = false;
				DiodeArray[106].FreeSpace = false;
				break;
			case 149:
				enemyDiodeShootRoute_4 = 4;

				DiodeArray[138].FreeSpace = false;
				DiodeArray[117].FreeSpace = false;
				DiodeArray[106].FreeSpace = false;
				break;
			case 138:
				enemyDiodeShootRoute_4 = 5;

				DiodeArray[117].FreeSpace = false;
				DiodeArray[106].FreeSpace = false;
				break;
			case 117:
				enemyDiodeShootRoute_4 = 6;

				DiodeArray[106].FreeSpace = false;
				break;
			case 106:
				enemyDiodeShootRoute_4 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_4 = false;
		}
		switch (enemyDiodeShootRoute_4) {
		case 1:
			enemyShootFirstDiode_4 = false;
			DiodeArray[181].EnemyBullet = true;
			setPixelColor(181, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 181;
			break;
		case 2:
			if (enemyShootFirstDiode_4) {
				DiodeArray[170].EnemyBullet = true;
				setPixelColor(170, THEME);
				setPixelColor(170, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[181].FreeSpace = true;
				DiodeArray[181].EnemyBullet = false;
				setPixelColor(181, THEME);

				DiodeArray[170].EnemyBullet = true;
				setPixelColor(170, THEME);
				setPixelColor(170, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 170;
			break;
		case 3:
			if (enemyShootFirstDiode_4) {
				DiodeArray[149].EnemyBullet = true;
				setPixelColor(149, THEME);
				setPixelColor(149, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[170].FreeSpace = true;
				DiodeArray[170].EnemyBullet = false;
				setPixelColor(170, THEME);

				DiodeArray[149].EnemyBullet = true;
				setPixelColor(149, THEME);
				setPixelColor(149, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 149;
			break;
		case 4:
			if (enemyShootFirstDiode_4) {
				DiodeArray[138].EnemyBullet = true;
				setPixelColor(138, THEME);
				setPixelColor(138, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[149].FreeSpace = true;
				DiodeArray[149].EnemyBullet = false;
				setPixelColor(149, THEME);

				DiodeArray[138].EnemyBullet = true;
				setPixelColor(138, THEME);
				setPixelColor(138, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 138;
			break;
		case 5:
			if (enemyShootFirstDiode_4) {
				DiodeArray[117].EnemyBullet = true;
				setPixelColor(117, THEME);
				setPixelColor(117, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[138].FreeSpace = true;
				DiodeArray[138].EnemyBullet = false;
				setPixelColor(138, THEME);

				DiodeArray[117].EnemyBullet = true;
				setPixelColor(117, THEME);
				setPixelColor(117, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 117;
			break;
		case 6:
			if (enemyShootFirstDiode_4) {
				DiodeArray[106].EnemyBullet = true;
				setPixelColor(106, THEME);
				setPixelColor(106, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[117].FreeSpace = true;
				DiodeArray[117].EnemyBullet = false;
				setPixelColor(117, THEME);

				DiodeArray[106].EnemyBullet = true;
				setPixelColor(106, THEME);
				setPixelColor(106, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 106;
			break;
		case 7:
			if (enemyShootFirstDiode_4) {
				DiodeArray[85].EnemyBullet = true;
				setPixelColor(85, THEME);
				setPixelColor(85, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[106].FreeSpace = true;
				DiodeArray[106].EnemyBullet = false;
				setPixelColor(106, THEME);

				DiodeArray[85].EnemyBullet = true;
				setPixelColor(85, THEME);
				setPixelColor(85, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 85;
			break;
		case 8:
			DiodeArray[85].FreeSpace = true;
			DiodeArray[85].EnemyBullet = false;
			setPixelColor(85, THEME);

			DiodeArray[74].FreeSpace = false;
			DiodeArray[74].EnemyBullet = true;
			setPixelColor(74, THEME);
			setPixelColor(74, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 74;
			break;
		case 9:
			DiodeArray[74].FreeSpace = true;
			DiodeArray[74].EnemyBullet = false;
			setPixelColor(74, THEME);

			DiodeArray[53].FreeSpace = false;
			DiodeArray[53].EnemyBullet = true;
			setPixelColor(53, THEME);
			setPixelColor(53, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 53;
			break;
		case 10:
			DiodeArray[53].FreeSpace = true;
			DiodeArray[53].EnemyBullet = false;
			setPixelColor(53, THEME);

			DiodeArray[42].FreeSpace = false;
			DiodeArray[42].EnemyBullet = true;
			setPixelColor(42, THEME);
			setPixelColor(42, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 42;
			break;
		case 11:
			DiodeArray[42].FreeSpace = true;
			DiodeArray[42].EnemyBullet = false;
			setPixelColor(42, THEME);

			DiodeArray[21].FreeSpace = false;
			DiodeArray[21].EnemyBullet = true;
			setPixelColor(21, THEME);
			setPixelColor(21, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 21;
			break;
		case 12:
			DiodeArray[21].FreeSpace = true;
			DiodeArray[21].EnemyBullet = false;
			setPixelColor(21, THEME);

			DiodeArray[10].FreeSpace = false;
			DiodeArray[10].EnemyBullet = true;
			setPixelColor(10, THEME);
			setPixelColor(10, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 10;
			break;
		case 13:
			DiodeArray[10].FreeSpace = true;
			DiodeArray[10].EnemyBullet = false;
			setPixelColor(10, THEME);

			enemyShootFirstDiode_4 = true;
			enemyShootInit_4 = true;
			enemyActivateShoot_4 = false;
			break;
		default:
			break;
		}
		break;
	case 12:
		if (enemyShootInit_4) {
			switch (enemyDiodeStartShootID_4) {
			case 203:
				enemyDiodeShootRoute_4 = 1;

				DiodeArray[180].FreeSpace = false;
				DiodeArray[171].FreeSpace = false;
				DiodeArray[148].FreeSpace = false;
				DiodeArray[139].FreeSpace = false;
				DiodeArray[116].FreeSpace = false;
				DiodeArray[107].FreeSpace = false;
				break;
			case 180:
				enemyDiodeShootRoute_4 = 2;

				DiodeArray[171].FreeSpace = false;
				DiodeArray[148].FreeSpace = false;
				DiodeArray[139].FreeSpace = false;
				DiodeArray[116].FreeSpace = false;
				DiodeArray[107].FreeSpace = false;
				break;
			case 171:
				enemyDiodeShootRoute_4 = 3;

				DiodeArray[148].FreeSpace = false;
				DiodeArray[139].FreeSpace = false;
				DiodeArray[116].FreeSpace = false;
				DiodeArray[107].FreeSpace = false;
				break;
			case 148:
				enemyDiodeShootRoute_4 = 4;

				DiodeArray[139].FreeSpace = false;
				DiodeArray[116].FreeSpace = false;
				DiodeArray[107].FreeSpace = false;
				break;
			case 139:
				enemyDiodeShootRoute_4 = 5;

				DiodeArray[116].FreeSpace = false;
				DiodeArray[107].FreeSpace = false;
				break;
			case 116:
				enemyDiodeShootRoute_4 = 6;

				DiodeArray[107].FreeSpace = false;
				break;
			case 107:
				enemyDiodeShootRoute_4 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_4 = false;
		}
		switch (enemyDiodeShootRoute_4) {
		case 1:
			enemyShootFirstDiode_4 = false;
			DiodeArray[180].EnemyBullet = true;
			setPixelColor(180, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 180;
			break;
		case 2:
			if (enemyShootFirstDiode_4) {
				DiodeArray[171].EnemyBullet = true;
				setPixelColor(171, THEME);
				setPixelColor(171, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[180].FreeSpace = true;
				DiodeArray[180].EnemyBullet = false;
				setPixelColor(180, THEME);

				DiodeArray[171].EnemyBullet = true;
				setPixelColor(171, THEME);
				setPixelColor(171, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 171;
			break;
		case 3:
			if (enemyShootFirstDiode_4) {
				DiodeArray[148].EnemyBullet = true;
				setPixelColor(148, THEME);
				setPixelColor(148, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[171].FreeSpace = true;
				DiodeArray[171].EnemyBullet = false;
				setPixelColor(171, THEME);

				DiodeArray[148].EnemyBullet = true;
				setPixelColor(148, THEME);
				setPixelColor(148, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 148;
			break;
		case 4:
			if (enemyShootFirstDiode_4) {
				DiodeArray[139].EnemyBullet = true;
				setPixelColor(139, THEME);
				setPixelColor(139, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[148].FreeSpace = true;
				DiodeArray[148].EnemyBullet = false;
				setPixelColor(148, THEME);

				DiodeArray[139].EnemyBullet = true;
				setPixelColor(139, THEME);
				setPixelColor(139, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 139;
			break;
		case 5:
			if (enemyShootFirstDiode_4) {
				DiodeArray[116].EnemyBullet = true;
				setPixelColor(116, THEME);
				setPixelColor(116, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[139].FreeSpace = true;
				DiodeArray[139].EnemyBullet = false;
				setPixelColor(139, THEME);

				DiodeArray[116].EnemyBullet = true;
				setPixelColor(116, THEME);
				setPixelColor(116, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 116;
			break;
		case 6:
			if (enemyShootFirstDiode_4) {
				DiodeArray[107].EnemyBullet = true;
				setPixelColor(107, THEME);
				setPixelColor(107, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[116].FreeSpace = true;
				DiodeArray[116].EnemyBullet = false;
				setPixelColor(116, THEME);

				DiodeArray[107].EnemyBullet = true;
				setPixelColor(107, THEME);
				setPixelColor(107, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 107;
			break;
		case 7:
			if (enemyShootFirstDiode_4) {
				DiodeArray[84].EnemyBullet = true;
				setPixelColor(84, THEME);
				setPixelColor(84, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[107].FreeSpace = true;
				DiodeArray[107].EnemyBullet = false;
				setPixelColor(107, THEME);

				DiodeArray[84].EnemyBullet = true;
				setPixelColor(84, THEME);
				setPixelColor(84, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 84;
			break;
		case 8:
			DiodeArray[84].FreeSpace = true;
			DiodeArray[84].EnemyBullet = false;
			setPixelColor(84, THEME);

			DiodeArray[75].FreeSpace = false;
			DiodeArray[75].EnemyBullet = true;
			setPixelColor(75, THEME);
			setPixelColor(75, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 75;
			break;
		case 9:
			DiodeArray[75].FreeSpace = true;
			DiodeArray[75].EnemyBullet = false;
			setPixelColor(75, THEME);

			DiodeArray[52].FreeSpace = false;
			DiodeArray[52].EnemyBullet = true;
			setPixelColor(52, THEME);
			setPixelColor(52, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 52;
			break;
		case 10:
			DiodeArray[52].FreeSpace = true;
			DiodeArray[52].EnemyBullet = false;
			setPixelColor(52, THEME);

			DiodeArray[43].FreeSpace = false;
			DiodeArray[43].EnemyBullet = true;
			setPixelColor(43, THEME);
			setPixelColor(43, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 43;
			break;
		case 11:
			DiodeArray[43].FreeSpace = true;
			DiodeArray[43].EnemyBullet = false;
			setPixelColor(43, THEME);

			DiodeArray[20].FreeSpace = false;
			DiodeArray[20].EnemyBullet = true;
			setPixelColor(20, THEME);
			setPixelColor(20, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 20;
			break;
		case 12:
			DiodeArray[20].FreeSpace = true;
			DiodeArray[20].EnemyBullet = false;
			setPixelColor(20, THEME);

			DiodeArray[11].FreeSpace = false;
			DiodeArray[11].EnemyBullet = true;
			setPixelColor(11, THEME);
			setPixelColor(11, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 11;
			break;
		case 13:
			DiodeArray[11].FreeSpace = true;
			DiodeArray[11].EnemyBullet = false;
			setPixelColor(11, THEME);

			enemyShootFirstDiode_4 = true;
			enemyShootInit_4 = true;
			enemyActivateShoot_4 = false;
			break;
		default:
			break;
		}
		break;
	case 13:
		if (enemyShootInit_4) {
			switch (enemyDiodeStartShootID_4) {
			case 204:
				enemyDiodeShootRoute_4 = 1;

				DiodeArray[179].FreeSpace = false;
				DiodeArray[172].FreeSpace = false;
				DiodeArray[147].FreeSpace = false;
				DiodeArray[140].FreeSpace = false;
				DiodeArray[115].FreeSpace = false;
				DiodeArray[108].FreeSpace = false;
				break;
			case 179:
				enemyDiodeShootRoute_4 = 2;

				DiodeArray[172].FreeSpace = false;
				DiodeArray[147].FreeSpace = false;
				DiodeArray[140].FreeSpace = false;
				DiodeArray[115].FreeSpace = false;
				DiodeArray[108].FreeSpace = false;
				break;
			case 172:
				enemyDiodeShootRoute_4 = 3;

				DiodeArray[147].FreeSpace = false;
				DiodeArray[140].FreeSpace = false;
				DiodeArray[115].FreeSpace = false;
				DiodeArray[108].FreeSpace = false;
				break;
			case 147:
				enemyDiodeShootRoute_4 = 4;

				DiodeArray[140].FreeSpace = false;
				DiodeArray[115].FreeSpace = false;
				DiodeArray[108].FreeSpace = false;
				break;
			case 140:
				enemyDiodeShootRoute_4 = 5;

				DiodeArray[115].FreeSpace = false;
				DiodeArray[108].FreeSpace = false;
				break;
			case 115:
				enemyDiodeShootRoute_4 = 6;

				DiodeArray[108].FreeSpace = false;
				break;
			case 108:
				enemyDiodeShootRoute_4 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_4 = false;
		}
		switch (enemyDiodeShootRoute_4) {
		case 1:
			enemyShootFirstDiode_4 = false;
			DiodeArray[179].EnemyBullet = true;
			setPixelColor(179, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 179;
			break;
		case 2:
			if (enemyShootFirstDiode_4) {
				DiodeArray[172].EnemyBullet = true;
				setPixelColor(172, THEME);
				setPixelColor(172, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[179].FreeSpace = true;
				DiodeArray[179].EnemyBullet = false;
				setPixelColor(179, THEME);

				DiodeArray[172].EnemyBullet = true;
				setPixelColor(172, THEME);
				setPixelColor(172, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 172;
			break;
		case 3:
			if (enemyShootFirstDiode_4) {
				DiodeArray[147].EnemyBullet = true;
				setPixelColor(147, THEME);
				setPixelColor(147, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[172].FreeSpace = true;
				DiodeArray[172].EnemyBullet = false;
				setPixelColor(172, THEME);

				DiodeArray[147].EnemyBullet = true;
				setPixelColor(147, THEME);
				setPixelColor(147, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 147;
			break;
		case 4:
			if (enemyShootFirstDiode_4) {
				DiodeArray[140].EnemyBullet = true;
				setPixelColor(140, THEME);
				setPixelColor(140, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[147].FreeSpace = true;
				DiodeArray[147].EnemyBullet = false;
				setPixelColor(147, THEME);

				DiodeArray[140].EnemyBullet = true;
				setPixelColor(140, THEME);
				setPixelColor(140, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 140;
			break;
		case 5:
			if (enemyShootFirstDiode_4) {
				DiodeArray[115].EnemyBullet = true;
				setPixelColor(115, THEME);
				setPixelColor(115, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[140].FreeSpace = true;
				DiodeArray[140].EnemyBullet = false;
				setPixelColor(140, THEME);

				DiodeArray[115].EnemyBullet = true;
				setPixelColor(115, THEME);
				setPixelColor(115, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 115;
			break;
		case 6:
			if (enemyShootFirstDiode_4) {
				DiodeArray[108].EnemyBullet = true;
				setPixelColor(108, THEME);
				setPixelColor(108, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[115].FreeSpace = true;
				DiodeArray[115].EnemyBullet = false;
				setPixelColor(115, THEME);

				DiodeArray[108].EnemyBullet = true;
				setPixelColor(108, THEME);
				setPixelColor(108, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 108;
			break;
		case 7:
			if (enemyShootFirstDiode_4) {
				DiodeArray[83].EnemyBullet = true;
				setPixelColor(83, THEME);
				setPixelColor(83, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[108].FreeSpace = true;
				DiodeArray[108].EnemyBullet = false;
				setPixelColor(108, THEME);

				DiodeArray[83].EnemyBullet = true;
				setPixelColor(83, THEME);
				setPixelColor(83, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 83;
			break;
		case 8:
			DiodeArray[83].FreeSpace = true;
			DiodeArray[83].EnemyBullet = false;
			setPixelColor(83, THEME);

			DiodeArray[76].FreeSpace = false;
			DiodeArray[76].EnemyBullet = true;
			setPixelColor(76, THEME);
			setPixelColor(76, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 76;
			break;
		case 9:
			DiodeArray[76].FreeSpace = true;
			DiodeArray[76].EnemyBullet = false;
			setPixelColor(76, THEME);

			DiodeArray[51].FreeSpace = false;
			DiodeArray[51].EnemyBullet = true;
			setPixelColor(51, THEME);
			setPixelColor(51, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 51;
			break;
		case 10:
			DiodeArray[51].FreeSpace = true;
			DiodeArray[51].EnemyBullet = false;
			setPixelColor(51, THEME);

			DiodeArray[44].FreeSpace = false;
			DiodeArray[44].EnemyBullet = true;
			setPixelColor(44, THEME);
			setPixelColor(44, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 44;
			break;
		case 11:
			DiodeArray[44].FreeSpace = true;
			DiodeArray[44].EnemyBullet = false;
			setPixelColor(44, THEME);

			DiodeArray[19].FreeSpace = false;
			DiodeArray[19].EnemyBullet = true;
			setPixelColor(19, THEME);
			setPixelColor(19, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 19;
			break;
		case 12:
			DiodeArray[19].FreeSpace = true;
			DiodeArray[19].EnemyBullet = false;
			setPixelColor(19, THEME);

			DiodeArray[12].FreeSpace = false;
			DiodeArray[12].EnemyBullet = true;
			setPixelColor(12, THEME);
			setPixelColor(12, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 12;
			break;
		case 13:
			DiodeArray[12].FreeSpace = true;
			DiodeArray[12].EnemyBullet = false;
			setPixelColor(12, THEME);

			enemyShootFirstDiode_4 = true;
			enemyShootInit_4 = true;
			enemyActivateShoot_4 = false;
			break;
		default:
			break;
		}
		break;
	case 14:
		if (enemyShootInit_4) {
			switch (enemyDiodeStartShootID_4) {
			case 205:
				enemyDiodeShootRoute_4 = 1;

				DiodeArray[178].FreeSpace = false;
				DiodeArray[173].FreeSpace = false;
				DiodeArray[146].FreeSpace = false;
				DiodeArray[141].FreeSpace = false;
				DiodeArray[114].FreeSpace = false;
				DiodeArray[109].FreeSpace = false;
				break;
			case 178:
				enemyDiodeShootRoute_4 = 2;

				DiodeArray[173].FreeSpace = false;
				DiodeArray[146].FreeSpace = false;
				DiodeArray[141].FreeSpace = false;
				DiodeArray[114].FreeSpace = false;
				DiodeArray[109].FreeSpace = false;
				break;
			case 173:
				enemyDiodeShootRoute_4 = 3;

				DiodeArray[146].FreeSpace = false;
				DiodeArray[141].FreeSpace = false;
				DiodeArray[114].FreeSpace = false;
				DiodeArray[109].FreeSpace = false;
				break;
			case 146:
				enemyDiodeShootRoute_4 = 4;

				DiodeArray[141].FreeSpace = false;
				DiodeArray[114].FreeSpace = false;
				DiodeArray[109].FreeSpace = false;
				break;
			case 141:
				enemyDiodeShootRoute_4 = 5;

				DiodeArray[114].FreeSpace = false;
				DiodeArray[109].FreeSpace = false;
				break;
			case 114:
				enemyDiodeShootRoute_4 = 6;

				DiodeArray[109].FreeSpace = false;
				break;
			case 109:
				enemyDiodeShootRoute_4 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_4 = false;
		}
		switch (enemyDiodeShootRoute_4) {
		case 1:
			enemyShootFirstDiode_4 = false;
			DiodeArray[178].EnemyBullet = true;
			setPixelColor(178, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 178;
			break;
		case 2:
			if (enemyShootFirstDiode_4) {
				DiodeArray[173].EnemyBullet = true;
				setPixelColor(173, THEME);
				setPixelColor(173, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[178].FreeSpace = true;
				DiodeArray[178].EnemyBullet = false;
				setPixelColor(178, THEME);

				DiodeArray[173].EnemyBullet = true;
				setPixelColor(173, THEME);
				setPixelColor(173, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 173;
			break;
		case 3:
			if (enemyShootFirstDiode_4) {
				DiodeArray[146].EnemyBullet = true;
				setPixelColor(146, THEME);
				setPixelColor(146, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[173].FreeSpace = true;
				DiodeArray[173].EnemyBullet = false;
				setPixelColor(173, THEME);

				DiodeArray[146].EnemyBullet = true;
				setPixelColor(146, THEME);
				setPixelColor(146, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 146;
			break;
		case 4:
			if (enemyShootFirstDiode_4) {
				DiodeArray[141].EnemyBullet = true;
				setPixelColor(141, THEME);
				setPixelColor(141, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[146].FreeSpace = true;
				DiodeArray[146].EnemyBullet = false;
				setPixelColor(146, THEME);

				DiodeArray[141].EnemyBullet = true;
				setPixelColor(141, THEME);
				setPixelColor(141, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 141;
			break;
		case 5:
			if (enemyShootFirstDiode_4) {
				DiodeArray[114].EnemyBullet = true;
				setPixelColor(114, THEME);
				setPixelColor(114, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[141].FreeSpace = true;
				DiodeArray[141].EnemyBullet = false;
				setPixelColor(141, THEME);

				DiodeArray[114].EnemyBullet = true;
				setPixelColor(114, THEME);
				setPixelColor(114, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 114;
			break;
		case 6:
			if (enemyShootFirstDiode_4) {
				DiodeArray[109].EnemyBullet = true;
				setPixelColor(109, THEME);
				setPixelColor(109, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[114].FreeSpace = true;
				DiodeArray[114].EnemyBullet = false;
				setPixelColor(114, THEME);

				DiodeArray[109].EnemyBullet = true;
				setPixelColor(109, THEME);
				setPixelColor(109, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 109;
			break;
		case 7:
			if (enemyShootFirstDiode_4) {
				DiodeArray[82].EnemyBullet = true;
				setPixelColor(82, THEME);
				setPixelColor(82, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[109].FreeSpace = true;
				DiodeArray[109].EnemyBullet = false;
				setPixelColor(109, THEME);

				DiodeArray[82].EnemyBullet = true;
				setPixelColor(82, THEME);
				setPixelColor(82, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 82;
			break;
		case 8:
			DiodeArray[82].FreeSpace = true;
			DiodeArray[82].EnemyBullet = false;
			setPixelColor(82, THEME);

			DiodeArray[77].FreeSpace = false;
			DiodeArray[77].EnemyBullet = true;
			setPixelColor(77, THEME);
			setPixelColor(77, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 77;
			break;
		case 9:
			DiodeArray[77].FreeSpace = true;
			DiodeArray[77].EnemyBullet = false;
			setPixelColor(77, THEME);

			DiodeArray[50].FreeSpace = false;
			DiodeArray[50].EnemyBullet = true;
			setPixelColor(50, THEME);
			setPixelColor(50, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 50;
			break;
		case 10:
			DiodeArray[50].FreeSpace = true;
			DiodeArray[50].EnemyBullet = false;
			setPixelColor(50, THEME);

			DiodeArray[45].FreeSpace = false;
			DiodeArray[45].EnemyBullet = true;
			setPixelColor(45, THEME);
			setPixelColor(45, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 45;
			break;
		case 11:
			DiodeArray[45].FreeSpace = true;
			DiodeArray[45].EnemyBullet = false;
			setPixelColor(45, THEME);

			DiodeArray[18].FreeSpace = false;
			DiodeArray[18].EnemyBullet = true;
			setPixelColor(18, THEME);
			setPixelColor(18, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 18;
			break;
		case 12:
			DiodeArray[18].FreeSpace = true;
			DiodeArray[18].EnemyBullet = false;
			setPixelColor(18, THEME);

			DiodeArray[13].FreeSpace = false;
			DiodeArray[13].EnemyBullet = true;
			setPixelColor(13, THEME);
			setPixelColor(13, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 13;
			break;
		case 13:
			DiodeArray[13].FreeSpace = true;
			DiodeArray[13].EnemyBullet = false;
			setPixelColor(13, THEME);

			enemyShootFirstDiode_4 = true;
			enemyShootInit_4 = true;
			enemyActivateShoot_4 = false;
			break;
		default:
			break;
		}
		break;
	case 15:
		if (enemyShootInit_4) {
			switch (enemyDiodeStartShootID_4) {
			case 206:
				enemyDiodeShootRoute_4 = 1;

				DiodeArray[177].FreeSpace = false;
				DiodeArray[174].FreeSpace = false;
				DiodeArray[145].FreeSpace = false;
				DiodeArray[142].FreeSpace = false;
				DiodeArray[113].FreeSpace = false;
				DiodeArray[110].FreeSpace = false;
				break;
			case 177:
				enemyDiodeShootRoute_4 = 2;

				DiodeArray[174].FreeSpace = false;
				DiodeArray[145].FreeSpace = false;
				DiodeArray[142].FreeSpace = false;
				DiodeArray[113].FreeSpace = false;
				DiodeArray[110].FreeSpace = false;
				break;
			case 174:
				enemyDiodeShootRoute_4 = 3;

				DiodeArray[145].FreeSpace = false;
				DiodeArray[142].FreeSpace = false;
				DiodeArray[113].FreeSpace = false;
				DiodeArray[110].FreeSpace = false;
				break;
			case 145:
				enemyDiodeShootRoute_4 = 4;

				DiodeArray[142].FreeSpace = false;
				DiodeArray[113].FreeSpace = false;
				DiodeArray[110].FreeSpace = false;
				break;
			case 142:
				enemyDiodeShootRoute_4 = 5;

				DiodeArray[113].FreeSpace = false;
				DiodeArray[110].FreeSpace = false;
				break;
			case 113:
				enemyDiodeShootRoute_4 = 6;

				DiodeArray[110].FreeSpace = false;
				break;
			case 110:
				enemyDiodeShootRoute_4 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_4 = false;
		}
		switch (enemyDiodeShootRoute_4) {
		case 1:
			enemyShootFirstDiode_4 = false;
			DiodeArray[177].EnemyBullet = true;
			setPixelColor(177, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 177;
			break;
		case 2:
			if (enemyShootFirstDiode_4) {
				DiodeArray[174].EnemyBullet = true;
				setPixelColor(174, THEME);
				setPixelColor(174, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[177].FreeSpace = true;
				DiodeArray[177].EnemyBullet = false;
				setPixelColor(177, THEME);

				DiodeArray[174].EnemyBullet = true;
				setPixelColor(174, THEME);
				setPixelColor(174, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 174;
			break;
		case 3:
			if (enemyShootFirstDiode_4) {
				DiodeArray[145].EnemyBullet = true;
				setPixelColor(145, THEME);
				setPixelColor(145, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[174].FreeSpace = true;
				DiodeArray[174].EnemyBullet = false;
				setPixelColor(174, THEME);

				DiodeArray[145].EnemyBullet = true;
				setPixelColor(145, THEME);
				setPixelColor(145, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 145;
			break;
		case 4:
			if (enemyShootFirstDiode_4) {
				DiodeArray[142].EnemyBullet = true;
				setPixelColor(142, THEME);
				setPixelColor(142, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[145].FreeSpace = true;
				DiodeArray[145].EnemyBullet = false;
				setPixelColor(145, THEME);

				DiodeArray[142].EnemyBullet = true;
				setPixelColor(142, THEME);
				setPixelColor(142, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 142;
			break;
		case 5:
			if (enemyShootFirstDiode_4) {
				DiodeArray[113].EnemyBullet = true;
				setPixelColor(113, THEME);
				setPixelColor(113, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[142].FreeSpace = true;
				DiodeArray[142].EnemyBullet = false;
				setPixelColor(142, THEME);

				DiodeArray[113].EnemyBullet = true;
				setPixelColor(113, THEME);
				setPixelColor(113, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 113;
			break;
		case 6:
			if (enemyShootFirstDiode_4) {
				DiodeArray[110].EnemyBullet = true;
				setPixelColor(110, THEME);
				setPixelColor(110, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[113].FreeSpace = true;
				DiodeArray[113].EnemyBullet = false;
				setPixelColor(113, THEME);

				DiodeArray[110].EnemyBullet = true;
				setPixelColor(110, THEME);
				setPixelColor(110, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 110;
			break;
		case 7:
			if (enemyShootFirstDiode_4) {
				DiodeArray[81].EnemyBullet = true;
				setPixelColor(81, THEME);
				setPixelColor(81, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[110].FreeSpace = true;
				DiodeArray[110].EnemyBullet = false;
				setPixelColor(110, THEME);

				DiodeArray[81].EnemyBullet = true;
				setPixelColor(81, THEME);
				setPixelColor(81, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 81;
			break;
		case 8:
			DiodeArray[81].FreeSpace = true;
			DiodeArray[81].EnemyBullet = false;
			setPixelColor(81, THEME);

			DiodeArray[78].FreeSpace = false;
			DiodeArray[78].EnemyBullet = true;
			setPixelColor(78, THEME);
			setPixelColor(78, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 78;
			break;
		case 9:
			DiodeArray[78].FreeSpace = true;
			DiodeArray[78].EnemyBullet = false;
			setPixelColor(78, THEME);

			DiodeArray[49].FreeSpace = false;
			DiodeArray[49].EnemyBullet = true;
			setPixelColor(49, THEME);
			setPixelColor(49, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 49;
			break;
		case 10:
			DiodeArray[49].FreeSpace = true;
			DiodeArray[49].EnemyBullet = false;
			setPixelColor(49, THEME);

			DiodeArray[46].FreeSpace = false;
			DiodeArray[46].EnemyBullet = true;
			setPixelColor(46, THEME);
			setPixelColor(46, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 46;
			break;
		case 11:
			DiodeArray[46].FreeSpace = true;
			DiodeArray[46].EnemyBullet = false;
			setPixelColor(46, THEME);

			DiodeArray[17].FreeSpace = false;
			DiodeArray[17].EnemyBullet = true;
			setPixelColor(17, THEME);
			setPixelColor(17, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 17;
			break;
		case 12:
			DiodeArray[17].FreeSpace = true;
			DiodeArray[17].EnemyBullet = false;
			setPixelColor(17, THEME);

			DiodeArray[14].FreeSpace = false;
			DiodeArray[14].EnemyBullet = true;
			setPixelColor(14, THEME);
			setPixelColor(14, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 14;
			break;
		case 13:
			DiodeArray[14].FreeSpace = true;
			DiodeArray[14].EnemyBullet = false;
			setPixelColor(14, THEME);

			enemyShootFirstDiode_4 = true;
			enemyShootInit_4 = true;
			enemyActivateShoot_4 = false;
			break;
		default:
			break;
		}
		break;
	case 16:
		if (enemyShootInit_4) {
			switch (enemyDiodeStartShootID_4) {
			case 207:
				enemyDiodeShootRoute_4 = 1;

				DiodeArray[176].FreeSpace = false;
				DiodeArray[175].FreeSpace = false;
				DiodeArray[144].FreeSpace = false;
				DiodeArray[143].FreeSpace = false;
				DiodeArray[112].FreeSpace = false;
				DiodeArray[111].FreeSpace = false;
				break;
			case 176:
				enemyDiodeShootRoute_4 = 2;

				DiodeArray[175].FreeSpace = false;
				DiodeArray[144].FreeSpace = false;
				DiodeArray[143].FreeSpace = false;
				DiodeArray[112].FreeSpace = false;
				DiodeArray[111].FreeSpace = false;
				break;
			case 175:
				enemyDiodeShootRoute_4 = 3;

				DiodeArray[144].FreeSpace = false;
				DiodeArray[143].FreeSpace = false;
				DiodeArray[112].FreeSpace = false;
				DiodeArray[111].FreeSpace = false;
				break;
			case 144:
				enemyDiodeShootRoute_4 = 4;

				DiodeArray[143].FreeSpace = false;
				DiodeArray[112].FreeSpace = false;
				DiodeArray[111].FreeSpace = false;
				break;
			case 143:
				enemyDiodeShootRoute_4 = 5;

				DiodeArray[112].FreeSpace = false;
				DiodeArray[111].FreeSpace = false;
				break;
			case 112:
				enemyDiodeShootRoute_4 = 6;

				DiodeArray[111].FreeSpace = false;
				break;
			case 111:
				enemyDiodeShootRoute_4 = 7;
				break;
			default:
				break;
			}
			enemyShootInit_4 = false;
		}
		switch (enemyDiodeShootRoute_4) {
		case 1:
			enemyShootFirstDiode_4 = false;
			DiodeArray[176].EnemyBullet = true;
			setPixelColor(176, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 176;
			break;
		case 2:
			if (enemyShootFirstDiode_4) {
				DiodeArray[175].EnemyBullet = true;
				setPixelColor(175, THEME);
				setPixelColor(175, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[176].FreeSpace = true;
				DiodeArray[176].EnemyBullet = false;
				setPixelColor(176, THEME);

				DiodeArray[175].EnemyBullet = true;
				setPixelColor(175, THEME);
				setPixelColor(175, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 175;
			break;
		case 3:
			if (enemyShootFirstDiode_4) {
				DiodeArray[144].EnemyBullet = true;
				setPixelColor(144, THEME);
				setPixelColor(144, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[175].FreeSpace = true;
				DiodeArray[175].EnemyBullet = false;
				setPixelColor(175, THEME);

				DiodeArray[144].EnemyBullet = true;
				setPixelColor(144, THEME);
				setPixelColor(144, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 144;
			break;
		case 4:
			if (enemyShootFirstDiode_4) {
				DiodeArray[143].EnemyBullet = true;
				setPixelColor(143, THEME);
				setPixelColor(143, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[144].FreeSpace = true;
				DiodeArray[144].EnemyBullet = false;
				setPixelColor(144, THEME);

				DiodeArray[143].EnemyBullet = true;
				setPixelColor(143, THEME);
				setPixelColor(143, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 143;
			break;
		case 5:
			if (enemyShootFirstDiode_4) {
				DiodeArray[112].EnemyBullet = true;
				setPixelColor(112, THEME);
				setPixelColor(112, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[143].FreeSpace = true;
				DiodeArray[143].EnemyBullet = false;
				setPixelColor(143, THEME);

				DiodeArray[112].EnemyBullet = true;
				setPixelColor(112, THEME);
				setPixelColor(112, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 112;
			break;
		case 6:
			if (enemyShootFirstDiode_4) {
				DiodeArray[111].EnemyBullet = true;
				setPixelColor(111, THEME);
				setPixelColor(111, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[112].FreeSpace = true;
				DiodeArray[112].EnemyBullet = false;
				setPixelColor(112, THEME);

				DiodeArray[111].EnemyBullet = true;
				setPixelColor(111, THEME);
				setPixelColor(111, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 111;
			break;
		case 7:
			if (enemyShootFirstDiode_4) {
				DiodeArray[80].EnemyBullet = true;
				setPixelColor(80, THEME);
				setPixelColor(80, ENEMY_BULLET);

				enemyShootFirstDiode_4 = false;
			} else {
				DiodeArray[111].FreeSpace = true;
				DiodeArray[111].EnemyBullet = false;
				setPixelColor(111, THEME);

				DiodeArray[80].EnemyBullet = true;
				setPixelColor(80, THEME);
				setPixelColor(80, ENEMY_BULLET);
			}
			enemyCurrentShootDiode_4 = 80;
			break;
		case 8:
			DiodeArray[80].FreeSpace = true;
			DiodeArray[80].EnemyBullet = false;
			setPixelColor(80, THEME);

			DiodeArray[79].FreeSpace = false;
			DiodeArray[79].EnemyBullet = true;
			setPixelColor(79, THEME);
			setPixelColor(79, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 79;
			break;
		case 9:
			DiodeArray[79].FreeSpace = true;
			DiodeArray[79].EnemyBullet = false;
			setPixelColor(79, THEME);

			DiodeArray[48].FreeSpace = false;
			DiodeArray[48].EnemyBullet = true;
			setPixelColor(48, THEME);
			setPixelColor(48, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 48;
			break;
		case 10:
			DiodeArray[48].FreeSpace = true;
			DiodeArray[48].EnemyBullet = false;
			setPixelColor(48, THEME);

			DiodeArray[47].FreeSpace = false;
			DiodeArray[47].EnemyBullet = true;
			setPixelColor(47, THEME);
			setPixelColor(47, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 47;
			break;
		case 11:
			DiodeArray[47].FreeSpace = true;
			DiodeArray[47].EnemyBullet = false;
			setPixelColor(47, THEME);

			DiodeArray[16].FreeSpace = false;
			DiodeArray[16].EnemyBullet = true;
			setPixelColor(16, THEME);
			setPixelColor(16, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 16;
			break;
		case 12:
			DiodeArray[16].FreeSpace = true;
			DiodeArray[16].EnemyBullet = false;
			setPixelColor(16, THEME);

			DiodeArray[15].FreeSpace = false;
			DiodeArray[15].EnemyBullet = true;
			setPixelColor(15, THEME);
			setPixelColor(15, ENEMY_BULLET);
			enemyCurrentShootDiode_4 = 15;
			break;
		case 13:
			DiodeArray[15].FreeSpace = true;
			DiodeArray[15].EnemyBullet = false;
			setPixelColor(15, THEME);

			enemyShootFirstDiode_4 = true;
			enemyShootInit_4 = true;
			enemyActivateShoot_4 = false;
			break;
		default:
			break;
		}
		break;
	default:
		break;
	}
}
