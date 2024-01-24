#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,max=0;
	clrscr();
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
		printf("value of %d is:%d\n",i,a[i]);

	}
	for(i=0;i<=4;i++)
	{
		if(a[0]<a[i])
		{
			a[0]=a[i];
		}
	}
	printf(" max no:%d\n",a[0]);

	getch();
}