#include<stdio.h>
#include<conio.h>
/*********************
*author-prateek patel
*purpose-ques 3 chapter 3
*********************/
int main()
{
	int year;
	printf("enter the year");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("leap year");
		
	}
	else
	{
		printf("not a leap year");
	}
	getch();
	return(0);
}
