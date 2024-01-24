#include<stdio.h>
#include<conio.h>
struct s
{
	int rollno;
	char name[9];

}s1={42,"vishakha"},s2;
void main()
{
	clrscr();
	printf("rollno:- %d\n name:-%s\n",s1.rollno,s1.name);
	printf("value of rollno:-");
	scanf("%d",&s2.rollno);
	printf("value of name:-");
	scanf("%s",&s2.name);
	printf("rollno:- %d\n name:-%s",s2.rollno,s2.name);
	getch();

}
