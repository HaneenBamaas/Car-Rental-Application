#include <stdio.h>
#define SIZE 100 //maximum size of array

void customerInformation(const char b[][15],const char a[][15],const char c[][15],int x); //function prototype 
void vehicleInformation(const char d[][15],const char e[][15],const char f[][15],const char g[][15],const char h[][15],int y);//function prototype
void options(); //function prototype 

int main()
{   //start function main
    char num_custmor[SIZE][15],id_custmor[SIZE][15];
    char name_custmor[SIZE][15]; //define virables for customer Information that have 2D array
     
     char model_year[SIZE][15], license_plate_number[SIZE][15], customer_number[SIZE][15];
     char make[SIZE][15], model_name[SIZE][15]; //define virables for vehicle Information that have 2D array
     
     int num; //number to be read from user
     int counter_custmor=0; //(initialization) increment virable for customer Information
     int counter_vehicle=0; //(initialization) increment virable for vehicle Information
     printf("%70s\n", "Welcom To Car Rental Application!!");
     options(); 
     printf("Enter your option: "); //prompt for input
     scanf("%d",&num);
    while(num!=5){  //if user enter any number accept 5
        // determine num value 
        switch(num){
       case 1://new customer Information
       
        printf("\nEnter a customer ID number: "); //prompt for input
        scanf("%s",id_custmor[counter_custmor]); //read from user 
        printf("Enter the name: "); //prompt for input
        scanf("%s",name_custmor[counter_custmor]); 
        printf("Enter phone number: "); //prompt for input
        scanf("%s",num_custmor[counter_custmor]); 
        counter_custmor++; //increment
        
       break; //exsit switch
       case 2://new vehicle Information
       printf("\nEnter a model year: "); //prompt for input
       scanf("%s",model_year[counter_vehicle]);
       printf("Enter Make: "); //prompt for input
       scanf("%s",make[counter_vehicle]);
       printf("Enter Model name: "); //prompt for input
       scanf("%s",model_name[counter_vehicle]);
       printf("Enter License plate number: "); //prompt for input
       scanf("%s",license_plate_number[counter_vehicle]);
       printf("Customer number who is currently renting vehicle: "); //prompt for input
       scanf("%s",customer_number[counter_vehicle]);
       ++counter_vehicle; //increment
       
       break; //exsit switch
       case 3://all customers Information
       customerInformation(id_custmor,name_custmor,num_custmor,counter_custmor);
       //call the function
       break; //exsit switch
       
       case 4://all vehicle Information
       vehicleInformation(model_year,make,model_name,license_plate_number,customer_number,counter_vehicle);
       //call the function
       break; //exsit switch
       
       default: //catch all other characters 
       break; //exsit switch
    } //end switch
    
     options();
     printf("Enter your option: "); //prompt for input
     scanf("%d",&num);
  
    }//end while
    return 0;
}//end main

// customerInformation function definition
void customerInformation(const char b[][15],const char a[][15],const char c[][15],int x){
    if(x>=1){ //start if
     // display Customer Information in tabular format
    printf("\n*****************************************Customer Information*****************************************************\n");
     printf("%15s%38s%47s\n","customer ID number","customer name","phone number"); //tabular format
  for(int i=0;i<x!='\0';i++){ 
       printf("%17s%36s%48s\n",b[i],a[i],c[i]); //print the element that the user enter it in case 1
    }//end for loop
    }//end if
    }//end customerInformation function
    
// vehicleInformation function definition    
void vehicleInformation(const char d[][15],const char e[][15],const char f[][15],const char g[][15],const char h[][15],int y){ //start function
    if(y>=1){ //start if
       // display vehicle Information in tabular format
      printf("\n*****************************************Vehicle Information*****************************************************\n");
    printf("%12s%15s%21s%27s %28s\n%114s\n","model year","Make","Model name","License plate number","Customer number ","(who is currently renting vehicle)");
    for(int i=0;i<y!='\0';i++){ 
    printf("%8s%16s%22s%25s%36s \n",d[i],e[i],f[i],g[i],h[i]); //print the element that the user enter it in case 2
    } //end for loop
    } //end if
} //end vehicleInformation function

// options function definition
void options(){ //start options function
       printf("\nChoose one of the following options:"
         "\n1 - to add a new custmor"
         "\n2 - to add a new vehicle"
         "\n3 - to print all customers’ information"
         "\n4 - to print all vehicles’ information"
         "\n5 - to quit\n"); 
} //end options function

