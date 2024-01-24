#include<stdio.h>
#include<conio.h>
void main()
{
	int no;
	clrscr();
	printf("value of no:");
	scanf("%d",&no);
	if(no%2==0)
	{
		printf("no is evan no");
	}
	else
	{
		printf("no is odd no");
	}
	getch();
}