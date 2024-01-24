#include<stdio.h>
#include<conio.h>
void f1(int m1[2][2],int m2[2][2])
{
	int m3[2][2],i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			m3[i][j]=m1[i][j]+m2[i][j];
			printf("sum[%d][%d]:%d\n",i,j,m3[i][j]);
		}
	}
}
void main()
{
	int i,j,m1[2][2],m2[2][2];
	clrscr();
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&m1[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&m2[i][j]);
		}
	}
	f1(m1,m2);
	getch();
}
