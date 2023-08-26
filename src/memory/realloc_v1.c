#include <stdio.h>
#include <stdlib.h>

int main(){

    int *num = (int *)malloc(sizeof(int) * 1);
    
    *num = 23;

    printf("num value is %d\n", *num);

    printf("before realloc num + 1 value is %d\n", *(num+1));

    num = (int *)realloc(num, sizeof(int) * 2);

    printf("before realloc num + 1 value is %d\n", *(num+1));

    free(num);

    return 0;
}