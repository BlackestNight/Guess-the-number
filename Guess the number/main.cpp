#include <stdio.h>
#include <cstdlib>
#include <ctime>

int random() 
{
	int number;	
	srand(time(NULL)); 
	number = rand() % 100 + 1; // Random number between 1 and 100
	return number;
}

int numbers()
{
	int user;
	int valid_input = 0;
	printf_s("Take a guess: ");//take a input
	scanf_s("%d", &user); 
	while (getchar() != '\n'); // clear the buffer?
	return user;

}

 int dynpoints(int num, int user)
{
	double fract1{};//local varaibles
	double fract2{};
	double final{};
	fract1 = num - user;//makes the fractions for final calculations of dynamic point system. 
	fract2 = num + user;
	final = ((fract1 / fract2) / 2) * 100;// final calculations.
	return round(final);//rounding the answer to a int
}


int main() {
	int score = 100;chrome://vivaldi-webui/startpage?section=Speed-dials&background-color=#2e2f37
	printf_s("I am thinking of a number. Can you guess it?\n");
	printf_s("%d Points! \n", score);
	int num = random();
	while (score > 0) 
	{
		
	
	int user = numbers();
	int points = dynpoints(num, user);
		 
		if (points < 0)
		{
			points = points * -1;//handle any negative numbers
		}
		if (user == num) 
		{
			printf_s("Congrats You got it right! \n");
			printf_s("%d", score);
			system("pause");//gotta let them bask in their moment. 
			return 0;
		}
		else if (user < num) 
		{
			printf_s("Too Low, you lost %d points! \n", points);
			score -= points;
		}
		else if (user > num) 
		{
			printf_s("Too High, you lost %d points \n", points);
			score -= points;
		}
	}
	if (score <= 0) 
	{
		printf_s("Game OVER!");
	}
	//ToDo add a exception to characters. 
	return 0;
}

