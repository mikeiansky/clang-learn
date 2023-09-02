#include <stdio.h>

typedef int (*TSF) (int,int);

int sum(int a, int b){
    return a + b;
}

int main(){

    TSF s1 = sum;

    int(*f1)(int,int) = sum;

    printf("sf call value is %d\n", (*s1)(23,16));

    return 0;
}