#include<stdio.h>

int main(){

    int i;

    printf(" Enter any value :");
    scanf("%d", &i);

    if( i % 2 > 0 )
    printf(" the entered value is odd ");

    else{
        printf(" the enterd calue is even");
    }
    
    return 0;
}