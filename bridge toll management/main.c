#include <stdio.h>
#include <stdlib.h>
#include "splash.h"
#include"login.h"
#include"menu.h"
#include"info.h"
int main(void)
{ int a; //integer variable a
  welcome_page(); //calling fucntion
  login();
  FunctionCall();




    return 0;
}
void FunctionCall(void)
{
    int a;

    printf("\n\n\n\t\t  \tWELCOME TO TOLL PLAZA\n");
  printf("\t\t------------------------------------\n");
  printf("\t\t1.Take Vehicles Toll\n");
  printf("\t\t2.Toll Amount Information\n");
  printf("\t\t3.Exit\n");
  printf("\t\tChoose Option :");
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
    return 0;
   }
    else{
        printf("\n\n\t\t\tInvalid Option ,Please Try Again\n");
        FunctionCall();
    }
return 0;
}





