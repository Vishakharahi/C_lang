//addition
#include<stdio.h>
#include<conio.h>
void main()
{
	int no1=5, no2=7;
	int sum, sub,mul,div,modul;
	clrscr();
	printf("enter no1:");
	scanf("%d",&no1);
	printf("enter no2:");
	scanf("%d",&no2);
	sum=no1+no2;
	printf("addition of %d and %d is: %d\n",no1,no2,sum);
	sub=no1-no2;
	printf("Subscrition of %d and %d is:%d\n",no1,no2,sub);
	mul=no1*no2;
	printf("multipication of %d and %d is:%d\n",no1,no2,mul);
	div=no1/no2;
	printf("div of %d and %d is :%d\n",no1,no2,div);
	modul=no1%no2;
	printf("div of %d and %d is :%d",no1,no2,modul);
	getch();
}