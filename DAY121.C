#include<stdio.h>
#include<conio.h>
void arc()
{
	int pi=3.14;
	int r=2;
	int area=pi*r*r;
	printf("area of circle:%d",area);
}
void main()
{
	clrscr();
	arc();
	getch();
}