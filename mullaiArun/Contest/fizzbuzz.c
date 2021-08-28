/*
write the fizzbuzz program
*/
#include<stdio.h>
int main()
{
    int i;
    int n;
    printf("Enter the value of n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%3==0 && i%5==0)
            printf("\nFizzBuzz");
        else if(i%3==0)
            printf("\nFizz");
        else if (i%5==0)
            printf("\nBuzz");
        else
            printf("\n%d",i);
        }
    return 0;
}
