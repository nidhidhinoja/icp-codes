#include<stdio.h>
int main()
{
	float a,h,b;
	printf("enter the value of height: ");
	scanf("\n%f",&h);
	printf("enter the value of base: ");
	scanf("\n%f",&b);
	a=h*b/2;
	printf("\narea %f",a);
	return 0;
}
