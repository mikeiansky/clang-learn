#include <stdio.h>

/**
 * 输入输出流
 * 标准输入流
 * 标准输出流
 * 标准错误输出流
*/
int main(){

    char word[10];

    // 使用标准输入流接收用户输入数据
    printf("please input word :");
    scanf("%s", word);

    // 使用标准输出流将数据输出
    printf("your input word is %s\n", word);
    fprintf(stdout, "test standard output %s\n", word);

    // 使用标准错误输出流，并且重定向到控制台
    int num = 33;
    fprintf(stderr, "ouput error hidden info %d\n", num);

    // 将错误标准输出流重定向到标准输出流
    freopen("CON", "w", stderr);
    fprintf(stderr, "ouput error showing info %d\n", num);

    return 0;
}