#include <stdio.h>
int main()
{
	int mark;
	printf("Enter Average Marks:\n");
	scanf("%d", &mark);
	
	if(mark <=100 & mark >=75)
	printf("1st class");
	else if((mark < 75)&(mark>=50))
	printf("2nd Class");
	else if((mark <50)&(mark>=30))
	printf("3rd Class");
	else
	printf("Last Class");
	return 0;
}
