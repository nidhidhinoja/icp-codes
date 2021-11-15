//9.    Verify the formula s=((4*a+c)-2*a*b)/100//
#include<stdio.h>
int main()
{
	int s,a,b,c;
	
	printf("enter the value of a");
	scanf("%d",&a);
	printf("enter the value of b");
	scanf("%d",&b);
	printf("enter the value of c");
	scanf("%d",&c);
	
    s=((4*a+c)-2*a*b)/100;
    
	printf("\n s=%d",s);
	return 0;
}
