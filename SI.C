#include<stdio.h>
#include<conio.h>
void main()
{
	int p,t,r,si;
	clrscr();
	printf("value of p:");
	scanf("%d",&p);
	printf("value of t:");
	scanf("%d",&t);
	printf("value of r:");
	scanf("%d",&r);
	si=(p*t*r)/100;
	printf("%d",si);
	getch();
}