#include<stdio.h>
#include<conio.h>
void main()
{
	char s[5][10];
	int i;
	clrscr();
	for(i=0;i<5;i++)
	{
		gets(s[i]);
		puts(s[i]);
	}
	getch();
}