#include<stdio.h>
#include<conio.h>
void main()
{
	int age1,age2,age3;
	clrscr();
	printf("value of age1:");
	scanf("%d",age1);
	printf("value of age2:");
	scanf("%d",age2);
	printf("value of age3:");
	scanf("%d",age3);
	if(age1>age2 && age1>age3)
	{
		printf("age is maximum");
	}
	else if(age2>age3 && age2>age1)
	{
		printf("age2 is maximum");
	}
	else if (age3>age1 && age3>age2)
	{
		printf("age3 is maximum");
	}
	getch();
}