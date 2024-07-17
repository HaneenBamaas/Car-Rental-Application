#include <stdio.h>
#define SIZE 100

void customerInformation(int b[],char a[][15],int c[],int x); //function prototype
void vehicleInformation(int d[],char e[][15],char f[][15],int g[],int h[],int y);//function prototype
void options();

int main()
{
    int num_custmor[SIZE],id_custmor[SIZE];//custmor
    char name_custmor[SIZE][15];
     
     int model_year[SIZE], license_plate_number[SIZE], customer_number[SIZE];
     char make[SIZE][15], model_name[SIZE][15]; //vehicle virables
     
     int num;
     int counter_custmor=0;
     int counter_vehicle=0;
     printf("%70s\n", "Welcom To Car Rental Application!!");
     options();
     scanf("%d",&num);
    while(num!=5){
        
        switch(num){
       case 1:
       
        printf("\nEnter a customer ID number: ");
        scanf("%d",&id_custmor[counter_custmor]);
        printf("Enter the name: ");
        scanf("%s",name_custmor[counter_custmor]);
        printf("Enter phone number: ");
        scanf("%d",&num_custmor[counter_custmor]);
        counter_custmor++;
        
       break;
       case 2:
       printf("\nEnter a model year: ");
       scanf("%d",&model_year[counter_vehicle]);
       printf("Enter Make: ");
       scanf("%s",make[counter_vehicle]);
       printf("Enter Model name: ");
       scanf("%s",model_name[counter_vehicle]);
       printf("Enter License plate number: ");
       scanf("%d",&license_plate_number[counter_vehicle]);
       printf("Customer number who is currently renting vehicle: ");
       scanf("%d",&customer_number[counter_vehicle]);
       ++counter_vehicle;
       
       break;
       case 3:
       customerInformation(id_custmor,name_custmor,num_custmor,counter_custmor);
       break;
       
       case 4:
       vehicleInformation(model_year,make,model_name,license_plate_number,customer_number,counter_vehicle);
       break;
       
       default:
       break;
    } //end switch
    
     options();
     scanf("%d",&num);
  
    }//end while
    return 0;
}//end main

void customerInformation(int b[],char a[][15],int c[],int x){
    if(x>=1){
    printf("\n*****************************************Customer Information*****************************************************\n");
     printf("%15s%38s%47s\n","customer ID number","customer name","phone number"); // tabular format
  for(int i=0;i<x!='\0';i++){ 
       printf("%17d%36s%48d\n",b[i],a[i],c[i]); 
    }
    }}
    
void vehicleInformation(int d[],char e[][15],char f[][15],int g[],int h[],int y){
    if(y>=1){
      printf("\n*****************************************Vehicle Information*****************************************************\n");
    printf("%12s%15s%21s%27s %28s\n%114s\n","model year","Make","Model name","License plate number","Customer number ","(who is currently renting vehicle)");
    for(int i=0;i<y!='\0';i++){ // tabular format
    printf("%8d%16s%22s%29d%36d \n",d[i],e[i],f[i],g[i],h[i]);
    }}
}
void options(){
       printf("\nChoose one of the following options:"
         "\n1 - to add a new custmor"
         "\n2 - to add a new vehicle"
         "\n3 - to print all customers’ information"
         "\n4 - to print all vehicles’ information"
         "\n5 - to quit\n"); 
}
