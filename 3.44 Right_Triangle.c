/******************************************************************************
Program:Right_Triangle 3.44
Purpose:Finding out if entered sides can make a right triangle or not
Author:Semicide
11/03/2022

*******************************************************************************/
#include <stdio.h>

int main(){
    int s1,s2,hypo;
    printf("please enter the first side\t");
    scanf("%d",&s1);
    printf("please enter the second side\t");
    scanf("%d",&s2);
    printf("please enter the hypotenuse\t ");
    scanf("%d",&hypo);
    
    if(s1*s1+s2*s2==hypo*hypo){
        printf("These sides can make a wonderfull right triangle");
    }
    else{
        printf("These sides can't make a right triangle :(");
    }
        
    }
    
 
