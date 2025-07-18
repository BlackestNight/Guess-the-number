#include <stdio.h>
#include <cstdlib>

int main() {
	int number; //defining the type
	srand(); //seeding the random function
	printf_s("I am thinking of a number. Can you guess it?\n");
	number = rand() % 100 + 1; // Random number between 1 and 100
	printf_s("%d", number); //showing the numberb
	return 0;
}