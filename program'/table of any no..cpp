#include<stdio.h>
#include<conio.h>
/*****************************
*author-prateek patel
*purpose-table of any no
****************************/
int main()
{
	int i,n;
	printf("hello sir please enter the no.");
	scanf("%d",&n);
	for(i=1;i<11;i++)
	{
		printf("%d * %d = %d\n",n,i,n*i);
	}
	getch();
}
