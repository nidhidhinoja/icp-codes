//19.    Write a program that find minimum and maximum out of 3 values.//
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
	
	if (a<b && a<c)
	{
		printf("\nA is minimum"); 
	}
	else if(b<a && b<c)
	{
		printf("\nB is minimum");	
	}
	else
	{
		printf("\nC is minimum");
	}
	return 0;
}
