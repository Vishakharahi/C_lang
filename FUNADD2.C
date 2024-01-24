#include<stdio.h>
#include<conio.h>
int add();
void main()
{
	int s,no1,no2;
	clrscr();
	s=add();
	printf("%d",s);
	getch();
}
int add()
{
	int sum,no1,no2;
	printf("enter value of no1:");
	scanf("%d",&no1);
	printf("enter value of no2:");
	scanf("%d",&no2);
	sum=no1+no2;
	return sum;
}