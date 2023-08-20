#include <stdio.h>


/**
 * 数组指针 与 指针数组 的区别
*/
int main(){

    // 定义一个数组
    int data[5] = {11, 22, 33, 44, 55};
    printf("---------- data ----------\n");
    printf("data value is %d\n", data);
    printf("&data value is %d\n", &data);
    printf("sizeof(data) value is %d\n", sizeof(data));    
    printf("data + 1 value is %d\n", data + 1);
    printf("&data + 1 value is %d\n", &data + 1);

    // 这个是数组指针，是指向数组的指针
    printf("---------- int (*p)[5] ----------\n");
    int (*p)[5] = &data;
    printf("p value is %d\n", p);
    printf("&p value is %d\n", &p);
    printf("sizeof(p) value is %d\n", sizeof(p));
    printf("sizeof(*p) value is %d\n", sizeof(*p));
    printf("*p value is %d\n", *p);
    printf("*p+1 value is %d\n", *p+1);
    printf("*(p+1) value is %d\n", *(p+1));
    printf("(*p) value is %d\n", (*p)[0]);
    printf("*(*p+1) value is %d\n", *(*p+1));

    // 以下这个是指针数组，是数组，数组里面的元素是指针
    printf("---------- int *p[5] ----------\n");
    int a1 = 33;
    int a2 = 44;
    int a3 = 55;
    int a4 = 66;
    int a5 = 77;
    int *aa[5] = {&a1, &a2, &a3, &a4, &a5};
    printf("aa value is %d\n", aa);    
    printf("&aa value is %d\n", &aa);
    printf("sizeof(aa) value is %d\n", sizeof(aa));
    printf("sizeof(*aa) value is %d\n", sizeof(*aa));
    printf("sizeof(**aa) value is %d\n", sizeof(**aa));
    printf("**aa value is %d\n", **aa);
    printf("*aa value is %d\n", *aa);
    printf("*aa+1 value is %d\n", *aa+1);
    // printf("*(*aa+1) value is %d\n", *(*aa+1));
    printf("&aa[0] value is %d\n", &aa[0]);
    printf("&aa[1] value is %d\n", &aa[1]);
    printf("*&aa[1] value is %d\n", *&aa[1]);
    printf("**&aa[1] value is %d\n", **&aa[1]);
    printf("aa[1] value is %d\n", aa[1]);
    printf("*(aa+1) value is %d\n", *(aa+1));
    printf("aa+1 value is %d\n", aa+1);
    printf("**(aa+1) value is %d\n", **(aa+1));
    printf("a2 value is %d\n", a2);
    printf("&a2 value is %d\n", &a2);




    return 0;
}