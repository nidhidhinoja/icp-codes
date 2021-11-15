#include<stdio.h>
int main()
{
	int i=1;
    do 
    {
    	if(i%3==0)
    	{
    		printf("\n%d",i);
		}
		i++;
	}while(i<11); 
	
	printf("\n");
	
	i=1;
	for (i=1; i<11; i++)
	{
		if(i%3==0)
		{
			printf("\n%d",i);
		}
	}
	
	printf("\n");
	
	i=1;
	while(i<11)
    {
    	if(i%3==0)
    	{
    		printf("\n%d",i);
		}
	    i=i+1;
	}
	return 0;
}
