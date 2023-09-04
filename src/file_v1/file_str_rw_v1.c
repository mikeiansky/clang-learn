#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <error.h>

/**
 * 文件字符串读写
*/
int main(){
    
    // 写文件阶段
    FILE *file = fopen("README.md", "a+");
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

    // 读文件阶段
    file = fopen("README.md", "a+");
    if (file == NULL) {
        int errornum = errno;        
        printf("open file error code : %d, msg : %s\n", errornum, strerror(errornum));
        exit(EXIT_FAILURE);
    }

    int count_small = 10;
    int count_big = 1024;
    char *rc_small = calloc(count_small, sizeof(char));
    char *rc_big = calloc(count_big, sizeof(char));
    fgets(rc_small, count_small, file);
    printf("read content1 is %s\n", rc_small);
    // 碰到换行符也就是\n就会截止，而不会继续读取
    char *cs = fgets(rc_big, count_big, file);    

    // 这里会读到并且保存换行，所以在结尾不需要换行，否则就有两个换行
    printf("read content2 is %s\n", rc_big);
    printf("read content2 cs value is %s\n", cs);

    int line = 0;
    while ((cs = fgets(rc_big, count_big, file)) != NULL)
    {
        printf("read line %d, value is %s\n", line, cs);
        line++;
    }
    printf("file read complete !\n");

    fclose(file);
    return 0;
}