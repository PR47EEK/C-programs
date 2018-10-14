#include<stdio.h>
#include<conio.h>
/*********************************
*author-prateek patel
*purpose-chapter3 ques 1
*********************************/
int main()
{
	int cp,sp,pr,ls;
	printf("enter the cost price and selling price");
	scanf("%d%d",&cp,&sp);
	if(sp>cp)
	{
		pr=sp-cp;
		printf("profit=%d",pr);
	}
	else
	{
		ls=cp-sp;
		printf("lose=%d",ls);
		
	}
	getch();
	return(0);
}
