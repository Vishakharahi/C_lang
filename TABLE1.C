#include<stdio.h>
#include<conio.h>
void mul(int no);
void main()
{
	int no;
	clrscr();
	printf("value of no:");
	scanf("%d",&no);
	mul(no);
	getch();
}
void mul(int no)
{
	int i=1;
	for(i=1;i<=10;i++)
	{
		printf("mul of %d and %d : %d\n",no,i,no*i);

	}
}
