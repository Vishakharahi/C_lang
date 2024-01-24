#include<stdio.h>
#include<conio.h>
void even();
void odd();
int n=1;
void main()
{
	clrscr();
	odd();
	getch();
}
void odd()
{
	if(n<=10)
	{
		printf("%d\n",n+1);
		n++;
		even();
	}
	return;
}
void even()
{
	if(n<=10)
	{
		printf("%d\n",n-1);
		n++;
		odd();
	}
	return;
}