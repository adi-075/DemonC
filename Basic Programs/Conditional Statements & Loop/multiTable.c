#include <stdio.h>
#include <stdlib.h>

void table(int);

int main()
{
int num , ans ;

printf(" Enter a number: ");
scanf("%d" , &num);

printf("\nMultiplication Table for %d is:\n", num);  
tables(num); 
return 0;
}

void tables(int num)  
{  
	int num2=num;
	int product;
	int i;
      for(i = 1; i <= 10; i++)  
    {  
    	if(num2==num)
    	{
    		printf("%d x %d = %d\n", num2, i, num2);
    		i++;
		}
			printf("%d x %d = %d\n", num2, i, num=num2+num);  
    }  
} 
