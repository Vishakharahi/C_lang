#include<stdio.h>
#include<conio.h>
void main()
{
	int y,m,r_d,d,r;
	clrscr();
	printf("value of year:");
	scanf("%d",&d);
	y=d/365;
	r=d%365;
	m=r/30;
	r_d=r%30;
	printf("%d and %d and %d",y,m,r_d);
	getch();
}

