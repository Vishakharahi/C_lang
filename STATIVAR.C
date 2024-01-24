#include<stdio.h>
#include<conio.h>
void fun()
{
	int a=10;
	static int b=20;
	a=a+1;
	b=b+1;
	printf("value of a:%d\n",a);
	printf("value of b:%d\n",b);
}
void main()
{
	clrscr();
	printf("frist call\n");
	fun();
	printf("second call\n");
	fun();
	printf("thrid call\n");
	fun();
	getch();
}
