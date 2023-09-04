#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <error.h>

struct Book {
    char title[100];
    char author[32];
    int price;
};

/**
 * 用文件读写结构体，结构体里面不带有指针
*/
int main(){
    struct Book book;

    strcpy(book.title ,"clang");
    strcpy(book.author ,"kk and jj");
    book.price = 27;

    printf("book.title : %s\n", book.title);
    printf("book.author : %s\n", book.author);
    printf("book.price : %d\n", book.price);

    // 写文件阶段
    FILE *file = fopen("BOOK-No-point.md", "w+");
    if (file == NULL) {
        int errornum = errno;        
        printf("open file error code : %d, msg : %s\n", errornum, strerror(errornum));
        exit(EXIT_FAILURE);
    }

    fwrite(&book, sizeof(book), 1, file);
    fclose(file);

    // 写文件阶段
    file = fopen("BOOK-No-point.md", "r+");
    if (file == NULL) {
        int errornum = errno;        
        printf("open file error code : %d, msg : %s\n", errornum, strerror(errornum));
        exit(EXIT_FAILURE);
    }

    struct Book *rb = (struct Book *)calloc(1, sizeof(struct Book));
    printf("ready read book no point file \n");
    fread(rb, sizeof(struct Book), 1, file);

    printf("rbook.title : %s\n", rb->title);
    printf("rbook.author : %s\n", rb->author);
    printf("rbook.price : %d\n", rb->price);

    fclose(file);
    

    return 0;
}