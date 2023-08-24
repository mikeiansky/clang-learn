#include <stdio.h>

void func_01(int data[], int size) {
    printf("---------- func_01 ----------\n");
    printf("func_01 data value is %d\n", data);
    // printf("func_01 data size is %d\n", sizeof(data));
    for (int i=0;i<size;i++) {
        printf("func_01 data[%d] value is %d\n", i, data[i]);
    }
}

void func_02(int *data, int size) {
    printf("---------- func_02 ----------\n");
    printf("func_02 data value is %d\n", data);
    for (int i=0;i<size;i++) {
        // printf("data[%d] value is %d\n", i, data[i]);
        printf("func_02 data[%d] value is %d\n", i, *(data+i));
    }
}

void func_03(int data[5], int size) {
    printf("---------- func_03 ----------\n");
    printf("func_03 data value is %d\n", data);
    printf("func_03 data size is %d\n", sizeof(data));
    for (int i=0;i<size;i++) {
        printf("func_03 data[%d] value is %d\n", i, data[i]);
    }
}

int main() {
    int dd[] = {11,22,33,44,55};
    printf("main dd value is %d\n", dd);
    func_01(dd, sizeof(dd)/sizeof(int));
    func_02(dd, sizeof(dd)/sizeof(int));   
    func_03(dd, sizeof(dd)/sizeof(int));   
    return 0;
}