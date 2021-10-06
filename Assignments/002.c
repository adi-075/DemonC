#include <stdio.h>
int main()
{
  int dividend, divisor, quotient, remainder;
  printf("****ADITYA MHAMBREY 21302F0034 FY IT F");
  printf("\nEnter Dividend: ");
  scanf("%d", &dividend);

  printf("\nEnter Divisor: ");
  scanf("%d", &divisor);
 
  // Calculates the quotient
  quotient = dividend / divisor;

  //Calculates the remainder
  remainder = dividend % divisor; //Modulus returns the remainder
  
  printf("Quotient = %d\n", quotient);
  printf("Remainder = %d\n", remainder);

  return 0;
}
