//29.    Write a program that determine the grade of steel according to following condition.//
         //1   Hardness must be greater then 50//
         //2   Carbon must be less then 0.7//
         //3   Tensile must be greater then  5500//
         //Take the input for above qualities through keyboard from user Grades are decided as follows.//
         //Grade A if all 3 conditions are met.//
         //Grade B if  condition (1) and (2)  are met.//
         //Grade C if  condition (2) and (3)  are met.//
         //Grade D if  condition (1) and (3)  are met.//
         //Grade E if only one condition met.//
         //Grade F if none of conditions are met.//
#include<stdio.h>
int main()
{
	float h,t,c;
	printf("\nenter hardness of steel: ");
	scanf("%f",&h);
	
	printf("\nenter carbon in steel: ");
	scanf("%f",&c);
	
	printf("\nenter tensile of steel: ");
	scanf("%f",&t);
	
	if(h>50 && c<0.7 && t>5500)
	{
		printf("\n GRADE A");
	}
	else if (h>50 && c>0.7)
	{
		printf("\n GRADE B");
	}
	else if (c>0.7 && t>5500)
	{
		printf("\n GRADE C");
	}
	else if (h>50 && t>5500)
	{
		printf("\n GRADE D");
	}
	else if (h>50 || c>0.7 ||t>5500)
	{
		printf("\n GRADE E");
	}
	else
	{
		printf("\n GRADE F");
	}
	return 0;
}
