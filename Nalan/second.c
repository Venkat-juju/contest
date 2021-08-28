#include<stdio.h>
#include<iostream>
/*4.) Write a program to print the below pattern*/

int main()
{
	int a;
	int c = 1;
	int d = c;
	printf("Enter the Number of rows: ");
	scanf_s("%d", &a);
	int e = a;
	int f = a;

	for (int i = 1; i <= f; i ++)
	{
		while (e >= 1)
		{
			printf(" ");
			e--;
		}
		a--;
		e = a;

		while (d >= 1)
		{
			printf("*");
			d--;
		}
		c += 2;
		d = c;
		printf("\n");
	}

	return 0;
}