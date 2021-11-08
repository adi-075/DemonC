#include <stdio.h> 
int main() 
{ 
	int a = 10, b =20, c = 30; 
	float avg; 
	avg=(a+b+c)/3; 
	printf("\nAVERAGE: %0.2f",avg); 
	printf("\n"); 
	if(avg > a && avg > b && avg > c) 
    { 
        printf("avg is higher than a,b,c"); 
    } 
    else if(avg > a && avg > b) 
    { 
        printf("avg is higher than a,b"); 
    } 
     else if(avg > a && avg > c) 
    {
        printf("avg is higher than a,c"); 
    } 
     else if(avg > b && avg > c) 
    { 
        printf("avg is higher than b,c"); 
    } 
     else if(avg > a ) 
    { 
        printf("avg is higher than a"); 
    } 
    else if(avg > b) 
    { 
        printf("avg is higher than b"); 
    } 
    else if (avg > c ) 
    { 
        printf("avg is higher than c"); 
    } 
	return 0; 
} 

