#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char n1[20];
	char n2[20];
	clrscr();
	printf("value of n1:");
	gets(n1);
	printf("value of n2:");
	gets(n2);
	strcat(n1,n2);
	printf("value is %s",n1);
	getch();
}