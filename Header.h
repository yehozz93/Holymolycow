#ifndef GAME 1
#include <stdio.h>
#include <stdlib.h>
struct inventory {
	unsigned int coins;
	unsigned int potions;
	unsigned int relics;
	unsigned int arrows;
	unsigned int sword;
	char *name;
};
struct inventory *ptrplayer, player;

void menu();
void startgame(struct inventory *player);
void citymenu(struct inventory *player);
void checkinventory(struct inventory *player);


#endif // !1
#pragma once
