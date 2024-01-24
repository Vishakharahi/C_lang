#include<stdio.h>
#include<conio.h>
void mul(int s);
void main()
{
	int s;
	clrscr();
	printf("value of s:");
	scanf("%d",&s);
	mul(s);
	getch();
}
void mul(int s)
{
	int area;
	if((area%2)==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}

}
