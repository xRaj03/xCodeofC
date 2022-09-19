#include<stdio.h>

int main(){
    int R, S, A;
    printf(" Enter the ages of ram, shyam, and ajay ; \n");
    scanf("%d%d%d", &R, &S, &A); // Taking Ages of the three

    if( R<S && R<A) // comparing btw the ages 
    {
        printf(" Ram is the Youngest\n");
    }
    if( S<R && S<A)
    {
        printf(" Shyam is the Youngest\n");
    }
    if( A<R && A<S)
    {
        printf(" Ajay  is the youngest\n");
    }

    
    return 0;
}