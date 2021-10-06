/* #include <stdio.h> */
/* //WAP to swap the values of two integer */

/* int main() */
/* { */
/*   int a = 5; */
/*   int b = 7; */
/*   int temp; */

/*   printf("\nBefore: a = %d b=%d", a, b); */
/*   temp=a; */
/*   a=b; */
/*   b=temp; */
/*   printf("\nAfter: a = %d b=%d", a, b); */
/* } */

//Alternative Way to swap
#include <stdio.h>

// Write a program to swap the values of two integer variables.

int main()
{
int a , b ;

 printf( "Enter 2 integers (a and b): ");
scanf("%d%d", &a , &b );

 printf("\n Before : a = %d b = %d ", a , b);

 a = a + b;
b = a - b;
a = a - b;

 printf("\n After : a = %d b = %d ", a , b);

}
