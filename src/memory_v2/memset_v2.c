#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int *ptr = NULL;

    int size = 5;

    ptr = malloc(sizeof(int) * size);

    memset(ptr, 0, sizeof(int) * size);


    for (int i = 0;i<size;i++) {
        printf("malloc value[%d] is %d\n", i, ptr[i]);
    }

    return 0;
}