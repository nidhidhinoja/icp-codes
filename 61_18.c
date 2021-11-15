//18.    Enter value and check it is less, equal or greater than zero.//
#include<stdio.h>
int main()
{
	int a;
	printf("\n enter any value: ");
	scanf("%d",&a);
	
	if (a<0)
	{
		printf("\n the value is less than zero");
	}
	else if (a>0)
	{
		printf("\n the value is greater than zero");
	}
	else
	{
		printf("\n the value is equal to zero");
	}
}
