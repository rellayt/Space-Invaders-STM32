#include "gameOver.h"
bool gameOver = false, gameOverInitWord = false, initColor = true,
		reverseColor = false, reverseColor_2 = true;
int gameOverThemeStep = -1, gameOverThemeStep_2 = 1;
int gameOverColor_1 = 0, gameOverColor_2 = 30;
void checkForRoundOver() {
	bool anyEnemy = false;
	for (int i = 96; i < 207; i++) {
		if (DiodeArray[i].Enemy) {
			anyEnemy = true;
			break;
		}
	}
	if (!anyEnemy) {
		newRound = true;
		enemyTotalCount = 0;
		initLineStep = -2;
		enemyLineCount = -3;
		enemyTotalCount = -5;
		enemyInitialized = false;
		blockInitEnemy = false;
		blockInitFirstLine = false;
	}
}

void gameOverTheme() {
	switch (gameOverThemeStep) {
	case 0:
		setPixelColor(120, GAME_OVER_THEME_1);
		setPixelColor(119, GAME_OVER_THEME_1);
		setPixelColor(135, GAME_OVER_THEME_1);
		setPixelColor(136, GAME_OVER_THEME_1);
		break;
	case 1:
		setPixelColor(102, GAME_OVER_THEME_1);
		setPixelColor(103, GAME_OVER_THEME_1);
		setPixelColor(104, GAME_OVER_THEME_1);
		setPixelColor(105, GAME_OVER_THEME_1);
		setPixelColor(121, GAME_OVER_THEME_1);
		setPixelColor(134, GAME_OVER_THEME_1);
		setPixelColor(153, GAME_OVER_THEME_1);
		setPixelColor(152, GAME_OVER_THEME_1);
		setPixelColor(151, GAME_OVER_THEME_1);
		setPixelColor(150, GAME_OVER_THEME_1);
		setPixelColor(137, GAME_OVER_THEME_1);
		setPixelColor(118, GAME_OVER_THEME_1);
		setPixelColor(136, GAME_OVER_THEME_1);

		break;
	case 2:
		setPixelColor(118, GAME_OVER_THEME_1);

		setPixelColor(85, GAME_OVER_THEME_1);
		setPixelColor(86, GAME_OVER_THEME_1);
		setPixelColor(87, GAME_OVER_THEME_1);
		setPixelColor(88, GAME_OVER_THEME_1);
		setPixelColor(89, GAME_OVER_THEME_1);
		setPixelColor(90, GAME_OVER_THEME_1);
		setPixelColor(101, GAME_OVER_THEME_1);
		setPixelColor(122, GAME_OVER_THEME_1);
		setPixelColor(133, GAME_OVER_THEME_1);
		setPixelColor(154, GAME_OVER_THEME_1);
		setPixelColor(165, GAME_OVER_THEME_1);
		setPixelColor(166, GAME_OVER_THEME_1);
		setPixelColor(167, GAME_OVER_THEME_1);
		setPixelColor(168, GAME_OVER_THEME_1);
		setPixelColor(169, GAME_OVER_THEME_1);
		setPixelColor(170, GAME_OVER_THEME_1);
		setPixelColor(149, GAME_OVER_THEME_1);
		setPixelColor(138, GAME_OVER_THEME_1);
		setPixelColor(117, GAME_OVER_THEME_1);
		setPixelColor(106, GAME_OVER_THEME_1);
		break;
	case 3:
		setPixelColor(106, GAME_OVER_THEME_1);

		setPixelColor(75, GAME_OVER_THEME_1);
		setPixelColor(74, GAME_OVER_THEME_1);
		setPixelColor(73, GAME_OVER_THEME_1);
		setPixelColor(72, GAME_OVER_THEME_1);
		setPixelColor(71, GAME_OVER_THEME_1);
		setPixelColor(70, GAME_OVER_THEME_1);
		setPixelColor(69, GAME_OVER_THEME_1);
		setPixelColor(68, GAME_OVER_THEME_1);
		setPixelColor(91, GAME_OVER_THEME_1);
		setPixelColor(100, GAME_OVER_THEME_1);
		setPixelColor(123, GAME_OVER_THEME_1);
		setPixelColor(132, GAME_OVER_THEME_1);
		setPixelColor(155, GAME_OVER_THEME_1);
		setPixelColor(164, GAME_OVER_THEME_1);
		setPixelColor(187, GAME_OVER_THEME_1);
		setPixelColor(186, GAME_OVER_THEME_1);
		setPixelColor(185, GAME_OVER_THEME_1);
		setPixelColor(184, GAME_OVER_THEME_1);
		setPixelColor(183, GAME_OVER_THEME_1);
		setPixelColor(182, GAME_OVER_THEME_1);
		setPixelColor(181, GAME_OVER_THEME_1);
		setPixelColor(180, GAME_OVER_THEME_1);
		setPixelColor(171, GAME_OVER_THEME_1);
		setPixelColor(148, GAME_OVER_THEME_1);
		setPixelColor(139, GAME_OVER_THEME_1);
		setPixelColor(116, GAME_OVER_THEME_1);
		setPixelColor(107, GAME_OVER_THEME_1);
		setPixelColor(84, GAME_OVER_THEME_1);
		break;
	case 4:
		setPixelColor(84, GAME_OVER_THEME_1);
		setPixelColor(51, GAME_OVER_THEME_1);
		setPixelColor(52, GAME_OVER_THEME_1);
		setPixelColor(53, GAME_OVER_THEME_1);
		setPixelColor(54, GAME_OVER_THEME_1);
		setPixelColor(55, GAME_OVER_THEME_1);
		setPixelColor(56, GAME_OVER_THEME_1);
		setPixelColor(57, GAME_OVER_THEME_1);
		setPixelColor(58, GAME_OVER_THEME_1);
		setPixelColor(59, GAME_OVER_THEME_1);
		setPixelColor(60, GAME_OVER_THEME_1);
		setPixelColor(67, GAME_OVER_THEME_1);
		setPixelColor(92, GAME_OVER_THEME_1);
		setPixelColor(99, GAME_OVER_THEME_1);
		setPixelColor(124, GAME_OVER_THEME_1);
		setPixelColor(131, GAME_OVER_THEME_1);
		setPixelColor(156, GAME_OVER_THEME_1);
		setPixelColor(163, GAME_OVER_THEME_1);
		setPixelColor(188, GAME_OVER_THEME_1);
		setPixelColor(195, GAME_OVER_THEME_1);
		setPixelColor(196, GAME_OVER_THEME_1);
		setPixelColor(197, GAME_OVER_THEME_1);
		setPixelColor(198, GAME_OVER_THEME_1);
		setPixelColor(199, GAME_OVER_THEME_1);
		setPixelColor(200, GAME_OVER_THEME_1);
		setPixelColor(201, GAME_OVER_THEME_1);
		setPixelColor(202, GAME_OVER_THEME_1);
		setPixelColor(203, GAME_OVER_THEME_1);
		setPixelColor(204, GAME_OVER_THEME_1);
		setPixelColor(179, GAME_OVER_THEME_1);
		setPixelColor(172, GAME_OVER_THEME_1);
		setPixelColor(147, GAME_OVER_THEME_1);
		setPixelColor(140, GAME_OVER_THEME_1);
		setPixelColor(115, GAME_OVER_THEME_1);
		setPixelColor(108, GAME_OVER_THEME_1);
		setPixelColor(83, GAME_OVER_THEME_1);
		setPixelColor(76, GAME_OVER_THEME_1);
		break;
	case 5:
		setPixelColor(76, GAME_OVER_THEME_1);
		setPixelColor(45, GAME_OVER_THEME_1);
		setPixelColor(44, GAME_OVER_THEME_1);
		setPixelColor(43, GAME_OVER_THEME_1);
		setPixelColor(42, GAME_OVER_THEME_1);
		setPixelColor(41, GAME_OVER_THEME_1);
		setPixelColor(40, GAME_OVER_THEME_1);
		setPixelColor(39, GAME_OVER_THEME_1);
		setPixelColor(38, GAME_OVER_THEME_1);
		setPixelColor(37, GAME_OVER_THEME_1);
		setPixelColor(36, GAME_OVER_THEME_1);
		setPixelColor(35, GAME_OVER_THEME_1);
		setPixelColor(34, GAME_OVER_THEME_1);
		setPixelColor(61, GAME_OVER_THEME_1);
		setPixelColor(66, GAME_OVER_THEME_1);
		setPixelColor(93, GAME_OVER_THEME_1);
		setPixelColor(98, GAME_OVER_THEME_1);
		setPixelColor(125, GAME_OVER_THEME_1);
		setPixelColor(130, GAME_OVER_THEME_1);
		setPixelColor(157, GAME_OVER_THEME_1);
		setPixelColor(162, GAME_OVER_THEME_1);
		setPixelColor(189, GAME_OVER_THEME_1);
		setPixelColor(194, GAME_OVER_THEME_1);
		setPixelColor(221, GAME_OVER_THEME_1);
		setPixelColor(220, GAME_OVER_THEME_1);
		setPixelColor(219, GAME_OVER_THEME_1);
		setPixelColor(218, GAME_OVER_THEME_1);
		setPixelColor(217, GAME_OVER_THEME_1);
		setPixelColor(216, GAME_OVER_THEME_1);
		setPixelColor(215, GAME_OVER_THEME_1);
		setPixelColor(216, GAME_OVER_THEME_1);
		setPixelColor(217, GAME_OVER_THEME_1);
		setPixelColor(216, GAME_OVER_THEME_1);
		setPixelColor(215, GAME_OVER_THEME_1);
		setPixelColor(214, GAME_OVER_THEME_1);
		setPixelColor(213, GAME_OVER_THEME_1);
		setPixelColor(212, GAME_OVER_THEME_1);
		setPixelColor(211, GAME_OVER_THEME_1);
		setPixelColor(210, GAME_OVER_THEME_1);
		setPixelColor(205, GAME_OVER_THEME_1);
		setPixelColor(178, GAME_OVER_THEME_1);
		setPixelColor(173, GAME_OVER_THEME_1);
		setPixelColor(146, GAME_OVER_THEME_1);
		setPixelColor(141, GAME_OVER_THEME_1);
		setPixelColor(114, GAME_OVER_THEME_1);
		setPixelColor(109, GAME_OVER_THEME_1);
		setPixelColor(82, GAME_OVER_THEME_1);
		setPixelColor(77, GAME_OVER_THEME_1);
		setPixelColor(50, GAME_OVER_THEME_1);
		break;
	case 6:
		setPixelColor(17, GAME_OVER_THEME_1);
		setPixelColor(18, GAME_OVER_THEME_1);
		setPixelColor(19, GAME_OVER_THEME_1);
		setPixelColor(20, GAME_OVER_THEME_1);
		setPixelColor(21, GAME_OVER_THEME_1);
		setPixelColor(22, GAME_OVER_THEME_1);
		setPixelColor(23, GAME_OVER_THEME_1);
		setPixelColor(24, GAME_OVER_THEME_1);
		setPixelColor(25, GAME_OVER_THEME_1);
		setPixelColor(26, GAME_OVER_THEME_1);
		setPixelColor(27, GAME_OVER_THEME_1);
		setPixelColor(28, GAME_OVER_THEME_1);
		setPixelColor(29, GAME_OVER_THEME_1);
		setPixelColor(30, GAME_OVER_THEME_1);
		setPixelColor(33, GAME_OVER_THEME_1);
		setPixelColor(62, GAME_OVER_THEME_1);
		setPixelColor(65, GAME_OVER_THEME_1);
		setPixelColor(94, GAME_OVER_THEME_1);
		setPixelColor(97, GAME_OVER_THEME_1);
		setPixelColor(126, GAME_OVER_THEME_1);
		setPixelColor(129, GAME_OVER_THEME_1);
		setPixelColor(158, GAME_OVER_THEME_1);
		setPixelColor(161, GAME_OVER_THEME_1);
		setPixelColor(190, GAME_OVER_THEME_1);
		setPixelColor(193, GAME_OVER_THEME_1);
		setPixelColor(222, GAME_OVER_THEME_1);
		setPixelColor(225, GAME_OVER_THEME_1);
		setPixelColor(226, GAME_OVER_THEME_1);
		setPixelColor(227, GAME_OVER_THEME_1);
		setPixelColor(228, GAME_OVER_THEME_1);
		setPixelColor(229, GAME_OVER_THEME_1);
		setPixelColor(230, GAME_OVER_THEME_1);
		setPixelColor(231, GAME_OVER_THEME_1);
		setPixelColor(232, GAME_OVER_THEME_1);
		setPixelColor(233, GAME_OVER_THEME_1);
		setPixelColor(234, GAME_OVER_THEME_1);
		setPixelColor(235, GAME_OVER_THEME_1);
		setPixelColor(236, GAME_OVER_THEME_1);
		setPixelColor(237, GAME_OVER_THEME_1);
		setPixelColor(238, GAME_OVER_THEME_1);
		setPixelColor(209, GAME_OVER_THEME_1);
		setPixelColor(206, GAME_OVER_THEME_1);
		setPixelColor(177, GAME_OVER_THEME_1);
		setPixelColor(174, GAME_OVER_THEME_1);
		setPixelColor(145, GAME_OVER_THEME_1);
		setPixelColor(142, GAME_OVER_THEME_1);
		setPixelColor(113, GAME_OVER_THEME_1);
		setPixelColor(110, GAME_OVER_THEME_1);
		setPixelColor(81, GAME_OVER_THEME_1);
		setPixelColor(78, GAME_OVER_THEME_1);
		setPixelColor(49, GAME_OVER_THEME_1);
		setPixelColor(46, GAME_OVER_THEME_1);
		break;
	case 7:
		setPixelColor(15, GAME_OVER_THEME_1);
		setPixelColor(14, GAME_OVER_THEME_1);
		setPixelColor(13, GAME_OVER_THEME_1);
		setPixelColor(12, GAME_OVER_THEME_1);
		setPixelColor(11, GAME_OVER_THEME_1);
		setPixelColor(10, GAME_OVER_THEME_1);
		setPixelColor(9, GAME_OVER_THEME_1);
		setPixelColor(8, GAME_OVER_THEME_1);
		setPixelColor(7, GAME_OVER_THEME_1);
		setPixelColor(6, GAME_OVER_THEME_1);
		setPixelColor(5, GAME_OVER_THEME_1);
		setPixelColor(4, GAME_OVER_THEME_1);
		setPixelColor(3, GAME_OVER_THEME_1);
		setPixelColor(2, GAME_OVER_THEME_1);
		setPixelColor(1, GAME_OVER_THEME_1);
		setPixelColor(0, GAME_OVER_THEME_1);
		setPixelColor(31, GAME_OVER_THEME_1);
		setPixelColor(32, GAME_OVER_THEME_1);
		setPixelColor(63, GAME_OVER_THEME_1);
		setPixelColor(64, GAME_OVER_THEME_1);
		setPixelColor(95, GAME_OVER_THEME_1);
		setPixelColor(96, GAME_OVER_THEME_1);
		setPixelColor(127, GAME_OVER_THEME_1);
		setPixelColor(128, GAME_OVER_THEME_1);
		setPixelColor(159, GAME_OVER_THEME_1);
		setPixelColor(160, GAME_OVER_THEME_1);
		setPixelColor(191, GAME_OVER_THEME_1);
		setPixelColor(192, GAME_OVER_THEME_1);
		setPixelColor(223, GAME_OVER_THEME_1);
		setPixelColor(224, GAME_OVER_THEME_1);
		setPixelColor(255, GAME_OVER_THEME_1);
		setPixelColor(254, GAME_OVER_THEME_1);
		setPixelColor(253, GAME_OVER_THEME_1);
		setPixelColor(252, GAME_OVER_THEME_1);
		setPixelColor(251, GAME_OVER_THEME_1);
		setPixelColor(250, GAME_OVER_THEME_1);
		setPixelColor(249, GAME_OVER_THEME_1);
		setPixelColor(248, GAME_OVER_THEME_1);
		setPixelColor(247, GAME_OVER_THEME_1);
		setPixelColor(246, GAME_OVER_THEME_1);
		setPixelColor(245, GAME_OVER_THEME_1);
		setPixelColor(244, GAME_OVER_THEME_1);
		setPixelColor(243, GAME_OVER_THEME_1);
		setPixelColor(242, GAME_OVER_THEME_1);
		setPixelColor(241, GAME_OVER_THEME_1);
		setPixelColor(240, GAME_OVER_THEME_1);
		setPixelColor(239, GAME_OVER_THEME_1);
		setPixelColor(208, GAME_OVER_THEME_1);
		setPixelColor(207, GAME_OVER_THEME_1);
		setPixelColor(176, GAME_OVER_THEME_1);
		setPixelColor(175, GAME_OVER_THEME_1);
		setPixelColor(144, GAME_OVER_THEME_1);
		setPixelColor(143, GAME_OVER_THEME_1);
		setPixelColor(112, GAME_OVER_THEME_1);
		setPixelColor(111, GAME_OVER_THEME_1);
		setPixelColor(80, GAME_OVER_THEME_1);
		setPixelColor(79, GAME_OVER_THEME_1);
		setPixelColor(48, GAME_OVER_THEME_1);
		setPixelColor(47, GAME_OVER_THEME_1);
		setPixelColor(16, GAME_OVER_THEME_1);
		break;
	default:
		break;
	}
	if (gameOverThemeStep != 7) {
		gameOverThemeStep++;
	} else {
		gameOverInitWord = true;
	}
	if (gameOverInitWord) {
		//G
		DiodeArray[160].FreeSpace = false;
		setPixelColor(160, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[191].FreeSpace = false;
		setPixelColor(191, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[192].FreeSpace = false;
		setPixelColor(192, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[223].FreeSpace = false;
		setPixelColor(223, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[225].FreeSpace = false;
		setPixelColor(225, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[226].FreeSpace = false;
		setPixelColor(226, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[220].FreeSpace = false;
		setPixelColor(220, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[189].FreeSpace = false;
		setPixelColor(189, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[188].FreeSpace = false;
		setPixelColor(188, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[163].FreeSpace = false;
		setPixelColor(163, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[156].FreeSpace = false;
		setPixelColor(156, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[157].FreeSpace = false;
		setPixelColor(157, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[158].FreeSpace = false;
		setPixelColor(158, gameOverColor_1, gameOverColor_1, gameOverColor_2);
		//A
		DiodeArray[154].FreeSpace = false;
		setPixelColor(154, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[165].FreeSpace = false;
		setPixelColor(165, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[186].FreeSpace = false;
		setPixelColor(186, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[197].FreeSpace = false;
		setPixelColor(197, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[218].FreeSpace = false;
		setPixelColor(218, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[230].FreeSpace = false;
		setPixelColor(230, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[198].FreeSpace = false;
		setPixelColor(198, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[216].FreeSpace = false;
		setPixelColor(216, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[199].FreeSpace = false;
		setPixelColor(199, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[184].FreeSpace = false;
		setPixelColor(184, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[167].FreeSpace = false;
		setPixelColor(167, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[152].FreeSpace = false;
		setPixelColor(152, gameOverColor_1, gameOverColor_1, gameOverColor_2);
		//M
		DiodeArray[150].FreeSpace = false;
		setPixelColor(150, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[169].FreeSpace = false;
		setPixelColor(169, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[182].FreeSpace = false;
		setPixelColor(182, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[201].FreeSpace = false;
		setPixelColor(201, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[214].FreeSpace = false;
		setPixelColor(214, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[233].FreeSpace = false;
		setPixelColor(233, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[213].FreeSpace = false;
		setPixelColor(213, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[235].FreeSpace = false;
		setPixelColor(235, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[212].FreeSpace = false;
		setPixelColor(212, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[203].FreeSpace = false;
		setPixelColor(203, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[180].FreeSpace = false;
		setPixelColor(180, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[171].FreeSpace = false;
		setPixelColor(171, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[148].FreeSpace = false;
		setPixelColor(148, gameOverColor_1, gameOverColor_1, gameOverColor_2);
		//E
		DiodeArray[237].FreeSpace = false;
		setPixelColor(237, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[238].FreeSpace = false;
		setPixelColor(238, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[239].FreeSpace = false;
		setPixelColor(239, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[210].FreeSpace = false;
		setPixelColor(210, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[205].FreeSpace = false;
		setPixelColor(205, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[178].FreeSpace = false;
		setPixelColor(178, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[177].FreeSpace = false;
		setPixelColor(177, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[176].FreeSpace = false;
		setPixelColor(176, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[173].FreeSpace = false;
		setPixelColor(173, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[146].FreeSpace = false;
		setPixelColor(146, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[145].FreeSpace = false;
		setPixelColor(145, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[144].FreeSpace = false;
		setPixelColor(144, gameOverColor_1, gameOverColor_1, gameOverColor_2);
		//O
		DiodeArray[97].FreeSpace = false;
		setPixelColor(97, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[95].FreeSpace = false;
		setPixelColor(95, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[64].FreeSpace = false;
		setPixelColor(64, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[63].FreeSpace = false;
		setPixelColor(63, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[32].FreeSpace = false;
		setPixelColor(32, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[30].FreeSpace = false;
		setPixelColor(30, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[34].FreeSpace = false;
		setPixelColor(34, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[61].FreeSpace = false;
		setPixelColor(61, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[66].FreeSpace = false;
		setPixelColor(66, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[93].FreeSpace = false;
		setPixelColor(93, gameOverColor_1, gameOverColor_1, gameOverColor_2);
		//V
		DiodeArray[100].FreeSpace = false;
		setPixelColor(100, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[91].FreeSpace = false;
		setPixelColor(91, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[68].FreeSpace = false;
		setPixelColor(68, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[59].FreeSpace = false;
		setPixelColor(59, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[36].FreeSpace = false;
		setPixelColor(36, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[26].FreeSpace = false;
		setPixelColor(26, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[38].FreeSpace = false;
		setPixelColor(38, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[57].FreeSpace = false;
		setPixelColor(57, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[70].FreeSpace = false;
		setPixelColor(70, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[89].FreeSpace = false;
		setPixelColor(89, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[102].FreeSpace = false;
		setPixelColor(102, gameOverColor_1, gameOverColor_1, gameOverColor_2);
		//E
		DiodeArray[104].FreeSpace = false;
		setPixelColor(104, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[105].FreeSpace = false;
		setPixelColor(105, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[106].FreeSpace = false;
		setPixelColor(106, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[87].FreeSpace = false;
		setPixelColor(87, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[72].FreeSpace = false;
		setPixelColor(72, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[55].FreeSpace = false;
		setPixelColor(55, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[54].FreeSpace = false;
		setPixelColor(54, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[53].FreeSpace = false;
		setPixelColor(53, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[40].FreeSpace = false;
		setPixelColor(40, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[23].FreeSpace = false;
		setPixelColor(23, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[22].FreeSpace = false;
		setPixelColor(22, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[21].FreeSpace = false;
		setPixelColor(21, gameOverColor_1, gameOverColor_1, gameOverColor_2);
		//R
		DiodeArray[108].FreeSpace = false;
		setPixelColor(108, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[109].FreeSpace = false;
		setPixelColor(109, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[110].FreeSpace = false;
		setPixelColor(110, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[83].FreeSpace = false;
		setPixelColor(83, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[76].FreeSpace = false;
		setPixelColor(76, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[77].FreeSpace = false;
		setPixelColor(77, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[78].FreeSpace = false;
		setPixelColor(78, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[81].FreeSpace = false;
		setPixelColor(81, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[51].FreeSpace = false;
		setPixelColor(51, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[50].FreeSpace = false;
		setPixelColor(50, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[44].FreeSpace = false;
		setPixelColor(44, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[46].FreeSpace = false;
		setPixelColor(46, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[19].FreeSpace = false;
		setPixelColor(19, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		DiodeArray[16].FreeSpace = false;
		setPixelColor(16, gameOverColor_1, gameOverColor_1, gameOverColor_2);

		if (reverseColor_2) {
			gameOverThemeStep_2++;
		} else {
			gameOverThemeStep_2--;
		}
		if(gameOverThemeStep_2 == 1 || gameOverThemeStep_2 == 5){
			reverseColor_2 = !reverseColor_2;
		}

		for (int i = 0; i < 255; i++) {
			if (DiodeArray[i].FreeSpace) {
				switch(gameOverThemeStep_2){
				case 1:
					setPixelColor(i, GAME_OVER_THEME_1);
					break;
				case 2:
					setPixelColor(i, GAME_OVER_THEME_2);
					break;
				case 3:
					setPixelColor(i, GAME_OVER_THEME_3);
					break;
				case 4:
					setPixelColor(i, GAME_OVER_THEME_4);
					break;
				case 5:
					setPixelColor(i, GAME_OVER_THEME_5);
					break;
				default:
					break;
				}
			}
		}
	}
}

void SpaceInvaders_gameOver(){
	if (gameOver) {
		gameOverTheme();
		if (gameOverInitWord) {
			if (initColor) {
				gameOverColor_1++;
				gameOverColor_2--;
				if (gameOverColor_1 == 15 && gameOverColor_1 == 15) {
					initColor = false;
				}
			}
			if (reverseColor && !initColor) {
				gameOverColor_1--;
				gameOverColor_2--;
				if (gameOverColor_1 == 20) {
					reverseColor = !reverseColor;
				}
			} else {
				gameOverColor_1++;
				gameOverColor_2++;
				if (gameOverColor_1 == 30) {
					reverseColor = !reverseColor;
				}
			}
		}
	}
}

void gameOver_reset(){
	gameOverInitWord = false;
	initColor = true;
	reverseColor = false;
	reverseColor_2 = true;
	gameOverThemeStep = -1;
	gameOverThemeStep_2 = 1;
	gameOverColor_1 = 0;
	gameOverColor_2 = 30;
}
