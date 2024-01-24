#include<stdio.h>
#include<conio.h>
void main()
{
	int unit,totle;
	int bill;
	clrscr();
	printf("value of unit");
	scanf("%d",&unit);
	if(unit<=100)
	{
		bill=unit*1;
		printf("bill:%d",bill);
	}
	else if(unit>=100 && unit<=200)
	{
		bill=100*1.5+(unit-100)*1.75;
		printf("bill:%d",bill);
	}
	else
	{
		bill=100*1.5+100*1.75+(unit-200)*2;
		printf("bill:%d\n",bill);
	}
	totle=bill+100;
	if(bill>400)
	{
		totle=bill+15*unit/100;
		printf("total:%d\n",totle);
	}
	else
	{
		printf("%d",totle);
	}
	getch();
}