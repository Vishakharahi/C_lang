#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int a,p,r,n;
	clrscr();
	printf("enter p  value is:");
	scanf("%d",&p);
	printf("enter r value is:");
	scanf("%d",&r);
	printf("enter n value is:");
	scanf("%d",&n);
	a=p*(pow(1+r/100,n));
	printf("compund intresr is %d",a);
	getch();
}
