#include <stdio.h>
#include <stdlib.h>

struct circle{
    int radius;
    float area, cir;
}c1,c2;

void main()
{
	float pi=3.1472;
    printf("Enter the Radius for 1st circle: ");
    scanf("%d",&c1.radius);
    c1.area=pi*c1.radius*pi;
    printf("\nArea if circle is: %f", c1.area);

    printf("\nEnter the Radius of 2nd circle : ");
    scanf("%d",&c2.radius);
    c2.area=c2.radius*pi;
    printf("\nArea if circle is: %f", c2.area);
}
