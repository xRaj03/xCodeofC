#include<stdio.h>

int main(){
    int a, b, c, x;
    printf(" enter the two values a and b :\n ");
    scanf("%d%d", &a, &b);

    c = 1;
    x = b;
    while( b != 0){
        c = c *a;
        b = b-1;

    }

    printf(" %d is raised to the power %d: %d", a, x, c);

    
    return 0;
}