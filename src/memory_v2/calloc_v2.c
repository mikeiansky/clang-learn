#include <stdio.h>
#include <stdlib.h>

int main() {

    int *ptr = NULL;

    int size = 5;

    ptr = (int *) calloc(size, sizeof(int) * size);

    for (int i=0;i<size;i++) {
        printf("calc value[%d] is %d\n", i, ptr[i]);
    }

    return 0;
}