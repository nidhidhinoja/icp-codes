//17.    Input a Number of Chairs and its Total Cost and Prints the Cost of Each chair.//
#include<stdio.h>
int main()
{
   float ep,n,p;
   printf("enter the number of chairs n: ");
   scanf("\n%f",&n);
   
   printf("enter the total prize p: ");
	scanf("\n%f",&p);
	ep=p/n;
   printf("\neach chair prize %f",ep);
   return 0;
}
