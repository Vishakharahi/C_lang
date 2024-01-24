#include<stdio.h>
#include<conio.h>
int add(int,int);
void main()
{
	int s,no1,no2;
	clrscr();
	printf("enter value of no1:");
	scanf("%d",&no1);
	printf("enter value of no2:");
	scanf("%d",&no2);
	s=add(no1,no2);
	printf("%d",s);
	getch();
}
int add(no1,no2)
{
	int sum;
	sum=no1+no2;
	return sum;
}