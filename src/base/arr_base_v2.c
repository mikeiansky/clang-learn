#include <stdio.h>
#include <string.h>



int main() {

    int size = 5;
    char c1[5] = {'\0'};
    printf("---- c1 value ---- ");
    for (int i=0;i<size;i++) {
        printf("c1[%d] value is %d\n", i, c1[i]);
    }

    printf("---- c2 value ---- ");
    char c2[5];
    for (int i=0;i<size;i++) {
        printf("c2[%d] value is %d\n", i, c2[i]);
    }

    return 0;
}