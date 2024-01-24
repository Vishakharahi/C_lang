#include<stdio.h>
#include<conio.h>
void fun(int n)
{
	static int n1=0,n2=1,n3;
	if(n>0)
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;
		printf("%d\n",n3);
		fun(n-1);
	}
}
void main()
{
	int e;
	clrscr();
	printf("value of ele");
	scanf("%d",&e);
	printf("%d\n%d\n",0,1);
	fun(e-2);
	getch();
}