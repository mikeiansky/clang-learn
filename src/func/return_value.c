#include <stdio.h>

int func_01() {
    int a = 20;
    printf("func_01 a address is %d\n", &a);
    return a;
}

int func_02() {
    static int b = 30;
    printf("func_02 b address is %d\n", &b);
    return b;
}

// func_03 编译会有些问题
int* func_03() {
    // int c = 67; // 返回局部变量的地址会有问题，编译器会警报
    static int c = 34;
    printf("func_03 c value is %d\n", c);
    printf("func_03 c address is %d\n", &c);
    return &c;
}

int main() {

    int a = func_01();
    printf("main a address value is %d\n", &a);    
    printf("main a value is %d\n", a);

    int b = func_02();
    printf("main b address1 is %d\n", &b);
    b = func_02();
    printf("main b address2 is %d\n", &b);

    int *c = func_03();
    printf("main c address is %d\n", c);
    *c = 56;
    c = func_03();

    return 0;
}