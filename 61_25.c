//25.    Write a program that take input of 5 subjects marks. Count the percentage. Print the result  for following condition//
        // If  student has 70% or more then 70% then DISTINCTION.//
        // If  student has percentage between 60 and 69 then FIRST CLASS.//
         //If  student has percentage between 50 and 59 then SECOND CLASS.//
        // If  student has percentage between 40 and 49 then PASS CLASS.//
        // If  student has percentage less then 40  then FAIL.//
#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5;
	float p;
	
	printf("\n enter marks of sub1: ");
	scanf("%d",&s1);
	
	printf("\n enter marks of sub2: ");
	scanf("%d",&s2);
	
	printf("\n enter marks of sub3: ");
	scanf("%d",&s3);
	
	printf("\n enter marks of sub4: ");
	scanf("%d",&s4);
	
	printf("\n enter marks of sub5: ");
	scanf("%d",&s5);
	
	p = (s1+s2+s3+s4+s5)/5;
	printf("\n p = %f",p);
	
	if(p>=70)
	{
		printf("\nDISTICTION");
	}
	else if (p>=60 && p<=69)
	{
		printf("\nFIRST CLASS");
	}
		else if (p>=50 && p<=59)
	{
		printf("\nSECOND CLASS");
	}
		else if (p>=40 && p<=49)
	{
		printf("\nPASS CLASS");
	}
		else 
	{
		printf("\nFAIL");
	}
	return 0;
}
