#include<stdio.h>
int main()
{
	char alpha;
	printf("Enter alphabet\n");
	scanf("%c",&alpha);
	switch(alpha)
	{
		case'a':
		case'A':
			printf("It is a vowel");
			break;
			
		case'e':
		case'E':
			printf("It is a vowel");
			break;
		
	    case'i':
	    case'I':
	    	printf("It is a vowel");
	    	break;
	    
	    case'o':
	    case'O':
	    	printf("It is a vowel");
	    	break;
	    case'u':
	    case'U':
	    	printf("It is a vowel");
	    	.
	    	break;
	    default:
	    	printf("It is a consonent");
	}
}
