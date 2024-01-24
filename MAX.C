#include<stdio.h>
#include<conio.h>
void main()
{
	int no,max=0,rem=0;
	clrscr();
	printf("enter no:");
	scanf("%d",&no);
	while(no>0)
	{
		rem=no%10;
		if(rem>max)
		{
			max=rem;
		}
		no=no/10;
	}
	printf("max no:%d",max);
	getch();
}

