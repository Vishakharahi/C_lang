#include<stdio.h>
#include<conio.h>
void main()
{
	int pay,weekhour,weekrent;
	clrscr();
	printf("value of payofhour:");
	scanf("%d",pay);
	printf("value of :");
	scanf("%d",weekhour);

	weekrent=pay*weekhour;
	printf("week rent:%d",weekrent);
	getch();
}
