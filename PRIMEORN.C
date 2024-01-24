#include<stdio.h>
#include<conio.h>
void main()
{
	int no,i,count=0;
	clrscr();
	printf("number is:");
	scanf("%d",no);
	for(i=1;i<=no;i++)
	{
		if(no%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("no is prime");
	}
	else
	{
		printf("not");
	}
	getch();
}