#include <stdio.h>
#include <cstdlib>
#include <ctime>


int main() {

	int number; // varible initizlization 
	int user{};
	int score = 100;
	srand(time(NULL)); //seeding the random function using the current time in seconds as the seed
	printf_s("I am thinking of a number. Can you guess it?\n");
	printf_s("%d Points! \n", score);
	number = rand() % 100 + 1; // Random number between 1 and 100
	start:
	printf_s("Take a guess: ");
	scanf_s("%d", &user);//your user input will need to be clear with each loop? should i be using a for loop for this? w
	while (getchar() != '\n'); // clear the buffer?
	if (user == number) {
		printf_s("Congrats You got it right! \n");
		printf_s("%d", score);
	}
	else if (user < number) {
		printf_s("Too Low, you lost 10 points! \n");
		score = score - 10;
		goto start;
	}
	else if (user > number) {
		printf_s("Too High, you lost 10 pionts \n");
		score = score - 10;
		goto start;
	}
	else if (score == 0) {
		printf_s("You Lose you get nothing! \n ");
		printf_s("%d", number);
	}
	//ToDo add a exception to characters.
	return 0;
}