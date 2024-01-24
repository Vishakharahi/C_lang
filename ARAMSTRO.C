#include<stdio.h>
#include<conio.h>
void main()
{
	int no,rem,sum=0,temp;
	clrscr();
	printf("enter no:");
	scanf("%d",&no);
	temp=no;
	while(no>0)
	{
		rem=no%10;
		sum=sum+(rem*rem*rem);
		no=no/10;
	}
	if(temp==sum)
	{
		printf("aramstrong");
	}
	else
	{
		printf("not aramstrong");
	}
	getch();
}