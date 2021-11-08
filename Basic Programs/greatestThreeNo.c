#include <stdio.h>
// Write a program check greater of 2 nos.
main()
{
   int a , b , c , max ;
   printf(" Enter value of a , b and c : ");
   scanf("%d %d %d" , &a , &b  , &c );

   // using Ternary operator ?:
   //max = (a>b)? a : b ;
   max  = ( a > b ) ? ( (a>c)? a : c ) : ( (b>c)? b : c );
   printf(" \n\n max = %d" , max);
}

