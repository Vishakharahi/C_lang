#include<stdio.h>
#include<conio.h>
void main()
{
	int i,k,n,j;
	clrscr();
	printf("number of rows:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=i;j<=n;j++)
		{
			printf(" ");
		}

		for(k=1;k<=i;k++)
		{
			printf(" %d",k);
		}
		printf("\n");
	}
	getch();

}