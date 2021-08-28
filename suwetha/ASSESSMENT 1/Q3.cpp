//Question 3: Write the FizzBuzz program.
//Fizz Buzz program:
// A Fizz Buzz prigram prints the number from the range of 1 to n , where n is the input number taken from the user.
#include<stdio.h>
int main()
{
	int n,i;
	printf("Entert the input value:\n ");
	scanf("%d",&n);
	printf("The Fizz Buzz numbers are: \n ");
	for(i=1;i<=n;i++)
	{
		if((i%15)==0) //The program prints"FIZZBUZZ" if it is a multiple of 3 & 5.
		{
			printf("FIZZBUZZ \t");
		}
		
			
		else if((i%3)==0) //The program prints"FIZZ" if it is a multiple of only 3 but not 5.
		   {
		   	printf("FIZZ \t");
		   }
		else if((i%5)==0)  //The program prints"BUZZ" if it is a multiple of only 5 but not 3.
		  {
		  	 printf("BUZZ \t");
		  }
		else   //if it is none of the above
		   printf("%d \t",i);   	
	}
	
return 0;	
}
