#include<stdio.h>
struct { int i; float ft;}decl;
int main() {
     decl.i = 4; decl.ft = 7.96623;
      printf("%d %.2f", decl.i, decl.ft); 
      return 0;} 