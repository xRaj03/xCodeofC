#include<stdio.h>

int main(){
    int age;

    printf("Enter your age\n", age);
    scanf("%d", &age);
    // if nad then case //
    // == is used as equal to //
    if ( age >= 90){
        printf("You are above 90 , you cannot drive");

    }
    else{
        printf("you can drive");
    }
    
    return 0;
}