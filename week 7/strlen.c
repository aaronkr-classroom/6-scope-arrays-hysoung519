//strlen.c ->
//c언어에서 strlen()함수 이미 있기 때문에 
//우리는 다른 함수 이름을 사용하겠습니다.
#include <stdio.h>	
#include <string.h>	

int string_length(char data[])
{
	int count = 0;
	while (data[count])count++;
	return count;
}

int main()
{
	int data_length, str_length;
	char data[10] = { 'h','a','p','p','y','0' };
	data_length = string_length(data);
	str_length = strlen(data);

	printf("data length = %d\n",data_length);
	printf("str length = %d\n", str_length);

	char data2[10] = { 'a','b','c',0 };
	char result[16];

	printf("Result(0): &s", result);
	strcpy_s(result, strlen(data2),data2);//result = "abc"
	
	printf("Result(cpy): &s", result);
	strcat_s(result, (strlen(result)+strlen("def")), "def");//result = "abcdef"

	printf("Result(cat): &s", result);
	
	return 0;
}