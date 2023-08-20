#include <stdio.h>


int main() {

    int data[3][4] = {
        {11, 22, 33, 44},
        {55, 66, 77, 88},
        {99, 100, 111, 122}
    };

    // 3 * 4 * 4 = 48

    printf("sizeof data is %d\n", sizeof(data));
    // 这里是第一行地址数组地址
    printf("data value is %d\n", data);
    // 这里是第二行地址
    printf("data+1 value is %d\n", data + 1);

    printf("&data value is %d\n", &data);
    printf("sizeof(*data) value is %d\n", sizeof(*data));

    printf("*(*(data+1)+3) value is %d\n", *(*(data+1)+3));
    printf("data[1][3] value is %d\n", data[1][3]);

    // 使用数组指针的方式来访问
    printf("----------------\n");

    int (*p)[4] = data;
    printf("data value is %d\n", data);
    printf("&data value is %d\n", &data);
    printf("p value is %d\n", p);
    printf("sizeof(p) value is %d\n", sizeof(p));    
    printf("sizeof(*p) value is %d\n", sizeof(*p));
    printf("*p value is %d\n", *p);
    printf("*(*p+1) value is %d\n", *(*p+1));
    printf("*(*(p+2)+3) value is %d\n", *(*(p+2)+3));

    return 0;
}
