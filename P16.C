#include<stdio.h>
#include<conio.h>
void main()
{
	int n=4;
	int *p;
	clrscr();
	p=&n;
	printf("pointer befor addition%u\n",p);
	p=p+3;
	printf("pointer after addition%u\n",p);
	getch();
}