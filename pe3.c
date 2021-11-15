#include<stdio.h>
int main()
{
	int a,b,c,d,e, fail=0;
	printf("enter sub1 marks: ");
	scanf("%d",&a);
	fail = fail + ((a<40)?1:0);
	
	printf("\nenter sub2 marks: ");
	scanf("%d",&b);
	fail = fail + ((b<40)?1:0);
	
	printf("\nenter sub3 marks: ");
	scanf("%d",&c);
	fail = fail + ((c<40)?1:0);
	
	printf("\nenter sub4 marks: ");
	scanf("%d",&d);
	fail = fail + ((d<40)?1:0);
	
	printf("\nenter sub5 marks: ");
	scanf("%d",&e);
	fail = fail + ((e<40)?1:0);
	
	if (fail==0)
	{
		printf("\n PASS");
	}
	else if (fail==1 || fail==2)
	{
		printf("\n ATKT");
	}
	else 
	{
		printf("\n FAIL");
	}
	return 0;
}
