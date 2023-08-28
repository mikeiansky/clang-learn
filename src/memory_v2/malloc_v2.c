#include <stdio.h>
#include <stdlib.h>

int main(){

    int num = 1;

    int *ptr;

    ptr = (int *) malloc(sizeof(int) * num);

    *ptr = 26;

    printf("value is %d\n", *ptr);

    return 0;
}