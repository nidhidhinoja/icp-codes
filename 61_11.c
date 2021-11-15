//11.    Verify the formula t=((v+s)+(l-m)*l)//
#include<stdio.h>
int main()
{
	int t,v,s,l,m;
	printf("enter the value of v");
	scanf("%d",&v);
	printf("enter the value of s");
	scanf("%d",&s);
	printf("enter the value of l");
	scanf("%d",&l);
	printf("enter the value of m");
	scanf("%d",&m);
	
	t=((v+s)+(l-m)*l);
	
	printf("\n t=%d",t);
	return 0;
}
