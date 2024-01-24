#include<stdio.h>
#include<conio.h>
void main()
{
	int l,b,aot;
	clrscr();
	printf("Enter l=");
	scanf("%d",&l);
	printf("Enter b=");
	scanf("%d",&b);
	aot=(l*b)/2;
	printf("Area of Triangle = %d",aot);
	getch();
}