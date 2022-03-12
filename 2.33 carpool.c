
/******************************************************************************
Program:Carpool-2.33
Purpose:Finding the daily cost of driwing to work from home
Author:Semicide
12/03/2022

*******************************************************************************/
#include <stdio.h>
int main ( void)
 {
 int mile; 
 int gas_cost; 
 int mile_gas; 
 int park_fee; 
 int toll;
 int total; 
 printf( "Total miles driven per day: " );
 scanf( "%d", &mile);
 printf("Cost per gallon of gasoline: " );
 scanf("%d",&gas_cost);
 printf("Miles per gallon: " );
 scanf( "%d", &mile_gas );
 printf("Parking fees per day: " );
 scanf( "%d", &park_fee );
 printf("Tolls per day: " );
 scanf( "%d", &toll );
 total = toll + park_fee + ( mile / mile_gas ) * gas_cost;
 printf( "Daily cost of driving to work from home is %d\n", total );
 } 
    
    