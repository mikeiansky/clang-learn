#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <error.h>

/**
 * 文件字节流读写
*/
int main(){
    FILE *file = fopen("byte.md", "w+");
    if (file == NULL) {
        int errornu = errno;
        printf("open file code : %d , error msg %s \n", errornu, strerror(errornu));
        exit(EXIT_FAILURE);
    }
    printf("open file success \n");

    int count = 100;
    char *ws = (char *)calloc(count, sizeof(char));
    printf("please input write content\n");
    scanf("%s", ws);
    printf("input value is %s\n", ws);
    fwrite(ws, sizeof(char), count, file);

    fclose(file);

    file = fopen("byte.md", "r+");
    if (file == NULL) {
        int errornu = errno;
        printf("open file code : %d , error msg %s \n", errornu, strerror(errornu));
        exit(EXIT_FAILURE);
    }
    printf("open file success \n");
    // 从文件结尾指针跳过0个字节
    fseek(file, 0, SEEK_END);
    printf("file size %d\n", ftell(file));

    // 从开头指针跳过0个字节
    fseek(file, 0, SEEK_SET);
    // 从当前指针跳过4个字节
    // fseek(file, 3, SEEK_CUR);
    char *rs = (char *)calloc(count, sizeof(char));
    fread(rs, sizeof(char), count, file);

    printf("read file content value is %s\n", rs);

    fclose(file);
    return 0;
}