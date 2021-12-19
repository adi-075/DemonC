#include <stdio.h>
#include <stdlib.h>
/// Create a transient Ticket Machine Buy Tickets



int pnr = 100000; total = 0 , ticket_count = 0; /// Global Variables



int displayMenu()
{
int option; ///Local Variable
printf("\n===== Welcome ======== \n");
printf("\n 1. Issue a Ticket ");
printf("\n 2. Check Balance ");
printf("\n Please choose an option: ");
scanf("%d" , &option);
return option;
}



void issueTicket()
{
int amount; /// Local Variable
printf("\n Enter amount (Cost of 1 ticket is Rs. 90) : ");
scanf("%d" , &amount);
if( amount >= 90 )
{
ticket_count ++;
total = total + 90;
pnr++;
printTicket();
printf("\n Ticket is issued. Balance to be returned is %d " , amount - 90 );
}
// TODO: Homework use else statement here
}

void printTicket()
{

}



void printSummary()
{
printf("\n Total Tickets issued: %d" , ticket_count );
printf("\n Total Money Collected: %d" , total );
}





void main()
{
int op ;



do{
op = displayMenu();
switch( op )
{
case 1:
issueTicket();
break;
case 2:
printSummary();
break;
default:
printf("\n Invalid Option... Choose a correct option.");
break;
}
}while(op != -1);
}
