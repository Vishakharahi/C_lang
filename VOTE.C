#include<stdio.h>
#include<conio.h>
void main()
{
	int age,ans;
	clrscr();
	printf("enter age:");
	scanf("%d",&age);
	ans=(age>18)?printf("age is eligible for voting",ans):printf("age is not eligible for voting",ans);

	getch();
}