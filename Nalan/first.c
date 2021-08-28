#include<stdio.h>
#include<iostream>

int main()
{
	int n;
	printf("Enter the Number: ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		if (i % 3 != 0)
		{
			if (i % 5 != 0)
			{
				printf("%d\t", i);
			}
			if (i % 5 == 0)
			{
				printf("buzz\t");
			}
		}
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
			{
				printf("fizzbuzz\t");
			}
			else
			{
				printf("fizz\t");
			}
		}
		

	}




}