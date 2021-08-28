//    PATTERN USING LOOPS
//   ps: center elemnt comes in a rectangle way 
//   dont have any idea of making it squre


#include<stdio.h>
void pa(int num)
{
	int l=0;
	for(int i=0;i<num*2-1;i++)
	{
		for(int j=0;j<num*2-1;j++)
		{
			if(i<j)
			l=i;
			else
			l=j;
			if(l>num*2-1-i)
			l=2*num-1-i;
			if(l>2*num-1-j-1)
			l=2*num-2-j;
			printf("%d",num-l);
		}
		printf("\n");
	}
}
int main()
{
	int a;
	printf("enter number: ");
	scanf("%d",&a);
	pa(a);
	return 0;
}




