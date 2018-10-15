#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,j;
	printf("enter the no.:");
	scanf("%d",&n);
	//first for loop is used to print new line in pateern printing
	for(i=1;i<=n;i++)
	{
	//2nd for loop is to print star i times
	    for(j=1;j<=i;j++)
	    {
	    	printf("*");
		}
		  printf("\n");
		
	}
	getch();
	
}
