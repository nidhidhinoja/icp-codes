#include<stdio.h>
int main()
{
    int bs,GS,NS;
    
    printf("\n enter the value of basic_sal: ");
    scanf("%d",&bs);

    if (bs <=10000)
	{
	    printf("\n%d",(GS=bs+bs*0,20+bs*0.80),GS);
	}
	else if (bs <=20000)
	{
		printf("\n%d",(GS=bs+0.25*bs+0.90*bs),GS);
	}
	else if (bs >20000)
	{
		printf("\n%d",(GS=bs+0.30*bs+0.95*bs),GS);
	}
	else 
	{
		printf("\n%d",(NS = GS - (GS*0.10)),NS);
	}
     return 0;
}
