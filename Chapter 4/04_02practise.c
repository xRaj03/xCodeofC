#include<stdio.h>

int main(){
    printf("**** Multiplication table of 10 ****");

    for (int i = 10; i; i++)
    {
        printf("10 X %d = %d\n", i, 10*i);

        if (i == 100)
        {
            break;
        }
        
    }
    
    
    return 0;
}