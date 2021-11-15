//20.    Write a program that interchange or swap the values of 2 variables.//
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\nenter the value of a: ");
	scanf("%d",&a);
	
	printf("\nenter the value of b: ");
	scanf("%d",&b);
	
	c=a;
	a=b;
	b=c;
	
	printf("\n a=%d\n b=%d",a,b);
	return 0;
}
