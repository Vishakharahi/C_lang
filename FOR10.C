#include<stdio.h>
#include<conio.h>
void main()
{
	int i,rem,n,sum=0;
	clrscr();
	printf("number of rows:");
	scanf("%d",&n);
	for(i=1;i<=n-1;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}

	}
	if(sum==n)
	{
		printf("parfect no");
	}
	else
	{
		printf("not parfect no");
	}
	getch();

}