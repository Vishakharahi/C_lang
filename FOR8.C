#include<stdio.h>
#include<conio.h>
void main()
{
	int i,sum,n,sqr;
	clrscr();
	printf("enter number of sn");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sqr=i*i;
		sum+=1/(double)sqr;
	}
	printf("%.2f",sum);
	getch();
}