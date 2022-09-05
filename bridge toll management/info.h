#include<time.h>

void info(void)

{ int n;
  printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t--------------------------------\n");
  printf("          \t\t\t\t\t\t\t\t\t\t| Toll For Bikes 30 TK         |\n");
  printf("          \t\t\t\t\t\t\t\t\t\t| Toll For CNG 50 TK           |\n");
  printf("          \t\t\t\t\t\t\t\t\t\t| Toll For Private Car 80 TK   |\n");
  printf("          \t\t\t\t\t\t\t\t\t\t| Toll For Taxi 60 TK          |\n");
  printf("          \t\t\t\t\t\t\t\t\t\t| Toll For Pickup Van 100 TK   |\n");
  printf("          \t\t\t\t\t\t\t\t\t\t| Toll For Truck 120 TK        |\n");
  printf("          \t\t\t\t\t\t\t\t\t\t| Toll For Loader Truck 180 TK |\n");
  printf("          \t\t\t\t\t\t\t\t\t\t| Toll For Bus 150 TK          |\n");
  printf("          \t\t\t\t\t\t\t\t\t\t| Toll For Jeep 110 TK         |\n");
  printf("          \t\t\t\t\t\t\t\t\t\t| Toll For Microbus 140 TK     |\n");
  printf("          \t\t\t\t\t\t\t\t\t\t--------------------------------\n\n\n");
  printf("\t\t\t\t\t\t\t\t\t\t\tPress (0) To Start Collecting Toll\n");
  printf("\t\t\t\t\t\t\t\t\t\t\tPress (1) To Go Back To Options\n\n");
  printf("\t\t\t\t\t\t\t\t\t\t\tSelect : ");
  scanf("%d",&n);


  if(n==0){
   system("cls");
   menu();
}
 else if(n==1){
    system("cls");
    FunctionCall();

 } else{
 printf("\n\n\t\t\t\t\t\t\t\tSorry Invalid Option, Trying Again In 3 Seconds....");
 sleep(3);
 system("cls");

 info();
 }

}
