//16.    Input a Rupees and prints its value converted into Dollar.//
#include<stdio.h>
int main()
{
    float r,d;
    printf("enter the value rupee: ");
    scanf("\n%f",&r);
    
    d=75.04*r;
    printf("\ndollar %f",d);
	return 0;
}
