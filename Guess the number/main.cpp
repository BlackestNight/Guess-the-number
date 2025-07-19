#include <stdio.h>
#include <cstdlib>
#include <ctime>


int main() {
	int number; //
	int user{};
	srand(time(NULL)); //seeding the random function
	printf_s("I am thinking of a number. Can you guess it?\n");
	number = rand() % 100 + 1; // Random number between 1 and 100
	printf_s("%d", number); // for testing purposes and will be taken out later
	printf_s("Take a guess: ");
	scanf_s("%d", &user);//your user input will need to be clear with each loop? should i be using a for loop for this? 
	if (user == number) {
		printf_s("Congrats You got it right!");
	}
	else if (user < number) {
		printf_s("too low");
	}
	else if (user > number) {
		printf_s("Too High");
	}
	//ToDo transform to a pointentail switch and case. loop it. add a exception to characters.
	return 0;
}