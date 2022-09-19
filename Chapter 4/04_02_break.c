#include<stdio.h>

int main(){
    int i = 0;
    // firstly declare the variable i 
    do
    {
        printf("The value of i is %d\n", i);
        if (i == 4)
        // here when the loop comes to 
        //the value of i = 4 it breaks the loop
        {
            break;
        }
        
        i++;
    } while (i < 10);
    
    
    return 0;
}