/******************************************************************************
Program:odd_or_even_2.24
Purpose:Finding odd or even numbers
Author:Semicide
11/03/2022

*******************************************************************************/
#include <stdio.h>
int odd_even (int num);
int main(){
    int num;
    printf("Please enter a number \t");
    scanf("%d",&num);
    odd_even(num);

}
int odd_even (int num){
    if (num%2==0){
        printf("%d is even",num);
        
    }
    else {
        printf("%d is odd",num);
    }
}
