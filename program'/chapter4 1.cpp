#include<stdio.h>
#include<conio.h>
int main()
{
	int i=4,j=-1,k=0,w,x,y,z;
	w=i||j||k;
	y=i||j&&k;
	z=i&&j||k;
	printf("w=%dx=%d y=%d z=%d",w,x,y,z);
	return 0;
}
