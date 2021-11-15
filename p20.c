#include<stdio.h>
int main()
{
	int a,b;
	printf("\nenter the value a: ");
	scanf("%d",&a);
	
	printf("\nenter the value b: ");
	scanf("%d",&b);
	
	(a<b || b<a) ? printf("\n %d is min"): printf("\n both are equal");
	return 0;
}
