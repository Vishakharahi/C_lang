#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("value of a,b,c");
	scanf("%d\n%d\n%d"&a,&b,&c);
	if(a<b && a<c)
	{
		printf("a is minmum");
	}
	else if(b<a && b<c)
	{
		printf("b is minmum");
	}
	else if(c<a && c<b)
	{
		printf("c is minmum");
	}
	getch();
}
