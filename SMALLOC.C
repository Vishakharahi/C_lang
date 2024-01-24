#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int n,*a,i,sum=0;
	clrscr();
	printf("\n enter no. of elements the arrar:-");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	if(a==NULL)
	{
		printf("\n memory alloction unsuccessful");
		exit(0);
	}
	printf("\n enter the array element one by one:-\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n array element are:-\n");
	for(i=0;i<n;++i)
	{
		sum=sum+a[i];
	}
	printf("sum:%d",sum);
	getch();
}