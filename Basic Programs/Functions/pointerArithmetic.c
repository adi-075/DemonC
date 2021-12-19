#include <stdio.h>

void main()
{
	int a[]={10,20,30,40,50,60,70};
	int *ptr;
	ptr=&a[0];
	
	printf("value at ptr: %d", *ptr);
	printf("\nptr: %u", ptr);
	
	ptr++;
	printf("\nvalue at ptr: %d", *ptr);
	printf("\nptr: %u", ptr);


//	ptr=&a[6];
//	
//	printf("value at ptr: %d", *ptr);
//	printf("\nptr: %u", ptr);
//	
//	ptr--;
//	printf("\nvalue at ptr: %d", *ptr);
//	printf("\nptr: %u", ptr);
//	
//	ptr--;
//	printf("\nvalue at ptr: %d", *ptr);
//	printf("\nptr: %u", ptr);
}
