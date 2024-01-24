#include<stdio.h>
#include<conio.h>
void main()
{
	int m1=0,m2=1,m3,i,s;
	clrscr();
	printf("value of m1:");
	printf("%d\n",m1);
	printf("value of m2:");
	printf("%d\n",m2);
	printf("value of m3:");
	scanf("%d",&m3);
	for(i=1;i<m3-2;i++)
	{
		s=m1+m2;
		m1=m2;
		m2=m3;
		printf("number is:%d\n",s);
	}
	getch();
}