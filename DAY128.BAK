#include<stdio.h>
#include<conio.h>
void sum()
{
	int matrix1[3][3],matrix2[3][3],matrix3[3][3],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("element [%d][%d]:",i,j);
			scanf("%d",&matrix1[i][j]);
		}
	}
	printf("\n\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("element [%d][%d]:",i,j);
			scanf("%d",&matrix2[i][j]);
		}
	}
	printf("\n\n");
	printf("sum of matrix1 and matrix2");
	printf("\n");

	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
			printf("%d\t",matrix3[i][j]);
		}
	}

}
void main()
{
	clrscr();
	sum();
	getch();
}
