#include<stdio.h>
#include<conio.h>
void main()
{
	int n=4;
	int *p,**q;
	clrscr();
	p=&n;
	q=&p;
	printf("*p:- %d\n",*p);
	printf("**q:- %d",**q);
	getch();
}