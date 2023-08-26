#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    int size = 5;
    int *num = NULL;
    num = (int *)malloc(sizeof(int) * size);
    memset(num, 0, sizeof(int) * size);
    for (int i=0;i<size;i++) {
        printf("num[%d] value is %d\n", i, *(num+i));
    }

    return 0;
}