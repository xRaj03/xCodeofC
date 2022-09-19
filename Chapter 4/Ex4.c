#include<stdio.h>

int main(){
    char G;
    int yos, qual, sal = 0;

    printf(" Enter the Gender yos and qual( 0 = G, 1 = PG ) : \n");
    scanf("%c%d%d", &G, &yos, &qual);

    if ( G == 'm' && yos >= 10 && qual == 1 )
    sal = 15000 ;
    else if ( ( G == 'm' && yos >= 10 && qual == 0 ) ||
    ( G == 'm' && yos < 10 && qual == 1 ) )
    sal = 10000 ;
    else if ( G == 'm' && yos < 10 && qual == 0 )
    sal = 7000 ;
    else if ( G == 'f' && yos >= 10 && qual == 1 )
    sal = 12000 ;
    else if ( G == 'f' && yos >= 10 && qual == 0 )
    sal = 9000 ;
    else if ( G == 'f' && yos < 10 && qual == 1 )
    sal = 10000 ;
    else if ( G == 'f' && yos < 10 && qual == 0 )
    sal = 6000 ;

    printf("\n salary of the employee = %d\n", sal);


    
    return 0;
}