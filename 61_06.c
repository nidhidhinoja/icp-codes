//6.Input two numbers and prints its Addition, Subtraction, Multiplication, and Division.//
#include<stdio.h>
int main()
{
	int k,i;

	printf("enter the value of k:");
	scanf("\n%d",&k);
	 
	printf("enter the value of i:");
	scanf("\n%d",&i);
	
	printf("\naddition= %d",k+i);
	printf("\nsubstraction= %d",k-i);
	printf("\nmultiplication= %d",k*i);
	printf("\ndivision= %d",k/i);
	return 0;
}
