#include<stdio.h>
#include<conio.h>
void main()
{
	int days,month,r_day;
	clrscr();
	printf("value of days:");
	scanf("%d",&days);
	month=days/30;
	r_day=days%30;
	printf("%d months and %d",month,r_day);
	getch();
}
