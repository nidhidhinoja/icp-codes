//28.    Write a  program that take input of year in 4 digit. Determine whether the year is leap year or not.(try to solve this problem with && and or operator)//
#include<stdio.h>
int main()
{
	int year;
	
	printf("enter year: ");
	scanf("%d",&year);
	
	if (year % 400 ==0)
	{
		printf("\n%d is a leap year",year);
	}
	else if (year % 100 ==0)
	{
		printf("\n%d is not a leap year",year);
	}
	else if (year % 4 ==0)
	{
		printf("\n%d is a leap year",year);
	}
	else  
	{
		printf("\n%d is not a leap year",year);
	}
	return 0;
}
