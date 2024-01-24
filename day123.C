#include<stdio.h>
#include<conio.h>
void mul(int no);
void main()
{
	int no;
	clrscr();
	printf("value of no :- ");
	scanf("%d",&no);
	mul(no);
	getch();
}
void mul(int no)
{
	int i,c=0;
	for (i=1;i<=no;i++)
	{
		if(no%i==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		printf("prime");
	}
	else
	{
		printf("not prime");
	}
}
