#include<stdio.h>
#include<conio.h>
void main()
{
	int r,p,r_p;
	clrscr();
	printf("enter pisa:");
	scanf("%d",&p);
	r=p/100;
	r_p=p%100;
	printf("%d and %d pisa",r,r_p);
	getch();
}
