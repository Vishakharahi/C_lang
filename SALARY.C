#include<stdio.h>
#include<conio.h>
void main()
{
	int jb,ln,bp,perks,hra,gs,it,ns;
	clrscr();
	printf("Enter job number :- ");
	scanf("%d",&jb);
	printf("Enter Leval number number :- ");
	scanf("%d",&ln);
	printf("Enter basic pay number :- ");
	scanf("%d",&bp);
	if(ln == 1)
	{
	   perks=1500;
	}else if(ln == 2){
	   perks=950;
	}else if(ln == 3){
	   perks=600;
	}else if(ln == 4){
	   perks=250;
	}else{
	  printf("please valid leval number ");
	}

	hra= bp*10/100;
	gs = bp+hra+perks;
	printf("Gross salary is :- %d",gs);
	if(gs <=2000)
	{
	   it=0;
	} else if(gs> 2000 && gs<4000){
	   it = gs*3/100;
	}else if(gs> 4000 && gs<5000){
	   it = gs*5/100;
	}else if(gs>5000){
	   it = gs*8/100;
	}else {
	   printf(" Gross pay not valid");
	}
	ns = gs-it;
	printf("\nNet salary is := %d",ns);
	getch();
}