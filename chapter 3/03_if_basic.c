#include<stdio.h>

int main(){

    int a, b;
    printf("Enter a number\n");
    scanf("%d", &a);
    // c program to check a no is even or odd //

    if (a%2==0){
        printf("%d is even\n", a);
    }
    else{
        printf("%d is odd\n", a);

    }
    return 0;
}