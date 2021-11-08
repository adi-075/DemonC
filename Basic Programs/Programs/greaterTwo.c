#include <stdio.h>
// Write a program check greater of 2 nos.
main()
{
   int a , b ;

   printf(" Enter value of a and b : ");
   scanf("%d %d" , &a , &b );

   if( a > b )
   {
       printf( "\n\n %d is greater" , a);
   }
   else
    {
        if( a==b )
        {
            printf("\n\n Both values are equal");
            
        }
        else
        {
            printf("\n\n %d is greater", b);
        }
    }

