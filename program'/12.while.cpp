#include<stdio.h>
#include<conio.h>
int main()
{
	int i=1,out=0;
	while(i<=10)
	{
		out=out+i;
		i++;
		//we want to print only the sum of first 10natural numbers so i++ comes first and then printf
		printf("%d\n",out);
	}
	getch();
}
