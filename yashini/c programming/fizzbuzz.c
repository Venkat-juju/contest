#include<stdio.h>
int main()
{
	int i,n;
	printf("input(n)");
	scanf("%d", &n);
	for(i=1;i<n+1;++i){
		if (i%3 ==0 && i%5 ==0){
			printf("FizzBuzz");
		}
		else if(i%3 ==0){
			printf("Fizz");
		}
		else if(i%5 ==0){
			printf("Buzz");
		}
		else {
			printf("%d", i);
		}
		printf("\n");
	}
	return 0;
	
}
