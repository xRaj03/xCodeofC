#include<stdio.h>

int main (){
    int l, b, area;
    printf("What is the l of the rectangle\n");
    scanf("%d", &l);

    printf("What is the b of the rectangle\n");
    scanf("%d", &b);

    area = l*b;

    printf("The area of your rectangle is %d, ", area);
    return 0;
}