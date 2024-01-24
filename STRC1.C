#include<stdio.h>
#include<conio.h>
struct s
{
	int count;
	float a_w;
	int m_d,m_m,m_y;
	int ex_d,ex_m,ex_y;

}s1={2000,25.3,07,11,2023,01,11,2024};
void main()
{
	clrscr();
	printf("count:- %d\n a_w:-%f\n date:-%d-%d-%d \n date:-%d-%d-%d",s1.count,s1.a_w,s1.m_d,s1.m_m,s1.m_y,s1.ex_d,s1.ex_m,s1.ex_y);

	getch();

}
