//24 Get a character from user and print tell that is it vowel or consonant.  [Switch Case]// 
#include<stdio.h>
int main()
{
	char c;
	printf("\nenter any later: ");
	scanf("%c",&c);
	
	switch (c)
	{
		case 'a':
		    printf("\n a is vowel");
		    break;
		case 'e':
		    printf("\n e is vowel");
		    break;
		case 'i':
		    printf("\n i is vowel");
		    break;
		case 'o':
		    printf("\n o is vowel");
		    break;
		case 'u':
		    printf("\n u is vowel");
		    break;
		default:
		    printf("\n it's consonant");
		    break;
	}
	return 0;
}
