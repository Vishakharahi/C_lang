#include<stdio.h>
#include<conio.h>
void main()
{
	int i,k,n,j;
	clrscr();
	printf("number of rows:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}

		for(k=1;k<=i;k++)
		{
			printf(" *");
		}
		printf("\n");
	}
	for(i=1;i<=n;i++)
	{

		for(j=1;j<=i;j++)
		{
			printf(" ");
		}

		for(k=1;k<=n-i;k++)
		{
			printf(" *");
		}
		printf("\n");
	}

	getch();
}
