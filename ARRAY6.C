#include<stdio.h>
#include<conio.h>
void main()
{
	int math,phy,che,totle,totle1;
	clrscr();
	printf("enter mark of math:");
	scanf("%d",&math);
	printf("enter mark of phy:");
	scanf("%d",&phy);
	printf("enter mark of che:");
	scanf("%d",&che);

	totle=math+phy+che;
	totle=math+phy;

	if(totle>170||totle>120)
	{

		printf("eligible");
	}

	else
	{
		printf("not eligible");
	}
	getch();
}