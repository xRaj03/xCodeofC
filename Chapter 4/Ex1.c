/*The marks obtained by a student in 5 different subjects are
input through the keyboard. The student gets a division as Per the
following rules:*/

#include<stdio.h>

int main(){

    int M, P, C, B, W, Per;

    printf(" Enter the marks of each subject :\n");
    scanf("%d%d%d%d%d", &M, &P, &C, &B, &W);

    Per = (M + P + C + B + W ) * 100/500;

    if( Per >= 60)
    printf(" First division");
    else
        {
        if ( Per >= 50 )
        printf ( "Second division\n" ) ;
            else
            {
                if ( Per >= 40 )
                     printf ( "Third division\n" ) ;
                 else
                printf ( "Fail\n" ) ;
            }
        }

    
    
    return 0;
}