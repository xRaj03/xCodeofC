#include<stdio.h>

int main(){
    int CS, SS;

    printf("Enter the value of CS and SS\n");
    scanf("%d%d", &CS, &SS);

    if( SS - CS > 0)
    printf("You made a profit of : %d", SS - CS);

    else{
        printf(" You have a loss of %d", SS - CS);
    }

    
    return 0;
}