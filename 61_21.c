//21.    Write a program to interchange the value of 2 variable without using 3rd variable//
#include<stdio.h>
int main()
{
	int a,b;
	printf("\nenter the value of a: ");
	scanf("%d",&a);
	
	printf("\nenter the value of b: ");
	scanf("%d",&b);
	
	a=a^b;
	b=b^a;
	a=a^b;
	
	printf("\n a=%d\n b=%d",a,b);
	return 0;
}
