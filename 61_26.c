//26.    Write a program that take input of 5 subjects marks. If student get 40 or more then 40 then  he is PASS in that subject  otherwise FAIL print the result for following condition.//
        // If student is pass in all  subjects  then declare PASS.//
        // Is student is fail in 1 or 2 subject then declare ATKT.//
        // If student is fail in more then 2 subject then declare FAIL.//
#include<stdio.h>
int main()
{  
	int s1,s2,s3,s4,s5, fail=0;
	
	printf("\n enter marks of sub1: ");
	scanf("%d",&s1);
	fail = fail + ((s1<40)?1:0);
	
	printf("\n enter marks of sub2: ");
	scanf("%d",&s2);
	fail = fail + ((s2<40)?1:0);
	
	printf("\n enter marks of sub3: ");
	scanf("%d",&s3);
	fail = fail + ((s3<40)?1:0);
	
	printf("\n enter marks of sub4: ");
	scanf("%d",&s4);
	fail = fail + ((s4<40)?1:0);
	
	printf("\n enter marks of sub5: ");
	scanf("%d",&s5);
	fail = fail + ((s5<40)?1:0);
	
	if(fail==0)
	{
		printf("\n PASS");
	}
	else if (fail==1 || fail ==2)
	{
		printf("\n ATKT");
	}
	else
	{
		printf("\n FAIL");
	}
	return 0;
}
