#include <stdio.h>

int add(int, int); //Function Declaration

void main()
{
    int a=10, b=5, c;
    printf("%d + %d = %d", a, b, add(a,b));
}

int add(int x, int y) //Function Definition
{
    return x+y;
}