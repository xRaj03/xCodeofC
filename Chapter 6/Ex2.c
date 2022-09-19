#include<stdio.h>

int main(){
    int p,  t, count;
    float r, si;

    for ( count = 1; count < 3; count++)
    {
        printf(" Enter the value of p r and t");
        scanf("%d%d%f", &p, &t, &r);
        si = p * r * t / 100;
        printf(" Simple intrest = Rs %f\n", si);
    }
    
    return 0;
}