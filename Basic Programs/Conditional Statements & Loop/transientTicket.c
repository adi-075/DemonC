#include <stdio.h>
#include <stdlib.h>
// Create a transient Ticket Machine Buy Tickets


int menu()
{
    int option;

        printf("\n===== Welcome ======== \n");

        printf("\n 1. Issue a Ticket ");
        printf("\n 2. Check Balance ");
        printf("\n Please choose an option: ");
        scanf("%d" , &option);

    return option;

}


int main()
{
    int op ;
    int amount =0 , total =0 , ticket_count = 0;

	void price(){
	    if( amount >= 90 )
	                {
	                    ticket_count ++;
	                    total = total + 90;
	                    printf("\n Ticket is issued. Balance to be returned is %d " , amount - 90 );
	                }
	            };


    do{

        op = menu();

        switch( op )
        {
            case 1:
                printf("\n Enter amount (Cost of 1 ticket is Rs. 90) : ");
                scanf("%d" , &amount);
                price(amount);
                break;

            case 2:
                printf("\n Total Tickets issued: %d" , ticket_count  );
                printf("\n Total Money Collected: %d" , total  );
                break;
            default:
                printf("\n Invalid Option... Choose a correct option.");
                break;

        }
    }while(op != -1);

    return ;
}

