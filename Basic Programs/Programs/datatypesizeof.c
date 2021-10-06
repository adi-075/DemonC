#include <stdio.h>

int main()
{
  int a_int = 311231231; //Maximum limit for Integers 
  long b_long = 45555;
  float c_float = 4.55;
  double d_double = 5.66;
  long long l_longlong = 544555555;

  printf("\n a_int = %d and Size = %d ", a_int, sizeof(a_int));
  printf("\n b_long = %ld and Size = %d ", b_long, sizeof(b_long));
  printf("\n c_float = %f and Size = %d ", c_float, sizeof(c_float));
  printf("\n d_double = %lf and Size = %d ", d_double, sizeof(d_double));
  printf("\n l_longlong = %lld and Size = %d ", l_longlong, sizeof(l_longlong));

  return 0;
}
