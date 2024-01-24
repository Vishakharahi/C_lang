#include<stdio.h>
#include<conio.h>
void a1(int y[])
{
	int i,sum=0;
	for(i=0;i<5;i++)
	{
		sum+=y[i];
		printf("value:%d\n",y[i]);

	}
	printf("sum:%d\n",sum);

}
void main()
{
	int x[]={1,2,3,4,5};
	clrscr();
	a1(x);
	getch();
}

