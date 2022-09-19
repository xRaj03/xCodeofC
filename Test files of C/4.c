#include<stdio.h>

int main(){
    int   AM, E, M, C, W, P; // decalaring variables for subjects 
    float PER;
    printf("------Rank card of Exam-------\n"); // title of report card 
    printf("Enter the marks of English\n", E );\
    scanf("%d", &E);
    printf("Enter the marks of Maths \n", M);
    scanf("%d", &M);
    printf("Enter the marks of Chemistry\n", C);
    scanf("%d", &C);
    printf("Enter the marks of WMP\n", W);
    scanf("%d", &W);
    printf("Enter the marks of Programing\n", P);
    scanf("%d", &P);
    

    AM = E + M + C + W + P;  // AM == aggregate marks
    printf("Total Agregate marks =  %d\n", AM);

    PER = AM / 500.0 * 100; // PER == percentage   , you have to use a real no when you are dividing a integer 
    printf(" Total percentage = %f", PER);


    
    return 0;
}