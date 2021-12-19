#include <stdio.h>
#include <stdlib.h>

int add( int a , int b)
{
    int sum  = a + b;
    return sum;
}

int multiply( int x , int y )
{
    int prod = x * y;
    return prod;
}

int main()
{
    int num1 ,num2 , ans ;

    printf(" Enter 2 numbers: ");
    scanf("%d %d" , &num1 , &num2 );

    /// In-Line function call

    printf("\n Sum of %d and %d is %d", num1 , num2 , add(num1,num2) );
    printf("\n Product of %d and %d is %d", num1 , num2 , multiply(num1,num2) );

    return 0;
}


