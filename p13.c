#include<stdio.h>
int main()
{
    float a,p,r,t;
    printf("enter the value of principal p: ");
    scanf("\n%f",&p);
    
    printf("enter the value of interest rate: ");
    scanf("\n%f",&r);
    
    printf("enter the value of time period: ");
    scanf("\n%f",&t);
    a=p*r*t/100;
    printf("\n simple interest %f",a);
	return 0;
}
