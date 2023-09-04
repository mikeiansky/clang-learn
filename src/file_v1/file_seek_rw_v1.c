#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <error.h>

/**
 * 文件字符串读写
*/
int main(){
    
    // 写文件阶段
    FILE *file = fopen("README.md", "w+");
    if (file == NULL) {
        int errornum = errno;        
        printf("open file error code : %d, msg : %s\n", errornum, strerror(errornum));
        exit(EXIT_FAILURE);
    }

    fputs("this is first write content\n", file);
    fputs("this is second line\n", file);
    fputs("this is thrid line\n", file);
    fputs("this is last line", file);

    fclose(file);


    // 写文件阶段
    file = fopen("README.md", "r+");
    if (file == NULL) {
        int errornum = errno;        
        printf("open file error code : %d, msg : %s\n", errornum, strerror(errornum));
        exit(EXIT_FAILURE);
    }

    // 从文件开头指针跳过3个字节
    fseek(file, 3, SEEK_SET);
    // 从文件当前指针跳过5个字节
    // fseek(file, 5, SEEK_CUR);
    // 从文件结尾跳过0个字节
    // fseek(file, 0, SEEK_END);

    int count_small = 10;    
    char *rc_small = calloc(count_small, sizeof(char));
    // int count_big = 1024;
    // char *rc_big = calloc(count_big, sizeof(char));
    char *cs = fgets(rc_small, count_small, file);
    printf("read content value is %s\n", rc_small);

    fclose(file);

}