#include<stdio.h>
#include<conio.h>
void main()
{
	int basic,level,job_no,parks,hra,g_s;
	clrscr();
	printf("value of basic:");
	scanf("%d",&basic);
	printf("value of level:");
	scanf("%d",&level);
	printf("value of job_no:");
	scanf("%d",&job_no);
	hra=basic*10/100;
	printf("value of hra %d\n",hra);

	if(level==1)
	{
		printf("parks:1500\n");
	}
	else if (level==2)
	{
		printf("parks:950\n");
	}
	else if(level==3)
	{
		printf("parks:600\n");
	}
	else if(level==4)
	{
		printf("parks:250\n");
	}
	g_s=basic+hra+parks;
	printf("gross salary\n : %d",g_s);

	if(g_s<=2000)
	{
		it=0;
	}
	else if(g_s>2000 && g_s<4000)
	{
		it=

	getch();
}


