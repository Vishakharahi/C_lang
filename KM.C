#include<stdio.h>
#include<conio.h>
void main()
{
	float km,m,ft,each,cm;
	clrscr();
	printf("enter km:");
	scanf("%f",&km);
	m=km*1000;
	ft=km*3280.84;
	each=km*39370.1;
	cm=km*100000;
	printf("metar is: %f\n",m);
	printf("feet is: %f\n",ft);
	printf("each is: %f\n",each);
	printf("cm is: %f\n",cm);
	getch();
}