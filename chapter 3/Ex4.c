#include<stdio.h>

int main(){

    int i;

    printf("Enter either 1 or 2 \n");
    scanf("%d", &i);

    if( i == 1)
    printf("You are a pro coder \n");

    else{
        if(i == 2)
        printf("Raj is a pro coder\n");
        
        else{
            printf("Raj is not a pro coder \n");
        } 
           }
    
    return 0;
}