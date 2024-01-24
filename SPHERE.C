#include<stdio.h>
#include<conio.h>
void main()
{
	int r,sph;
	clrscr();
	printf("Enter Radius = ");
	scanf("%d",&r);
	sph=(3.14*r*r*4)/3;
	printf("Sphere = %d",sph);
	getch();

}