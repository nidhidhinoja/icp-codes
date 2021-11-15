#include<stdio.h>
int main()
{
    float temperature;
    
    printf("\n enter the value of temperature in centigrade: ");
    scanf("%f",&temperature);
    
    if (temperature < 0)
    {
    	printf("\n freezing weather");
	}
    else if (temperature>=0 && temperature<10)
    {
    	printf("\n very cold weather");
	}
	else if (temperature>=10 && temperature<20)
    {
    	printf("\n cold weather");
	}
	else if (temperature>=20 && temperature<30)
    {
    	printf("\n normal in temperature");
	}
	else if (temperature>=30 && temperature<40)
    {
    	printf("\n its hot");
	}
	else if (temperature>=40)
    {
    	printf("\n its very hot");
	}
    return 0;
}
