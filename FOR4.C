#include<stdio.h>
#include<conio.h>
void main()
{
	int i,sn,ln,d,sum;
	clrscr();
	printf("enter number of sn");
	scanf("%d",&sn);
	printf("enter number of ln");
	scanf("%d",&ln);
	printf("enter d");
	scanf("%d",&d);
	for(i=sn;i<=ln;i+d)
	{
		sum=sum+i;
	}
	printf("%d",sum);
	getch();
}