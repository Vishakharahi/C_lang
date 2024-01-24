#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[100];
	int i,l,flag=0;
	clrscr();
	printf("value of string:");
	scanf("%s",&str);
	printf("entered string:%s\n",str);
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		if(str[i]!=str[l-i-1])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("string is not palindrome");
	}
	else
	{
		printf("string is palindrome");
	}

	getch();
}

