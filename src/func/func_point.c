#include <stdio.h>

int sum(int a, int b){
    return a + b ;
}

int sub(int a, int *b, int c){
    return a + *b - c;
}

int* convert(int a, int* b) {
    int c = a + *b;
    *b = c;
    return b;
}

int main() {

    int (*p) (int,int ) = sum;
    int v = p(2, 7);
    printf("sum value is %d\n", v);

    int (*p2) (int,int *,int) = sub;
    int b = 8;
    int v2 = p2(2, &b, v);
    printf("sub value is %d\n", v2);

    int* (*p3)(int,int*) = convert;
    int *v3 = p3(2, &b);
    printf("convert value is %d\n", *v3);
    printf("b value is %d\n", b);

    return 0;
}