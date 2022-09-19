/*Write a program to check whether a triangle is valid or not, when
the three angles of the triangle are entered through the keyboard.
A triangle is valid if the sum of all the three angles is equal to 180
degrees*/

#include<stdio.h>

int main(){

    int a, b, c, S;

    printf(" Enter the angles of the triangle \n");
    scanf("%d%d%d", &a, &b, &c);

    S = a + b + c; // Taking sum of the angles 

    if( S == 180) // giving condition  of the traigle
    {
        printf( "The given angles can make a valid triangle \n");
    }
    else
    {
        printf(" The given angles can not make a valid triangle");
    }
    
    return 0;
}