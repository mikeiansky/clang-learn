#include <stdio.h>

void func_01(int a, int *b){
    printf("func_001 a value is %d\n", a);
    printf("func_001 b value is %d\n", b);
    printf("func_001 a address is %d\n", &a);
    printf("func_001 b address is %d\n", b);
    a = 20;
    *b = 30;
}

int main() {

    int a = 3;
    int b = 7;

    printf("a value is %d\n", a);
    printf("b value is %d\n", b);
    printf("a address is %d\n", &a);
    printf("b address is %d\n", &b);

    func_01(a, &b);

    printf("a value is %d\n", a);
    printf("b value is %d\n", b);
    printf("a address is %d\n", &a);
    printf("b address is %d\n", &b);

    return 0;
}