#include <stdio.h>
// Print odd numbers from 1-100
main()
{
	int i; //can't declare integer in for loop
	for(i=1;i<100;i=i+2)//Assign;Condition;Increment/Decrement
	{
		printf("\t %d", i);
	}
}
