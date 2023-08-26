#include <stdio.h>
#include <stdlib.h>

int main(){

    int *num = NULL;

    num = (int *)malloc(sizeof(int));

    *num = 24;

    printf("num value is %d\n", *num);

    free(num);

    return 0;
}