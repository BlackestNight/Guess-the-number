#include <stdio.h>
#include <cstdlib>
#include <ctime>


int main() {

	int number; // varaible initizlization 
	int user{};
	int score = 100;
	double fract1{};
	double fract2{};
	double final{};
	srand(time(NULL)); //seeding the random function using the current time in seconds as the seed
	printf_s("I am thinking of a number. Can you guess it?\n");
	printf_s("%d Points! \n", score);
	while (getchar() != '\n'); // clear the buffer?
	number = rand() % 100 + 1; // Random number between 1 and 100
	for (int score = 100; score > 0; score - final) 
	{
		printf_s("Take a guess: ");
		scanf_s("%d", &user);//your user input will need to be clear with each loop? should i be using a for loop for this? 
		printf_s("%d points \n", score);
		while (getchar() != '\n'); // clear the buffer?
		fract1 = number - user;//makes the fractions for final calculations of dynamic point system. 
		fract2 = number + user;
		final = ((fract1 / fract2) / 2) * 100;// final calculations. 
		if (final < 0) 
		{
			final = final * -1;
		}
		final = (int)final;//creates an int version
	
		while (getchar() != '\n'); // clear the buffer?
		if (user == number) 
		{
			printf_s("Congrats You got it right! \n");
			printf_s("%d", score);
			system("pause");
			return 0;
		}
		else if (user < number) 
		{
			printf_s("Too Low, you lost %d points! \n", (int)final);
		}
		else if (user > number) 
		{
			printf_s("Too High, you lost %d pionts \n", (int)final);
		}
	}
	if (score <= 0) 
	{
		printf_s("Game OVER!");
	}
	//ToDo add a exception to characters, and make it look better, seperate functions to make it look better and cleaner. 
	return 0;
}