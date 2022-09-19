// write a program to find a number is divisible by 97 

#include<stdio.h>

int main(){
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);

    printf("Divisibility test returns : %d\n", num%97);
    
    return 0;
}