#include <stdio.h>
#include <stdlib.h>
#include <error.h>
#include <string.h>

/**
 * 字符读写
*/
int main(){

    FILE *file = fopen("README.md", "a+");
    if (file == NULL) {
        int errornu = errno;
        printf("open file code : %d , error msg %s \n", errornu, strerror(errornu));
        exit(EXIT_FAILURE);
    }

    printf("open file success \n");

    // 写一个字符
    fputc('m', file);
    fputc('i', file);
    fputc('k', file);
    fputc('e', file);
    fputc('\r', file);
    fputc('\n', file);

    // 强制刷磁盘
    fflush(file);
    // 关闭文件
    fclose(file);

    // 重新打开文件
    file = fopen("README.md", "a+");
    if (file == NULL) {
        int errornu = errno;
        printf("open file code : %d , error msg %s \n", errornu, strerror(errornu));
        exit(EXIT_FAILURE);
    }

    // 读一个字符，这个时候文件的内存指针在哪里
    // char c = fgetc(file);
    int c; 
    while ( (c = fgetc(file)) != EOF) {
        printf("read char %c\n", c);
    }
    
    printf("fff %d\n", c == EOF);;

    // 关闭文件
    fclose(file);
    return 0;
}