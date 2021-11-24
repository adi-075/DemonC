//Wap to Check if a valid integer between 1 to 100 is entered or not
#include <stdio.h>
main()
{
	int i;
	do
	{
		//We don't know the value of i before entering the loop
		printf("Enter an Integer (1-100): ");
		scanf("%d", &i);
	}while(i<1 || i>100);
	printf("\n\n Thank You For Entering a Valid Integer");
}
