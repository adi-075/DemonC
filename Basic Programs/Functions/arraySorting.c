#include <stdio.h>
#include <conio.h>

void sort(int[], int);
void main()
{
    int A[20], i, n;
    printf("Enter size of Array: ");
    scanf("%d", &n);
    if(n<=0 || n>20){
        printf("\n Invalid Size!!");
        getch();
    }
    
    printf("\nEnter %d numbers...\n", n);
    for(i=0;i<n;i++)    scanf("%d", &A[i]);
    
    printf("\nArray before Sorting: ");
    for(i=0;i<n;i++) printf("%d", A[i]);

    sort(A, n);

    printf("\nArray in Ascending Order: ");
    for(i=0;i<n;i++)   printf("%d", A[i]);


    printf("\nArray in Descending Order: ");
    for(i=n-1;i>=0;i--)   printf("%d", A[i]);

    getch();
}

void sort(int X[], int n)
{
    int i, j, tmp;
    for(i=0; i<n-1;i++){
        for(j=i+1; j<n; j++)
        {
            if(X[i] > X[j]){
                tmp=X[i];
                X[i]=X[j];
                X[j]=tmp;
            }
        }
    }
}
