/*A company insures its drivers in the following cases:
 If the driver is married.
 If the driver is unmarried, male & above 30 years of age.
 If the driver is unmarried, female & above 25 years of age*/

#include<stdio.h>

int main(){

    int age;
    char sex, ms;

    printf(" Enter the age sex and ms : \n");
    scanf("%d%d%d", &age, &sex, &ms);

    if ( ( ms == 'M') || ( ms == 'U' && sex == 'M' && age > 30 ) ||
    ( ms == 'U' && sex == 'F' && age > 25 ) )
    printf ( "Driver should be insured\n" ) ;
    else
    printf ( "Driver should not be insured\n" );

    
    return 0;
}