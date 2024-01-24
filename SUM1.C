#include<stdio.h>
#include<conio.h>
int sum(int x)
{
	int i,s=0;
	for(i=1;i<=x;i++)
	{
		s+=i;
	}
	return s;
}
void main()
{
	int no,sum1;
	clrscr();
	printf("value of no:");
	scanf("%d",&no);
	sum1=sum(no);
	printf("sum is:%d",sum1);
	getch();
}
