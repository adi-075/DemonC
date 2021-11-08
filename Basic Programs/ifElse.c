#include <stdio.h>
// WAP to check if a number given by the user is odd or even
int main()
{
	int a;
	printf("Enter an Integer: ");
	scanf("%d", &a);
	
	if(a%2==0)
	{
		printf("\n%d is an even number", a);	
	}		
	else {
			printf("\n%d is an odd number", a);
	}
	printf("\nThank You! \n\n");
	return 0;
} 
