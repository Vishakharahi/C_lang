#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],b[5],tot=0,i;
	clrscr();
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
		printf("value of %d is:%d\n",i,a[i]);
		scanf("%d",&b[i]);
		printf("value of %d is:%d\n",i,b[i]);

	}
	for(i=0;i<=4;i++)
	{
		tot=a[i]+b[i];
		printf("---------------------------------------\n");
		printf("|student no|totle marl|result\n");
		printf("---------------------------------------\n");


		printf("%d | %d \n",i,tot);
		if(tot>100)
		{
			printf("pass\n");
		}
		else
		{
			printf("fail\n");
		}
	}


	getch();
}
