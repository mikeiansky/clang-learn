#include <stdio.h>


int main(){

    int temp = 52;
    int num = 37;
    // 指向常量的指针，指针可以修改，指针所指向的值不可被修改
    const int *p = &num;

    printf("num value is %d\n", num);
    printf("*p value is %d\n", *p);
    printf("p value is %d\n", p);
    // *p = 33; // error

    p = &temp;

    // 指针常量，常量修饰的是指针，指针不可被修改，指针所指向的值可被修改
    int *const q = &num;
    printf("num value is %d\n", num);
    printf("*q value is %d\n", *q);
    printf("q value is %d\n", q);
    *q = 33;
    // q = &temp; // error

    // 指向常量的指针常量，指针和指针所指向的值都不可被修改
    const int *const r = &num;
    printf("num value is %d\n", num);
    printf("*r value is %d\n", *r);
    printf("r value is %d\n", r);
    // *r = 33; // error
    // r = &temp; // error

    return 0;
}