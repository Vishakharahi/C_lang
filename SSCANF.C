#include<stdio.h>
#include<conio.h>
void main()
{
	char str[50];
	int a=2,b=8,c,d;
	clrscr();
	sprintf(str,"a=%d and b=%d",a,b);
	sscanf(str,"a=%d and b=%d",&c,&d);
	printf("c=%d and d=%d",c,d);
	getch();
}