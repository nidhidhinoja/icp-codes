//10.    Verify the formula a=p*(1+(r/100)/n)-p//
#include<stdio.h>
int main()
{
	int a,p,r,n;
	
	printf("enter the value of p");
	scanf("%d",&p);
	printf("enter the value of r");
	scanf("%d",&r);
	printf("enter the value of n");
	scanf("%d",&n);
	
    a=p*(1+(r/100)/n)-p;
	
	printf("\n a=%d",a);
	return 0;
}
