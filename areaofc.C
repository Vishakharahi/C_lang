#include<stdio.h>
#include<conio.h>
void mul(int s);
void main()
{
	int s;
	clrscr();
	printf("value of s:");
	scanf("%f",&s);
	mul(s);
	getch();
}
void mul(int s)
{
	int area;
	area=3.14*s*s;
	printf("area of %f",area);
}
