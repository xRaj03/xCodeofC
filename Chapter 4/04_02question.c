#include<stdio.h>

int main(){
    int i =0;
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    
    
    do
    {

        printf("The number is %d\n", i+1);
        i++;
    } while (i >0);
    
    
    return 0;
}
}