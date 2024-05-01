#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char* ptr1 = "Tech University of Korea";

	// string output using ptr1
	printf("String output using ptr1 : ");
	for (int i = 0; *(ptr1 + i); i++)
	{
		printf("%c", *(ptr1 + i));
	}
	printf("\n");

	// Reverse string output using ptr1
	printf("Reverse string output using ptr1 : ");
	int len = strlen(ptr1);
	for (int i = len - 1; *(ptr1 + i); i--)
	{
		printf("%c", *(ptr1 + i));
	}
	printf("\n");

	getchar();

	return 0;
}