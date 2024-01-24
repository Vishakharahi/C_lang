#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	int b;
	clrscr();
	scanf("%d",&a);
	scanf("%d",&b);
	if(a>=18)
	{
		printf("inside if\n");
	}
	else
	{
		printf("outside if");
	}
	getch();
}
