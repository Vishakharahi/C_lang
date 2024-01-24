#include<stdio.h>
#include<conio.h>
void main()
{
	int f,c;
	clrscr();
	printf("Enter fehrenheit = ");
	scanf("%d",&f);
	c=(f-32)/1.8;
	printf("Celsius = %d",c);
	getch();
}