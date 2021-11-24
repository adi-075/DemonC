#include <stdio.h>

main()
{

    int n;
    int o=7;
    int f=5;
    int ans=0;  // 0 -- Prime    1 -- Not Prime
    do
    {
        printf("Enter a number: ");
        scanf("%d" , &n);

        if( n==2 || n == 3 || n==5 || n==7)
        {
            printf("Prime");
            continue;
        }

        if (n%2==0 || n%3==0 )
        {
            printf("Not a Prime");
            continue;
        }


        for(;o<=sqrt(n)||f<=sqrt(n);)
        {
            if  (n%f==0)
            {
                ans=1;
                break;
            }
            else if (n%o==0)
            {
                ans=1;
                break;
            }
            f=f+6;
            o=o+6;
        }

        if (ans==1) printf("Not aPrime");
        else  printf(" Prime");

        printf("\n\n\n");
    }while ( n>0 );

    getch();
    return 0;
}
