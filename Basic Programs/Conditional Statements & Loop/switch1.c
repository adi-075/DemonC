#include <stdio.h>
//DEMONSTRATION OF switch()... case...
main()
{
    int option = 0;

    do{


        printf("\n\n Where is Taj Mahal?");
        printf("\n 1: Mumbai \t 2: Delhi \t 3: Agra \t 4: Mathura");
        printf("\n\n Select the right option (1-4) : ");
        scanf("%d", &option);

        switch( option )
        {
            case 1:
                     printf("\n Too Far");
                     break;
            case 2:
                     printf("\n Close but not quite");
                     break;
            case 3:
                     printf("\n Right Option");
                     break;
            case 4:
                     printf("\n Almost there");
                     break;

        }

    }while(option != 3);


    getch();
    return 0;
}


