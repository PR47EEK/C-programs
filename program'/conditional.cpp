#include<stdio.h>
#include<conio.h>
int main()
{
	int year;
    printf("enter the year");
    scanf("%d",&year);
    (year%4==0)?printf("leap year"):printf("simple year");
    getch();
    return(0);
    
}
