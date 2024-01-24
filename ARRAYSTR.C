#include<string.h>
#include<conio.h>
void main(){
char st[2][10];
char name1[50];
int found=0,i;
clrscr();
for (i=0;i<2;i++)
	{
		printf("enter name:");
		gets(st[i]);
	}
printf("Enter name :");
gets(name1);
for (i=0;i<2;i++)
	{
	printf("Student %s\n",st[i]);
	printf("name is %s\n",name1);

	    if(strcmp(name1,st[i]))
	    {
	    found = 1;
	    break;
	    }
	}
printf("%d",found);
if(found==1){
printf("Found Name");
}
else{
printf("Not");
}

getch();
}
