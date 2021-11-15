#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\nenter the value a: ");
	scanf("%d",&a);
	
	printf("\nenter the value b: ");
	scanf("%d",&b);
	
	printf("\nenter the value c: ");
	scanf("%d",&c);
	
	
	(a>b || a>c) ? printf("\n %d is max",a): 
	(b>a || b>c) ? printf("\n %d is max",b): 
	(c>a || c>b) ? printf("\n %d is max",c): printf("\n all are equal");
	return 0;
}
