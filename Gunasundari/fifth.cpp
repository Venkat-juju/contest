//program to find frequency of each elements in a string

#include<stdio.h>
#include<conio.h>

int main()
{
	char s[]={'a','a','a','a','a','a'};
	int i,j,k,count=0,n;
	
	for(j=0;s[j];j++)
	n=j;
	
	for(i=0;i<n;i++)
	{
		count=1;
		if(s[i])
		{
			for(j=i+1;j<n;j++)
			{
				if(s[i]==s[j])
				{
					count++;
					s[j]='\0';
				}
			}
			for(i=0;i<n;i++)
				printf("%d",count);
		}
	}
	
	return 0;
}
