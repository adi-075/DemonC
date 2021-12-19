#include <stdio.h>
//DEMONSTRATION OF switch()... case... with default and fall through
main()
{
    int month = 0;

    printf("\n\n Enter a month (1-12) : ");
    scanf("%d", &month);

    switch(month)
    {
        case 1:
        case 2:
            printf("Month has 28 / 29 days");
            break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
            printf("Month has 30 days");
            break;        
        case 12:
                printf("Month has 31 days");
                break;
        default:
                printf("Month Error: Please enter a month between 1 - 12 only");
                break;
    }

    getch();
    return 0;
}


