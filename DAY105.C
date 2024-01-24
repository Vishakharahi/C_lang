#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int start=0;end=7;
	cahr n1[20],temp[10];
	clrscr();

	printf("value of n1");
	scanf("%s",n1);
	while(start<end)
	{
		temp[start]=n1[start];
		n1[start]=n1[end];
		n1[end]=temp[start];
		start++;
		end--;
	}
	printf("%s",n1);
	getch();
}