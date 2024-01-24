#include<stdio.h>
#include<conio.h>
void main()
{
	int mark;
	clrscr();
	printf("value of mark:");
	scanf("%d",&mark);
	if(mark>=80 && mark<=100)
	{
		printf("distinction");
	}
	else if(mark>=60 && mark<=79)
	{
		printf("frist class");
	}
	else if(mark>=35 && mark<=59)
	{
		printf("second class");
	}
	else
	{
		printf("fail");
	}
	getch();
}