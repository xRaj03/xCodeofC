#include<stdio.h>

int main(){
    
    int p, n, count;
    float si, r;

    for (count = 1; count <=3; count = count + 1)
        {
            printf("Enter the values of p n and r :\n");
            scanf("%d%d%f", &p,&n, &r);

            si = p*n*r /100;
            printf("Simple intrest = RS %f\n", si);
        }
    return 0;
}