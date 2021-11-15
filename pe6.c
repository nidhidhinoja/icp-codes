#include<stdio.h>
int main()
{
    float weekly_hours,hourly_rate;
    
    printf("\n enter the value of weekly_hours: ");
    scanf("%f",&weekly_hours);
    
    printf("\n enter the value of hourly_rate: ");
    scanf("%f",&hourly_rate);
    
    if (weekly_hours<=40)
    {
    	printf("\n earnings = %f",(weekly_hours*hourly_rate));
	}
    else 
    {
    	printf("\n earnings = %f",((weekly_hours*hourly_rate)+(weekly_hours-40)*1.5*hourly_rate));
	}
    return 0;
}
