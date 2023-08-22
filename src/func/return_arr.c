#include <stdio.h>

int* func_01() {
    static int a[4] = {11,22,33,44};
    printf("a value is %d\n", a);
    return a;
}

int main() {

    int *data = func_01();

    printf("data value is %d\n", data);
    printf("*data value is %d\n", *data);
    printf("*(data+1) value is %d\n", *(data+1));

    return 0;
}