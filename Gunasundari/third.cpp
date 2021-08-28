// A fizzBuzz program


#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		 if((i%15)==0)
		{
			printf("FizzBuzz");        //n : multiple of both 3 and 5, prints FizzBuzz 
		}
		else if((i%3)==0 )
		{
			printf(" Fizz");           //n : multiple of 3 only, prints Fizz
		}
		else if((i%5)==0 )
		{
			printf(" Buzz");           //n : multiple of 5 only, prints Buzz
		}
		else
		{
			printf(" %d",i);           //n : not a multiple of both 3 and 5, prints the number itself
		}
	}
	return 0;
}
