#include <stdio.h>

int main()
{
  printf("****ADITYA MHAMBREY 21302F0034 FY IT F");
  float a, b, product;
  printf("\nEnter two integers: ");
  scanf("%f %f", &a, &b);

  //To calculate the product
  product = (a*b);

  //%.2lf displays the number upto 2 decimal point
  printf("Product = %.4f", product);

  return 0;
}
