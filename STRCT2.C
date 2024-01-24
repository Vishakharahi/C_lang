#include<stdio.h>
#include<conio.h>
struct emp
{
	char grade;
	int basic;
	float allowance;

};
void main()
{
	clrscr();
	struct emp vishakha={'b',65000,812.5};
	struct emp veer;
	veer=vishakha;
	printf("%c\n%d\n%f\n",vishakha.grade,vishakha.basic,vishakha.allowance);
	printf("%c\n%d\n%f",veer.grade,veer.basic,veer.allowance);
	getch();

}
