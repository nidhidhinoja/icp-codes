//8.    Verify the formula x=((k-4)*(a*4))/100//
#include<stdio.h>
int main()
{
	int x,k,a;
	
	printf("enter the value of k");
	scanf("%d",&k);
	printf("enter the value of a");
	scanf("%d",&a);
	
	
    x=((k-4)*(a*4))/100;
	
	printf("\n x=%d",x);
	return 0;
}
