#include <stdio.h>
#include <cstdlib>
#include <ctime>


int main() {

	int number; // varaible initizlization 
	int user{};
	int score = 100;
	int fract1{};
	int fract2{};
	int final{};
	srand(time(NULL)); //seeding the random function using the current time in seconds as the seed
	printf_s("I am thinking of a number. Can you guess it?\n");
	printf_s("%d Points! \n", score);
	number = rand() % 100 + 1; // Random number between 1 and 100
	start:
	printf_s("Take a guess: ");
	scanf_s("%d", &user);//your user input will need to be clear with each loop? should i be using a for loop for this? w
	fract1 = number - user;
	fract2 = number + user;
	final = ((fract1 / fract2) / 2) * 100;
	printf_s("%d \n", fract1);
	printf_s("%d\n", fract2);
	printf("%d \n", final);//this is just returning zero is it because its returning a negative number?
	while (getchar() != '\n'); // clear the buffer?
	if (user == number) {
		printf_s("Congrats You got it right! \n");
		printf_s("%d", score);
		system("pause");
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
		system("pause");
	}
	//ToDo add a exception to characters.
	return 0;
}