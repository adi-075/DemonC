#include <stdio.h>
int main()
{
  int a=5,b=6,c=5;
  int T = 1, F = 0;

  printf("\n =====Bitwise Operators ====\n\n");

  printf("\n T=%d and F=%d\n", T,F);

  printf("\n T & T -> %d", T & T);
  printf("\n T & F -> %d", T & F);
  printf("\n F & T -> %d", F & T);
  printf("\n F & F -> %d", F & F);


  printf("\n\n\n T | T -> %d", T | T);
  printf("\n T | F -> %d", T | F);
  printf("\n F | T -> %d", F | T);
  printf("\n F | F -> %d", F | F);


  printf("\n\n\n a = %d         b = %d        c=%d", a , b, c);
  printf("\n a & b -> %d", a & b); 
  printf("\n a & c -> %d", a & c);
  printf("\n a | b -> %d", a | b);
  printf("\n a | c -> %d", a | c);

  printf("\n\n\n T ^ T -> %d", T ^ T);
  printf("\n T ^ F -> %d", T ^ F);
  printf("\n F ^ T -> %d", F ^ T);
  printf("\n F ^ F -> %d", F ^ F);

  printf("\n a ^ b -> %d", a ^ b);

  //Compliment
  printf("\n ~a --> %d", ~a); 
  printf("\n ~T --> %d", ~T);
  printf("\n ~F --> %d", ~F);
}
