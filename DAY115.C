#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char s_n[10][50],search[10];
	int flag=0,i;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("enter student name:");
		scanf("%s",&s_n[i]);

	}
	printf("serch:");
	scanf("%s",&search);
	for(i=0;i<5;i++)
	{
		if(strcmp(search,s_n[i])==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("found");
	}
	else
	{
		printf("not found");
	}

	getch();
}
