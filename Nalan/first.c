#include<stdio.h>
#include<iostream>
/*3.) A Fizz Buzz program prints the number from the range of 1 to n, where n is the
input number taken from the user*/

int main()
{
	int a;
	char b = *;
	printf("Enter the Number of rows: ");
	scanf_s("%d", &a);

	for (int i = 1; i <= a; i+2)
	{
		for (int j = a; j >= 1; j--)
		{
			printf(" ");
		}
		printf("%c", i * b);
	}

	return 0;
}