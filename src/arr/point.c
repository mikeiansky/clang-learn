#include <stdio.h>


int main(){

    int a = 20;
    int *pa = &a;

    printf("sizeof(a) value %d\n", sizeof(a));
    printf("sizeof(pa) value %d\n", sizeof(pa));
    printf("sizeof(*pa) value %d\n", sizeof(*pa));

    return 0;
}