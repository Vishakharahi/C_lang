#include<stdio.h>
#include<conio.h>
void main()
{
	int p,t,r,si;
	clrscr();
	printf("Enter P = ");
	scanf("%d",&p);
	printf("Enter T = ");
	scanf("%d",&t);
	printf("Enter R = ");
	scanf("%d",&r);
	si=(p*t*r)/100;
	printf("Simple interest = %d",si);
	getch();
}

