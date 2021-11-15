//27.    Write a program that count the area for circle, square, rectangle and triangle using Switch-Case control structure//
#include<stdio.h>
int main()
{
    int choice;
    printf("\n enter \n1 to find area of triangle \n2 to find area of square \n3 to find area of rectangle\n3 to find area of circle: ");
    scanf("%d",&choice);
    switch(choice)
	{
    	case 1:
    		{
    			int a,b,c;
    			float s,area;
    			printf("\n enter sides of triangle: ");
    			scanf("%d %d %d",&a,&b,&c);
    			s=(float)(a+b+c)/2;
    			area=(float)(sqrt(s*(s-a)*(s-b)*(s-c)));
    			printf("area of rectangle is %f\n",area);
    			break;
			}
		case 2:
			{
				float side,area;
				printf("enter sides of square: \n");
				scanf("%f",&side);
				area=(float)side*side;
				printf("area of square is %f\n",area);
				break;
			}
		case 3:
	        {
	        	float len,breadth,area;
				printf("enter len and breadth of rectangle: \n");
				scanf("%f %f",&len,&breadth);
				area=(float)len*breadth;
				printf("area of rectangle is %f\n",area);
				break;
		    }
		case 4:
			{
				float radius,area;
				printf("enter radius of circle: \n");
				scanf("%f",&radius);
				area=(float)3.14*radius;
				printf("area of cicrle is %f\n",area);
				break;
			}
		default:
			{
				printf("invalid choice\n");
				break;
			}
	}
	return 0;
}
