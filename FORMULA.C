#include<stdio.h>
#include<conio.h>
void main()
{
	float basic,da,hra,con,medical,other,gp;
	clrscr();
	printf("\n\n\n\n\n\n\n\t\t\t\tbasic asalary:\n");
	printf("--------------------------------------------------------");
	scanf("%f",&basic);
	da=basic*0.10;
	hra=basic*0.08;
	con=basic*0.1;
	medical=basic*0.1;
	other=basic*0.05;
	printf("%d and %d and %d and %d and %d:\n",da,hra,con,medical,other);
	gp=basic+da+hra+con+medical+con+other;
	printf("GP:%f",gp);
	getch();
}