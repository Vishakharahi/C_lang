#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,rows;
	clrscr();
	printf("enter number of rows:");
	scanf("%d",&rows);
	for(i=0;i<rows;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c",'A'+j);
		}
		printf("\n");
	}
	getch();
}