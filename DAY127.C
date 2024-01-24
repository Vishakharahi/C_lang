#include<stdio.h>
#include<conio.h>
void bubble()
{
	int a[100],i,n,j,temp;
	clrscr();
	printf("enter no of element");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter value:");
		scanf("%d",&a[i]);
	}
	for(i=0; i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		for(i=0;i<n;i++)
		{
			printf("value is:%d\n",a[i]);
		}
	}
	getch();
}
void main()
{
	clrscr();
	bubble();
	getch();
}
