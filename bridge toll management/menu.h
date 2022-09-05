void menu(void)
{



int vehicles;
float total = 0.0;


char str[]="\t\t\t\t\t\t\t   WELCOME TO TOLL MANAGEMENT SOFTWARE";

printf("\n\n\n\n\t\t\t\t%s\n\n\n",str); //printed Tittle with using the string!!


printf("\n\n\n\t\t\t\t\t\t\t\t\t   ---|| TOLL MANAGEMENT SOFTWARE BY KHONDKER TAMZIDUR RAHMAN ||---\n");
printf("\t\t\t\t\t\t\t\t\t              (Department of ECE ,North South University)\n");


printf ("\n\n\t\t\t\t\t\t\t\t\t\t\t IF YOU WANT TO EXIT THE PROGRAM PRESS 0\n") ; // press 0 for execute program
printf("\t\t\t\t\t\t\t\t\t\t    ------------------------------------------------\n\n");
printf("\t__SELECT CATEGORY__\n\n");
printf("\t press (1) to add:  Bike \n");
printf("\t press (2) to add:  CNG \n");
printf("\t press (3) to add:  Private Car \n");     //printed the vehicals names
printf("\t press (4) to add:  Taxi \n");
printf("\t press (5) to add:  Pickup Van \n");
printf("\t press (6) to add:  Truck \n");
printf("\t press (7) to add:  Loader Truck \n");
printf("\t press (8) to add:  Bus \n");
printf("\t press (9) to add:  Jeep \n");
printf("\t press (10) to add: Microbus \n");
printf("\t[ press (0) to exit the program ]\n");


//float type variables
float Bike,CNG,Private_Car,Taxi,Pickup_Van,Truck,Loader_Truck,Bus,Jeep,Microbus;

int a[] = {30,50,80,60,100,120,180,150,110,140}; //representing the the toll amount of that bridge


Bike = a[0];                                    //Initializing variables of float type with the array index
CNG = a[1];
Private_Car = a[2];
Taxi = a[3];
Pickup_Van = a[4];
Truck = a[5];
Loader_Truck = a[6];
Bus = a[7];
Jeep = a[8];
Microbus = a[9];



//declaring int type variables that will count vehicle number by type

int bike=0, cng=0, private_car=0, taxi=0, pickup_van = 0, truck = 0, loader_truck = 0, bus = 0, jeep = 0, microbus = 0, TotalVehicles;
// TotalVehicles will store the total toll collection


for (int i=0; i<=100; i++){
printf("\nSelect  Vehicles Category : ???\n");
scanf ("%d" , &vehicles) ;


if (vehicles==0)

        break;   // break to exit the loop if the condition is true



switch (vehicles) {
case 1:{
bike = bike +1;
total=total+Bike;
printf("\n\t Bike selected, Toll Added %d tk \n\n",a[0]);
}
break;

case 2: {
cng=cng+1;
total=total+CNG;
printf ("\n\t CNG selected, Toll Added %d tk \n\n",a[1]) ;
}
break;

case 3: {
private_car=private_car+1;
total=total+Private_Car;
printf("\n\t Private Car selected, Toll Added %d tk \n\n",a[2]) ;
}
break;

case 4: {
taxi = taxi+1;
total=total+Taxi;
printf("\n\t Taxi selected, Toll Added %d tk \n\n",a[3]) ;
}
break;

case 5:{
pickup_van=pickup_van+1;
total=total + Pickup_Van;
printf("\n\t Pickup Van selected, Toll Added %d tk \n\n", a[4]) ;
}
 break;

 case 6:{
truck = truck +1;
total=total+Truck;
printf("\n\t Truck selected, Toll Added %d tk \n\n", a[5]);
}
break;

case 7: {
loader_truck=loader_truck+1;
total=total+Loader_Truck;
printf ("\n\t Loader Truck selected, Toll Added %d tk \n\n", a[6]) ;
}
break;

case 8: {
bus=bus+1;
total=total+Bus;
printf("\n\t Bus selected, Toll Added %d tk \n\n", a[7]) ;
}
break;

case 9: {
jeep = jeep+1;
total=total+Jeep;
printf("\n\t Jeep selected, Toll Added  %d tk \n\n ", a[8]) ;
}
break;

case 10:{
microbus=microbus+1;
total=total +Microbus;
printf("\n\t  Microbus selected, Toll Added  %dtk \n\n", a[9]) ;
}
 break;


//using default  if all the cases are false
default: printf(" \n\t Not In The Vehicles List\n"); //using default  if all the cases are false



        }
}

system("cls");

printf("\n------------------------------------\n");
printf ("Today's Toll Collection Reoprt :\n\n");
printf("Number Of Passing Vehicles By Category\n\n");

printf ("\tBike = %d\n", bike) ;
printf("\tCNG = %d\n", cng);
printf("\tPrivate Car = %d\n", private_car) ;
printf(" \tTaxi = %d\n", taxi) ;
printf("\tPickup Van = %d\n", pickup_van);
printf ("\tTruck = %d\n", truck) ;
printf("\tLoader Truck = %d\n", loader_truck);
printf("\tBus = %d\n", bus) ;
printf("\tJeep = %d\n", jeep) ;
printf("\tMicrobus = %d\n", microbus);


printf("\n------------------------------------\n");


//sum of all vehicles
TotalVehicles=bike+cng+private_car+taxi+pickup_van+truck+loader_truck+bus+jeep+microbus;

//display total vehicles
printf("Today's Total Number of Passing Vehicles = %d\n\n", TotalVehicles);
printf("Today's Total Toll Money Collected = %.2lf Tk\n\n\n", total);



printf("\n\t!!! Thanks For Using Toll Management Software, Hope You Have A Great Day !!!\n\n");



}

