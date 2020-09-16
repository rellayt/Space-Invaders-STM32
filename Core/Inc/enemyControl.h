#include "stdbool.h"
#include "main.h"
#include "diode.h"
#include "GlobalDefines.h"
#include "playerShootingControl.h"
#include "enemyShootingControl.h"
#include "game.h"

struct Enemy {
	int EnemyID;
	int EnemyHP;
	uint16_t EnemyDiodeID;
};

struct Enemy enemyFirstLine[8];
struct Enemy enemySecondLine[8];
struct Enemy enemyThirdLine[8];
struct Enemy enemyFourthLine[8];
struct Enemy enemyFifthLine[8];

int initLineStep;
int enemyLineCount;
int enemyTotalCount;
bool blockInitEnemy, blockInitFirstLine, enemyInitialized;
bool newRound;

void initEnemy();
void initEnemyLine(int line);
void enemyLineMoveDown(int mainLine, struct Enemy lineToMove[], int targetLine);
void enemyInitialization();
void enemyMovement();
void checkForEnemyHit();
void checkForBulletCollision();
int getEnemyBulletLine(int enemyDiodeID);
