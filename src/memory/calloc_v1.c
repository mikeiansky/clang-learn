#include <stdio.h>
#include <stdlib.h>


int main(){

    int *num = NULL;

    int size = 3;

    num = (int *)calloc(size, sizeof(int));

    for (int i=0;i<size;i++) {
        printf("num[%d] value is %d\n", i, *(num+1));
    }
    printf("","");

    free(num);
    

    return 0;
}