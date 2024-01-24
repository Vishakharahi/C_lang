#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5]={1,2,3,4,5},i,sum=0;
	clrscr();
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
		printf("value of %d is:%d\n",i,a[i]);

	}
	for(i=0;i<=4;i++)
	{
		sum=sum+a[i];
	}
	printf("%d\n",sum);

	getch();
}
