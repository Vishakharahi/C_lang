#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[5];
	int *p,*p1;
	clrscr();
	p=arr;
	p1=&arr[0];
	if(p==p1)
		printf("pointer p1 and p are eqale");
	else
		printf("pointer not eqale");
	getch();
}