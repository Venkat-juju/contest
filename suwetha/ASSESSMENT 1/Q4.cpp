// Qyestion 4: Write a program to print the below pattern.
#include<stdio.h>
int main()
{
	int r,i,j,s;
	printf("Enter a number of rows:\n");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=r-i;j++)
	    {
	       	printf(" ");
		}
		for(s=1;s<=(2*i-1);s++)
		{
			printf("*");
		}
		printf("\n");
	}
return 0;	
	
}

