#include <stdio.h>
#include <stdlib.h>
#include "splash.h"
#include"login.h"
#include"menu.h"
#include"info.h"
#include<conio.h>
int main(void)
{
  welcome_page(); //calling fucntion
  login();
  FunctionCall();




    return 0;
}
void FunctionCall(void)
{
    int a;

    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t  \tWELCOME TO TOLL PLAZA\n");
  printf("\t\t\t\t\t\t\t\t\t\t\t--------------------------------------\n");
  printf("\t\t\t\t\t\t\t\t\t\t\t1.Start Taking Tolls\n");
  printf("\t\t\t\t\t\t\t\t\t\t\t2.Toll Amount Information\n");
  printf("\t\t\t\t\t\t\t\t\t\t\t3.Create New Employee Account\n");
  printf("\t\t\t\t\t\t\t\t\t\t\t4.View Employee Details\n");
  printf("\t\t\t\t\t\t\t\t\t\t\t5.Delete Employee Account\n");
  printf("\t\t\t\t\t\t\t\t\t\t\t6.Exit\n");
  printf("\t\t\t\t\t\t\t\t\t\t\t--------------------------------------\n");
  printf("\t\t\t\t\t\t\t\t\t\t\tChoose Any Option :");
  scanf("%d",&a);
  if (a==1){
    system("cls");
    menu();
  }
  else if (a==2){
    system("cls");
    info();
  }
  else if (a==3){
   system("cls");
   CreateAccount();
   }
   else if (a==4){
    system("cls");
   ViewAccountInfo();
   }
     else if (a==5){
         system("cls");
   DeleteAccount();
   }
    else if (a==6){
    return 0;
    }
    else{
        printf("\n\n\t\t\t\t\t\t\t\t\t\tInvalid Option ,Please Try Again\n");
        FunctionCall();
    }
return 0;
}


struct employee
{

char name[40];
char phone_no[40];
char email[40];
char f_name[40];
char m_name[40];
char age[40];

}e[40];
void CreateAccount()

{
     int i,n;

    FILE *database;
    database=fopen("employee_database.txt","a");

    printf("      Create New Account\n");
    printf("-----------------------------------\n");

    printf("Enter the number of employee's:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

      printf("\t\tEnter name:");
      fflush(stdin);
      gets(e[i].name);
      printf("\t\tEnter Father's name:");
      fflush(stdin);
      gets(e[i].f_name);
      printf("\t\tEnter Mother's  name:");
      fflush(stdin);
      gets(e[i].m_name);
      printf("\t\tEnter Phone Number:");
      fflush(stdin);
      gets(e[i].phone_no);

      printf("\t\tEnter Age:");
      fflush(stdin);
      gets(e[i].age);
      printf("\t\tEnter Email:");
      fflush(stdin);
      gets(e[i].email);


    }
    for(i=0;i<n;i++)
    {

       fprintf(database,"Name:-%s\nFather's Name:-%s\nMother's Name:-%s\nPhone no:%s\nEmail%s\nAge%s\n",e[i].name,e[i].f_name,e[i].m_name,e[i].phone_no,e[i].email,e[i].age);

    }
    fclose(database);
    printf("\nAccount created Successfully!!! wait 3 seconds.....\n");

sleep(4);
system("cls");
FunctionCall();


}


void ViewAccountInfo()
{

       FILE *database;
      database=fopen("employee_database.txt","r");
      printf("     List Of Employee's Data \n");
      printf(" ------------------------------\n");
      char c;
while ( 1 )
   {
     c = fgetc ( database ) ;
     if ( c == EOF ) //for end of file
     break ;
     printf ( "%c", c ) ;
   }

    fclose(database);
    printf("Going back in 12 seconds!!.....");
    sleep(12);
    system("cls");
    FunctionCall();


}


void DeleteAccount()
{
    system("cls");
    FILE *database;
    printf("\n\t\t\tCaution! This Will Delete Previous Data! \n\n");

    database=fopen("employee_database.txt", "w");

    if (database == NULL)

    {

        printf("\tFile does not found!");

        exit(1);
    }

    else

    {

        printf("\n\t\tDeleting All  Accounts!!! ");

        sleep(1);
        printf("[Loading.");
        printf(".");

        sleep(1);

        printf(".");

        sleep(1);

        printf(".]");

        sleep(1);

        printf("\n\n\tAccounts Deleted Successfully!!!\n\n");

        sleep(2);
        system("cls");
        FunctionCall();
    }

    fclose(database);
}


void Loading()
{
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t                                     \t Loading. ");
    for (int i = 0; i < 4; i++)
    {
        printf(". ");
        sleep(1);
    }
    printf("\n");
}

