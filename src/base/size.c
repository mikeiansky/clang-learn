#include <stdio.h>


int main() {

    int data[] = {11,22,33,44,55};

    int *pd = data;

    printf("sizeof data %d\n", sizeof(data));
    printf("sizeof pd %d\n", sizeof(pd));
    printf("data value is %d\n", data);
    printf("pd value is %d\n", pd);
    printf("data+1 value is %d\n", data+1);
    printf("pd+1 value is %d\n", pd+1);

    return 0;
}