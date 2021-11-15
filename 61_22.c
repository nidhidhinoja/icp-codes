//22.    Write a program to check whether the entered no is odd or even.//
#include<stdio.h>
int main()
{
	int a;
	printf("\nenter the value of a: ");
	scanf("%d",&a);
	
	if (a%2==0)
	{
		printf("\n %d is EVEN",a);
	}
	else
	{
		printf("\n %d is ODD",a);
	}
	return 0;
}
