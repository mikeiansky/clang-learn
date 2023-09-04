#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <error.h>

struct Book {
    char title[100];
    char *author;
    int price;
};

/**
 * 用文件读写结构体，结构体里面不带有指针
*/
int main(){
    printf("app start ... 1\n");
    struct Book book;
    strcpy(book.title ,"clang");
    book.author = calloc(32, sizeof(char));
    strcpy(book.author ,"kk and jj");
    book.price = 27;
    printf("book.title : %s\n", book.title);
    printf("book.author : %s\n", book.author);
    printf("book.price : %d\n", book.price);

    // 写文件阶段
    FILE *file = fopen("BOOK-With-point-002.md", "w+");
    if (file == NULL) {
        int errornum = errno;        
        printf("open file error code : %d, msg : %s\n", errornum, strerror(errornum));
        exit(EXIT_FAILURE);
    }
    printf("ready write struct \n");
    // 分开写
    int author_length = strlen(book.author) + 1;
    fwrite(book.title, sizeof(book.title), 1, file);
    fwrite(book.author, author_length, 1, file);
    fwrite(&book.price, sizeof(book.price), 1, file);
    fflush(file);
    fclose(file);

    printf("complete write struct \n");

    // 写文件阶段
    file = fopen("BOOK-With-point-002.md", "r+");
    if (file == NULL) {
        int errornum = errno;        
        printf("open file error code : %d, msg : %s\n", errornum, strerror(errornum));
        exit(EXIT_FAILURE);
    }

    struct Book *rb = (struct Book *)calloc(1, sizeof(struct Book));
    printf("ready read book no point file \n");

    fread(rb->title, sizeof(rb->title), 1, file);
    rb->author = calloc(author_length, sizeof(char));
    fread(rb->author, author_length, 1, file);
    fread(&rb->price, sizeof(rb->price), 1, file);

    printf("rbook.title : %s\n", rb->title);
    printf("rbook.author : %s\n", rb->author);
    printf("rbook.price : %d\n", rb->price);

    fclose(file);
    

    return 0;
}