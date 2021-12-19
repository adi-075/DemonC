#include <stdio.h>
#include <stdlib.h> 
int main() 
{ 
	//GCD of two numbers without division
	int a, b, n, m; 
	printf ("Enter First Integer: ");
	scanf ("%d", &n); 
	printf ("Enter Second Integer: ");
	scanf ("%d", &m); 
	a = n; 
	b = m; 
	while (a != b) 
	 { 
		if(a > b) 
	  { 
		 a = a - b; 
	  }
		if (b > a) 
	  { 
		b = b - a; 
	  } 
	} 
	if (a == b) 
	{ 
		printf ("GCD of %d and %d is = %d", n, m, a); 
	}
}
