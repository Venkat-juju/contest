//PATTERN PROGRAM 

#include<stdio.h>
void main()
{
	int num;
	printf("no of rows: ");
	scanf("%d",&num);
	pattern(num);
}
void pattern(int a)
{
	int k=0;
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=a-i;j++)
		{
			printf(" ");
		}
		while(k!=2*i-1)
		{
			printf("*");
			k++;
		}
		printf("\n");
		k=0;
	}
}