#include<stdio.h>
#include<conio.h>
void main()
{
	int r,p,ps;
	clrscr();
	printf("Enter Paisa:");
	scanf("%d",&p);
	r=p/100;
	ps=r%100;
	printf("Rupees=\%d paisa=%d",r,ps);
	getch();
}