#include<stdio.h>
#include<conio.h>
void main()
{
	int year;
	clrscr();
	printf("value of year:");
	scanf("%d",&year);
	if(year%4){
	printf("year is leap year:");
	}
	else
	{
	printf("not leap year:");
	}
	getch();
}
