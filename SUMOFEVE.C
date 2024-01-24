#include<stdio.h>
#include<conio.h>
void main()
{
	int sum=0,i;
	clrscr();
	for(i=10;i<=20;i++)
	{
		if(i%2!=0)
		sum=sum+i;

	}
	printf("sum is:%d",sum);
	getch();
}