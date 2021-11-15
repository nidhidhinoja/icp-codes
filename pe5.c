#include<stdio.h>
int main()
{
    int c ;
    printf("\n enter the value of c: ");
    scanf("%d",&c);
    switch (c)
    {
    	case 1:
    		printf("\n MONDAY");
    		break;
    	case 2:
    		printf("\n TUESDAY");
    		break;
    	case 3:
    		printf("\n WENDSDAY");
    		break;
    	case 4:
    		printf("\n THRUSDAY");
    		break;
    	case 5:
    		printf("\n FRIDAY");
    		break;
    	case 6:
    		printf("\n SATURDAY");
    		break;
    	case 7:
    		printf("\n SUNDAY");
    		break;
    	default: 
    	    printf("\n enter the day of week in range of 1 and 7 only");
    	}
    return 0;
}
