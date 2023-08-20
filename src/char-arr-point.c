#include <stdio.h>


/**
 * 字符指针数组
*/
int main(){

    char *books[4] = {
        "java",
        "python",
        "c++",
        "mysql"
    };

    printf("books value %d\n", books);
    // 首地址里面的内容
    printf("*books value %d\n", *books);
    printf("books[0] value %d\n", books[0]);
    printf("&book[0] value %d\n", &books[0]);
    // 第二个地址里面的内容
    printf("*books+1 value %d\n", *(books+1));
    printf("&book[1] value %d\n", &books[1]);
    printf("books[0] value %d\n", books[1]);
    for (int i=0;i<4;i++){
        printf("books[%d] value is %s\n", i, books[i]);
    }

    return 0;
}