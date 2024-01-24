#include<stdio.h>
#include<conio.h>
void main()
{
	int a[row][col],i,j;
	clrscr();
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("element\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d",&a[i][j]);
		}
	}
	getch();
}
