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
		for(j=1;j<=n;j++)
		{
			printf(" ");
		}

		for(k=1;k<=n-i;k++)
		{
			printf(" %d",k*k);
		}
		printf("\n");
	}
	getch();

}