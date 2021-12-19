#include <stdio.h>

/// Searching an element in an array

int main()
{
    int arr[] = { 15, 56, 37, 47, 62, 24, 71, 92, 43, 25, 74 ,10 };
    int num;
    int i;
    
    printf("Enter an integer to be searched : ");
    scanf("%d" , &num);
       
    for(i = 0; i < 12 ; i++)
    {
        if(arr[i]==num)
        {
        	printf("Integer Found!");
        	return 0;
		}
    }

	printf("Element Not Found!");
}
