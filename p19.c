#include<stdio.h>
int main()
{
	int a,b;
	printf("\nenter the value a: ");
	scanf("%d",&a);
	
	printf("\nenter the value b: ");
	scanf("%d",&b);
	
	if (a<b)
	{
		printf("\n%d is minimum",a);
	}
	else if (b<a)
	{
		printf("\n%d is minimum",b);
	}
	else
	{
		printf("\nboth are equal");
	}
	return 0;
}
