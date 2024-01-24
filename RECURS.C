#include<stdio.h>
#include<conio.h>
int recarse(int x)
{
	if(x==10)
	{
		return x;
	}
	else
	{
		x++;
		return recarse(x);
	}
}
void main()
{
	int a=0,result;
	clrscr();
	result=recarse(a);
	printf("result:%d",result);
	getch();
}

