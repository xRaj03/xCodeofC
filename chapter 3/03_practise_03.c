#include<stdio.h>

int main(){
    float tax = 0, income;
    printf("Enter your income\n");
    scanf("%f", &income);

    if (income>=250000 && income<=500000)
    {
        tax = tax + 0.05 * (income - 250000);
    }

    if (income >= 500000 && income <= 100000)
    {
        tax = tax + 0.20 * (income - 500000);
    }

    if (income >= 100000)
    {
        tax = tax + 0.30 * (income - 100000);
    }
    printf("Your net income tax is to be paid by 26of this month is %f\n", tax);
    
    
    

    
    return 0;
}