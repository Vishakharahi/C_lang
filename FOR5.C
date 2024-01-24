#include<stdio.h>
#include<conio.h>
void main()
{
	int i,sn,ln,sum=0;
	clrscr();
	printf("enter number of n:");
	scanf("%d",&sn);
	printf("enter number of n:");
	scanf("%d",&ln);
	for(i=sn;i<=ln;i++)
	{
		if(i%7==0)
		{
			sum=sum+i;
		}

	}
	printf("%d",sum);
	getch();
}