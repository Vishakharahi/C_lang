#include<stdio.h>
#include<conio.h>
void main()
{
	int h,m,s,d,r;
	clrscr();
	printf("value of year:");
	scanf("%d",&d);
	h=d/60;
	r=d%60;
	m=r/60;
	s=r%60;
	printf("%d and %d and %d",h,m,s);
	getch();
}