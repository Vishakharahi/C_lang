#include<stdio.h>
#include<conio.h>
void add();
void main()
{
	clrscr();
	add();
	getch();
}
void add()
{
	int no1,no2,sum;
	printf("value of no1:");
	scanf("%d",&no1);
	printf("value of no2:");
	scanf("%d",&no2);
	sum=no1+no2;
	printf("%d",sum);
}