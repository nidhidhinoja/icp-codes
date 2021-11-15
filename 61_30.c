//30.    Write a program to find maximum from 3 values using conditional operator.//
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\nenter the value of a: ");
	scanf("%d",&a);
	
	printf("\nenter the value of b: ");
	scanf("%d",&b);
	
	printf("\nenter the value of c: ");
	scanf("%d",&c);
	
	if (a>b && a>c)
	{
		printf("A is maximum"); 
	}
	else if(b>a && b>c)
	{
		printf("B is maximum");	
	}
	else
	{
		printf("C is maximum");
	}
	return 0;
}
