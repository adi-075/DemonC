#include <stdio.h>

int main()
{
  // Relational Operators
  int a = 5, b = 7, c = 5;

  printf("\n %d == %d -> %d ", a, b, (a==b));
  printf("\n %d == %d -> %d ", a, c, (a==c));

  printf("\n %d > %d -> %d ", a, b, (a>b));
  printf("\n %d < %d -> %d ", a, b, (a<b));

  printf("\n %d >= %d -> %d ", a, b, (a>=b));
  printf("\n %d <= %d -> %d ", a, b, (a<=b));

  printf("\n %d != %d -> %d ", a, b, (a!=b));
  printf("\n %d != %d -> %d ", a, c, (a!=c));
  
  //Logical Operators
  int result;
  printf("\n\n=====Logical Operators====\n\n  a = %d       b = %d          c=%d", a,b,c);

  result = (a==c) && (a<b);
  printf("\n(a==c) && (a<=b) -> %d", result);

  result = (a==c) || (a>=b);
  printf("\n(a==c) || (a>=b) -> %d", result);

  result = !(a==c);
  printf("\n !(a==c) -> %d ", result);
}
