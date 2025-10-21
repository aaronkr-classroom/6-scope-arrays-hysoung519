//quiz.c

#include<stdio.h>

int hab(int array[])
{
	int result1 = 0;
	for (int i = 0; i < 10; i++)
	{
		if (array[i] % 2 == 0)
		{
			result1 += array[i];
		}
	}
	return result1;
}


int big(int array[])
{
	int result2;
	for (int t = 0; t < 10; t++)
	{
		if (array[t]>array[t-1])
		{
			result2 = array[t];
		}
	}
	return result2;
}


int main()
{


	int array[] = { 1,2,3,4,5,6,7,8,9,10 };
	int result = hab(array);
	
	int result2 = big(array);

	printf("짝수 합산 : %d, 제일 큰 건 : %d", result, result2);


	return 0;

}