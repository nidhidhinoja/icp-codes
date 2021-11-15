//14.Verify the formula c=(a+b)*(a+b)//
#include<stdio.h>
int main()
{
	int c,a,b;
	printf("\n enter the value of a: ");
	scanf("%d",&a);
	printf("\n enter the value of b: ");
	scanf("%d",&b);
	
	c=(a+b)*(a+b);
	
	printf("\n c = %d",c);
	return 0;
}
