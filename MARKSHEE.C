#include<stdio.h>
#include<conio.h>
void main()
{
	int rdbms,c,php,bm,cs;
	float total,avg,per;
	clrscr();

	printf("rdbms mark is: ");
	scanf("%d",&rdbms);
	printf("c marks is: ");
	scanf("%d",&c);
	printf("php mark is:");
	scanf("%d",&php);
	printf("bm mark is:");
	scanf("%d",&bm);
	printf("cs mark is:");
	scanf("%d",&cs);

	total=rdbms+c+php+bm+cs;
	avg=total/5 ;
	per=(total*100)/500;
	printf("total is %f\n",total);
	printf("avg is %f\n",avg);
	printf("per is %f\n",per);
	getch();
}
