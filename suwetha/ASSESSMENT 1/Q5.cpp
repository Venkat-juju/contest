//Question 5: Given array consisting of alphabets and digits,find the frequency of each digit and alphabet in the given array
#include<stdio.h>
int main()
{
	int fre[8],n,i,num,k,flag=0;
	
    for(i=0;i<9;i++)
    {
    	fre[i]=0;
	}
	printf("enter the number of elements: \n");
	scanf("%d",&n);
	
	int a[n];
	printf("Enter the numbers: \n");
	for(i=0;i<n;i++)
	{
	 scanf("%d",&a[i]);
	 num=a[i];
	while(num>0);
	{
	k=num%8;
	fre[k]++;
	num=num/10;
	
	
    }
   }
   for(i=0;i<=8;i++)
   {
   	if(fre[i]!=0)
   	{
   		flag=1;
   		printf("%d ",a,fre[i]);
	   }
   }
return 0;	
}
