#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,ans;
	clrscr();
	printf("enter value of a:");
	scanf("%d",&a);
	printf("enter value of b:");
	scanf("%d",&b);
	printf("enter value of c:");
	scanf("%d",&c);
	ans=(a>b)?(a>c)?a:c:(b>c)?b:c;
	printf("grater value is: %d",ans);
	getch();
}
