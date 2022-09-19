#include<stdio.h>

int main(){
    int D, m, f, i, c;
    printf("Enter the distance in km btw two cties :");
    scanf("%d", &D);
    
    m = D * 1000;
    f = D * 3280.84;
    i = D * 39370.1;
    c = D * 100000;
    printf("The value in meters = %d\n", m);
    printf("The value in feet = %d\n", f);
    printf("The value in inches = %d\n", i);
    printf("The value in centimeters = %d\n", c);

    
    return 0;
}




