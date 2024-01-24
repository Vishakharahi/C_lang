#include<stdio.h>
#include<conio.h>
void mul(int a);
void main()
{
	int no;
	clrscr();
	printf("no:");
	scanf("%d",&no);
	mul(no);
	getch();
}
void mul(int a)
{
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%d\n",a*i);
	}

}