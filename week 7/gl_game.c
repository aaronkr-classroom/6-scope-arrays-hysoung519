//gl_game.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rand_num; //전역 변수

void gamelnit()
{
	srand(time(0)); //1970년 1월 1일 0:00시부터 현재까지 ms값
					//213426437523
	rand_num = rand() % 10 + 1; //(0-9) + 1 = [1,10]
}

void gameplay()
{	//지역 변수 = 
	int guess = 0, count = 0, allowed = 5; //5개 추측만 가능

	printf("Guess the number (1 - 10): ");

	do {
		scanf_s("%d", &guess);
		count++;

		if (guess == rand_num)
		{
			printf("정답! Good! you win!");
			break;
		}
		else if (guess < rand_num)
		{
			printf("Too low! Try higher!");

		}
		else if (guess > rand_num)
		{
			printf("Too high! Try lower!");

		}
	} while (count != allowed);
	if (count < allowed)
	{
		printf("Too many guesses! you lose!");

	}
}

int main()
{
	gamelnit();
	gameplay();


	return 0;
}