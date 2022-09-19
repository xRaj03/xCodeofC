#include<stdio.h>

int main(){
    unsigned int , v=14;
    for( i=0;v;v>>1){
        i+=v&1;
    }
    printf(" number of bits%d", i);
    
    return 0;
}