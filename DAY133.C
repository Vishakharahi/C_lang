#include<stdio.h>
#include<conio.h>
void main()
{
	int no1,no2;
	int *p1,*p2;
	clrscr();
	printf("value of no1:");
	scanf("%d",&no1);
	printf("value of no2:");
	scanf("%d",&no2);
	p1=&no1;
	printf("address of no1:%p\n",p1);
	p2=&no2;
	printf("address of no2:%p\n",p2);
	getch();
}
