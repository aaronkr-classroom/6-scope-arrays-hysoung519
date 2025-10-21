//bit-enc.c
#include <stdio.h>
#include <string.h> //문자열은 문자의 배열
/* 
데이터 암호화: 
- 원본 데이터: data[i] = 5 (2진법 0101)
-XOR(^) 연산 후 결과: 0101 ^ 0011 = 0110 (결과: 6)
복호화:
*/
void encrypt(char* data, char key)
{
	//data[i] != '\0' && i < strlen(data) 이 경우
	for (int i = 0; data[i] != '\0'; i++)
	{
		data[i] = data[i] ^ key; //A (ASCII = 65) ^ M {78)
	}

}

void decrypt(char* data, char key)
{
	//data[i] != '\0' && i < strlen(data) 이 경우
	for (int i = 0; data[i] != '\0'; i++)
	{
		data[i] = data[i] ^ key; //A (ASCII = 65) ^ M {78)
	}


}



int main()
{
	char plaintext[] = "Hanbat National University";
	char key = 'A';

	printf("Original: %s\n",plaintext);

	encrypt(plaintext, key);

	printf("Encrtypted: %s\n", plaintext);

	decrypt(plaintext, key);

	printf("Decryped: %s\n", plaintext);

	return 0;
}