#include <stdio.h>
#include <stdlib.h>
#include "splash.h"
#include"login.h"
#include"menu.h"
#include"info.h"
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
  printf("\t\t\t\t\t\t\t\t\t\t\t3.Exit\n");
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
    return 0;
   }
    else{
        printf("\n\n\t\t\t\t\t\t\t\t\t\tInvalid Option ,Please Try Again\n");
        FunctionCall();
    }
return 0;
}





