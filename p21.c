#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\nenter the value a: ");
	scanf("%d",&a);
	
	printf("\nenter the value b: ");
	scanf("%d",&b);
	
	printf("\nenter the value c: ");
	scanf("%d",&c);
	
	if (a>b)
	{
		printf("\n%d is maximum",a);
	}
	else if (a>c)
	{
		printf("\n%d is maximum",a);
	}
	else if (b>a)
	{
		printf("\n%d is maximum",b);
	}
	else if (b>c)
	{
		printf("\n%d is maximum",b);
	}
	else if (c>a)
	{
		printf("\n%d is maximum",c);
	}
    else if (c>b)
	{
		printf("\n%d is maximum",c);
	}
	else
	{
		printf("\nall are equal");
	}
	return 0;
}
