#include<stdio.h>
#include<conio.h>
void sod(int n)
{
	int rem,sum=0;
	if(n>0)
	{
		rem=n%10;
		sum=sum+rem;
		sod(n/10);
	}
	else
	{
		printf("%d",sum);
	}
}
void main()
{
	int n,sum;
	clrscr();
	printf("value of n:");
	scanf("%d",&n);
	sod(n);
	getch();
}
