#include <stdio.h>


int main() {

    int data[4] = {11,22,33,44};

    printf("data value is %d\n", data);
    printf("&data value is %d\n", &data);
    printf("sizeof(data) value is %d\n", sizeof(data));
    printf("data+1 value is %d\n", data+1);
    printf("*(data+1) value is %d\n", *(data+1));

    return 0;
}