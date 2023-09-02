#include <stdio.h>

typedef int PT;

typedef PT PTN;

int main(){

    PTN a = 25;
    PTN b = 89;
    PTN r = a + b;

    printf("ptn compute value is %d\n",r);

    return 0;
}