#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

int main () {
// using struct to capture all customer details
struct subscriber
{
    char name[70];
    int ID;
    int number;
    int remaining_balance;


};
// creating a struct variable

struct subscriber s1={"TAWANDA NLEYA",14002190,7644523, 20}; //assining values to the truct array

printf("\n\n\n\n\n********************************************************************** \n\n"); // adding a star divider with double line spacing
printf("%s\n\nWelcome to the BeMobile Network\n ",s1.name);
printf("\n\n********************************************************************** \n\n"); // adding a star divider with double line spacing
printf("ID Number:                  % d\n",s1.ID);
printf("Contact Number:             % d\n\n",s1.number);
printf("Your Current Balance is:    P%d\n\n",s1.remaining_balance); // out is the declared value of 20 . the .2 gives a value with 2 decimal places
goto start; // takes us to the begining of the menu were the start: is located

getch();
// building the menu to display options we want to view
int Menu;
int Balance;
float duration;
    duration = rand()%100/10;
    scanf("%d",duration);                       // generates a random call duration log of values between 1 and 10 in minutes, each minute costs 1 Pula and stores it
    Balance = s1.remaining_balance - duration; // Calculation of remaing balance after call

{
start:

printf("1. Make Call \n");
printf("2. Check Balance \n");
printf("3. Exit\n");
printf("select one option\n\n");
scanf("%d",&Menu);

switch (Menu)
{
FILE *fp; // creating and appending a file to the program
fp = fopen("calllog.txt", "w+" );

if(fp == NULL);
    {
  printf("error saving Call Log");
getchar();

    }

    case (1):
       fprintf(fp,"Your call Duration was: %.2f minutes\n\n", &duration ); // the random numbers are 32 767 , using %100 allows the number of minutes to be limited 99, dividing by 10 gives mintues range from 1-9
       fprintf(fp,"Call cost: P %.2f \n\n2. BACK.\n>", &duration); // Building the sub menu return button
       scanf("\n%d", &Menu); // allows execution of the number 2 selection to go BACK to the main menu
              goto start;
       break;

case (2):
            printf("Your Current Balance is:    P%d\n\n",s1.remaining_balance); // this allows the calculation to be called from the initial value thus allowing deductions from the random time generated from every call.
            scanf("\n%d", &Menu);
            goto start;
            break;
case (3):

            printf( "System is terminating in ......\n" );// sleep 5 seconds
            Sleep( 1000 );
            printf("5\n");
            Sleep( 1000 );
                printf("4\n");
                Sleep( 1000 );
                printf("3\n");
                Sleep( 1000 );
      printf("2\n");
Sleep( 1000 );
      printf("1\n");


    printf( "exiting" );
system("cls");
return 0;
            exit (0);
            break;

            default:
        printf("PLEASE CHOOSE A VALID SELECTION\n"); // if any other value other than the ones set is entred this goes back to the main menu
                goto start;

}


}

}




