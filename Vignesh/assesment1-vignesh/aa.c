//string frequency count


#include<stdio.h>
#include<string.h>
void main()
{
	int a;
	printf("Enter String");
	char str[100];
	int arr[36]={0};
	gets(str);
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]>47&&str[i]<58)
		{
			arr[(str[i]-'1')+26]++;
		}
		else
		{
			arr[str[i]-'a']++;
		}
	}
	for(int j=0;str[j]!='\0';j++)
	{
		if(str[j]>='a'&&str[j]<='z')
		printf("%c - %d\n",str[j],arr[str[j]-'a']);
		if(str[j]>='0'&&str[j]<='9')
		printf("%c - %d\n",str[j],arr[str[j]-'1'+26]);
	}

}