#include <stdio.h>
#include <stdlib.h>

struct student{
    int rollno;
    float per;
}s1,s2;

void main()
{
    printf("Enter the roll no. and percentage of the 1st student : ");
    scanf("%d %f",&s1.rollno,&s1.per);
    printf("\nRoll no : %d",s1.rollno);
    printf("\nPercentage : %f",s1.per);

    printf("\nEnter the roll no. and percentage of the 2nd student : ");
    scanf("%d %f",&s2.rollno,&s2.per);
    printf("\nRoll no : %d",s2.rollno);
    printf("\nPercentage : %f",s2.per);
}
