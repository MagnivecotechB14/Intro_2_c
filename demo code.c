//ONALETHATA MASWABI
//15000717
//MECHATRONICS AND INDUSTRIAL INSTRUMENTATION
#include <stdio.h>
#include<windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


void main_menu();
void make_a_call();
void check_my_balance();
void exit_sub_menu();
void user_account();
struct subscriber;
void main()
{
    char choice;
    system("color F9");
    char name[20];
    char surname[20];
    int i,d,n,b,u,z,h;
    float c,a,x;
    x=19.89;
    for(i=0; i<40; i++);

printf("***************WELCOME TO Be Mobile NETWORK*************")
 FILE *p;
 char ch;
 p = fopen("C:\\USER ACCOUNT DETAILS.txt","w");
 printf("CREATE USER ACCOUNT FIRST\n\n\a");
 printf("enter name\n\a");//USER NAME
    scanf("%s",&name);
    fprintf(p,"NAME:%s\n",name);
    printf("enter surname\n\a");//USER SURNAME
    scanf("%s",&surname);
    fprintf(p,"SURNAME:%s\n",surname);
    printf("enter number\n\a");//USER NUMBER
    scanf("%d",u);
    fprintf(p,"NUMBER:%d\n",u);
    printf("enter id number\n\a");//USER ID NUMBER
    scanf("%d",b);
    fprintf(p,"ID NUMBER:%d\n",b);
    printf("available airtime=%f",x);//AVAILABLE AIRTIME
    fprintf(p,"NUMBER:%d\n",z);
    fprintf(p,"AIRTIME:%f\n",x);
 while((ch = getche())!='\r')
fputc(ch,p);
fclose(p);

{
    void main_menu();

   int start();
   {
    printf("****************************MAIN MENU**************************************");
    printf("M-make a call\n\a");
    printf("C-check my balance\n\a");
    printf("A-user account\n\a");
    printf("E-exit sub menu\n\a");
    printf("enter choice\n\a");
    scanf("%d",&choice);
   }


}
//SWITCH CASE CHOICES AS FUNCTIONS
 switch (choice)
   {
    case 'M':
    {
    void make_a_call();
    }
    break;

    case 'A':
    {
    void user_account();
    }
    break;


    case 'C':
    {
    void check_my_balance();
    }
    break;


    case 'E':
    {
    void exit_sub_menu();
    }
    break;


    default:
    printf("out of choice");
   }
   //MAKE A CALL FUNCTION
    void make_a_call()

    {
    p = fopen("C:\\CALL LOGS.txt","w");
    time_t currenttime;
    time(&currenttime);
    struct tm *mytime=localtime(&currenttime);
    fprintf(p,"date:",currenttime);
    fprintf(p,"%i %i %i\n",mytime->tm_mday, mytime->tm_mon+1, mytime->tm_year+1900);
    //d/m/y
    //date:13:03:2017
    system("cls");
    char mytim[25] = __TIMESTAMP__;
    fprintf(p,"Todays current date time:%s",mytim);
        printf("number\n");
        scanf("%d",&n);
         printf("connecting");
    for (a=0;a<3;a++)
    {
      printf(".");
      Sleep(700); //time for displaying "." in milliseconds
    }
        fprintf(p,"DIALLED h:%d",n);
        d=(rand()%30)+2;
        printf("call duration=%d\n\a",d);
        scanf("%d",&d);
        fprintf(p,"CALL DURATION:%d\n",d);
        c=d*0.25;
        printf("call cost=%f\n\n\a",c);
        scanf("%f",&c);
        fprintf(p,"CALL COST:%f",c);
        a=x-c;
        printf("available airtime=%f\n",a);
        scanf("%f",&a);
        fprinf(p,"AVAILABLE AIRTIME:%f\n",a);
        while((ch = getche())!='\r')
        fputc(ch,p);
        fclose(p);

         start();
    }
    //ACCOUNT FUNCTION
void user_account();
     {
    fprintf(p,"NAME:%s\n",name);
    fprintf(p,"SURNAME:%s\n",surname);
    fprintf(p,"ID NUMBER:%d\n",b);
    fprintf(p,"NUMBER:%d\n",z);
     }
     //CHECK MY ACCOUNT BALANCE
void check_my_balance();
{
 fprintf(p,"AVAILABLE AIRTIME:%f\n",a);

}
//EXIT SUB MENU FUNCTION
void exit_main_menu();
{
 printf("SYSTEM TERMINATING...................\a");
}
}

