#include <stdio.h>
#include <stdlib.h>

int main()
{
  const int num_of_students = 10;
  const double PI = 3.142;
  const char dollar = '$';
  //const char dollar;
  //dollar = '$'; // Read-Only Error

  printf("Number of students is %d \n", num_of_students);
  printf("Value of PI is %lf \n", PI);
  printf("Value of Dollar is %c",dollar);

  return 0;
}

