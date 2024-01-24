#include<stdio.h>
#include<conio.h>
void add(int no1,int no2);
void main()
{
	int no1,no2;
	clrscr();
	printf("enter no1:");
	scanf("%d",&no1);
	printf("enter no2:");
	scanf("%d",&no2);
	add(no1,no2);
	getch();
}
void add(int no1,int no2)
{
	int sum;
	sum=no1+no2;
	printf("sum of %d and %d :%d",no1,no2,sum);
}