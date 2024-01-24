#include<stdio.h>
#include<conio.h>
void main()
{
	int mark[5],i,totle=0,pre=0;
	clrscr();
	for(i=0;i<=4;i++)
	{
		scanf("%d",&mark[i]);
		printf("value of %d is:%d\n",i,mark[i]);

	}
	for(i=0;i<=4;i++)
	{
		totle=totle+mark[i];
		pre=totle*100/500;
	}
	printf("sum of array: %d\npersentage of:%d",totle,pre);


	getch();
}