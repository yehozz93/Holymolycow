#include "Header.h"

void menu() {
	int option = 1;

	do {
		system("CLS");
		printf("\n1 - START THE GAME - ");
		printf("\n2 - Load Game");
		printf("\n0 - EXIT\n\n");

		printf("Your choice : ");
		scanf("%d", &option);
		getchar();

		if (option == 1) {	 // start the game
			startgame(&ptrplayer);

		}

		else if (option == 2) {

		}
		else if (option == 0) {
			printf("\n\n\nClosing the program... \nPress enter...");
		}

		else {
			printf("Need to pick someting from the menu\nPress enter...");
			getchar();
		}

	} while (option != 0);


}


void startgame(struct inventory *player) {
	system("CLS");

	//char name[30] = { NULL };


	printf("(Miss Valina) - Welcome to Helvetica, my name is Valina and i will help you with the ticket so you can start your great journey.\n");
	printf("Before we put you on the boat, we need your name...\nENTER YOUR NAME : ");
	fgets(ptrplayer->name, 30, stdin);
	strtok(ptrplayer->name, "\n");
	printf("\n(Miss Valina) - Nice to meet you %s, Here is your ticket. make sure to get on the boat on time! good luck", ptrplayer->name);
	printf("\n\n3 Days later on the sea you finally reach the port on the outland. its time for you to make some big decisions...\nPress enter");
	getchar();
	ptrplayer->arrows = 0;
	ptrplayer->coins = 4;
	ptrplayer->potions = 0;
	ptrplayer->relics = 0;
	ptrplayer->sword = 0;
	citymenu(&ptrplayer);


}


void citymenu(struct inventory *player) {	//Where the player first start, a menu with options in the city
	int option = 1;
	do {
		system("CLS");
		printf("your in the city called Herbulos, its the one and only remaining citys in the outlands ruled by the kings...");
		printf("\nYou have the following options to do here...");
		printf("\n1. Check your inventory\n 2. Go to the market\n3. Visit the casino");
		printf("\nMake your choice : ");

		scanf("%d", &option);		//what options the player  choice

		if (option == 1) {
			checkinventory(&ptrplayer);
		}
		else if (option == 2) {

		}

		else if (option == 3) {

		}
		else if (option == 0) {

		}
		else {
			system("CLS");
			printf("Need to pick someting from the menu");
		}

	} while (option != 0);

	printf("You have %d coins", ptrplayer->coins);
	getchar();

}

void checkinventory(struct inventory *player) {
	char swordid[] = "Wooden sword";
	system("CLS");

	printf("You opening your bag and inspecting your goods...");
	getchar();
	if (ptrplayer->sword == 0) {
		printf("\n\n\nYou got %d coins.\n%d potions.\n%d relics. \n%d arrows \n%s ", ptrplayer->coins, ptrplayer->potions, ptrplayer->relics, ptrplayer->arrows, swordid);
	}
	printf("\n\n\nExit the bag by pressing ENTER...");
	getchar();

}
