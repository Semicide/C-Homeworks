

/******************************************************************************
Program:Factorial-3.45
Purpose:Finding the factorial and e constant and e^x of the given values
Author:Semicide
12/03/2022

*******************************************************************************/
#include <stdio.h>
int factorial();
int main(){
    int num1;
    int x;
 
    printf("Please enter a number ");
    scanf("%d",&num1);
    printf("Please enter value of x");
    scanf("%d",&x);
    factorial(num1,x);
        
}
    
    

    int factorial(int num1,int x){
           int i;
           float e=1.0;
            int fact=1;
            float etop;
    for (i=1;i<=num1;i++){
    fact=fact*i;
    e=e + (1.0/fact);
        
    }
    for (i=1;i<=x;i++){
    etop=e;
    etop=e+etop;
    }
    printf("factorial =%d\t",fact);
     printf("\ne=%f\t",e);
      printf("\ne^x=%f",etop);
    }
    
    