#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "menu.h"

int game();
void countdown(int seconds) {
	printf("starting in ");
	for (int i = seconds; i > 0; --i) {

		printf_s("%2d", i);
		fflush(stdout);
		Sleep(1000);
	}
	system("cls");
}
void printmenu()
	{
		printf_s("======= WELCOME TO THE GUESSING GAME======== \n");
		printf_s("1.Start Game \n");
		printf_s("2.Help \n");
		printf_s("3.Exit \n");
		printf_s("Please enter an Option: ");
	}
void handlemenu() {
	int choice;
		system("cls");//clears anything in the terminal
		printmenu();
		scanf_s("%d", &choice);

		switch (choice)
		{
		case 1:
			printf_s("Starting Your Game \n");
			countdown(3);
			game();
			break;
		case 2:
			printf_s("Launching Help Options");
			//make options or help screen
			break;
		case 3:
			printf_s("Goodbye");
			return;

		default:
			printf_s("Invailed input");
			system("pause");
		}
	}