#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,ans;
	char op;
	clrscr();
	printf("value of op");
	scanf("%c",&op);
      //	clrscr();
	printf("value of a:");
	scanf("%d",&a);
	printf("value of b:");
	scanf("%d",&b);

	if(op=='+')
	{
		ans=a+b;
		printf("addition of %d and %d is:%d",a,b,ans);
	}
	else if(op=='-')
	{
		ans=a-b;
		printf("subtraction of %d and %d is:%d",ans);
	}
	else if(op=='*')
	{
		ans=a*b;
		printf("multificatio of %d and %d is:%d",ans);
	}
	else if(op=='/')
	{
		ans=a/b;
		printf("divistion of %d and %d is:%d",ans);
	}
	else if(op=='%')
	{
		ans=a%b;
		printf("remider of %d and %d is:%d",ans);
	}
	getch();
}