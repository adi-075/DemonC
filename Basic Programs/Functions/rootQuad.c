#include <stdio.h>
#include <math.h>
#include <conio.h>

void main()
{
	float a, b, c, d, root1, root2, real ,img;
	
	printf("\nTo Find the Root of quadratic Equation...");
	printf("\n\tEnter coefficients a, b and c: ");
	scanf("%f %f %f", &a, &b, &c);
	
	d=b*b-4*a*c;
	if(d>0){
		root1=(-b+sqrt(d))/(2*a);
		root2=(-b-sqrt(d))/(2*a);
		printf("\n\t root1=%2f and root2=%2f", root1, root2);
	}
	else if(d==0)
	{
		root1 = root2 = -b/(2*a);
		printf("root1 = root2 = %2f", root1);
	}
	else
	{
		real=-b/(2*a);
		img=sqrt(-d)/(2*a);
		printf("root1 = %2f+%2fi and root2=%2f+%2fi", real, img, real, img);
	}
	getch();
}
