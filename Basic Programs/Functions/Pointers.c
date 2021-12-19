#include <stdio.h>

void main()
{
	int v=10;
	int *ptr;
	
	ptr=&v;
	
	printf("\nValue of v: %d",v);
	printf("\nAddress of v: %u",&v);
	
	printf("\nValue of ptr: %d",*ptr);
	printf("\nAddress of v: %u",ptr);
	
    printf("\nAddress of ptr: %u",&ptr);
}

