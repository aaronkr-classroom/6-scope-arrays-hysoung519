//2d.arr.c
#include <stdio.h>

#define NUM_STDS 3
#define NUM_GRADES 4

float calcAvg(int data[])
{
	int sum = 0;
	for (int i = 0; i < NUM_GRADES; i++)
	{
		sum += data[i];

	}
	return sum / (float)NUM_GRADES;
}



int main()
{
	int grades[NUM_STDS][NUM_GRADES] = {//[3학생][4개 의점수]
		{85,45,70,93},//학생 1
		{74,86,93,45},//학생 2
		{67,37,99,97} //학생 3
	};

	//각 학생의 점수출력
	printf("Student grades: \n");
	for (int i = 0; i < NUM_STDS; i++) //모든 학생의 루프
	{
		printf("Student %d: ", i + 1);//0인덱스 때문에 1숫자부터 시작
		for (int j = 0; j < NUM_GRADES; j++) {
			printf("%d", grades[i][j]); //grades[학생][점수]위치
		}
		printf("Average: %.2f\n", calcAvg(grades[i]));
	}


}