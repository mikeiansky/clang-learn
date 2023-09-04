#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

struct Book {
    char title[100];
    char *author;
    int price;
};

int main() {
    struct Book book;

    strcpy(book.title, "clang");
    book.author = strdup("kk and jj");
    book.price = 27;

    printf("book.title : %s\n", book.title);
    printf("book.author : %s\n", book.author);
    printf("book.price : %d\n", book.price);

    // 写文件阶段
    FILE *file = fopen("BOOK-With-point.md", "w+");
    if (file == NULL) {
        int errornum = errno;
        printf("open file error code: %d, msg: %s\n", errornum, strerror(errornum));
        exit(EXIT_FAILURE);
    }

    fwrite(book.title, sizeof(book.title), 1, file);
    fwrite(book.author, strlen(book.author) + 1, 1, file);
    fwrite(&book.price, sizeof(book.price), 1, file);
    fclose(file);

    // 读文件阶段
    file = fopen("BOOK-With-point.md", "r");
    if (file == NULL) {
        int errornum = errno;
        printf("open file error code: %d, msg: %s\n", errornum, strerror(errornum));
        exit(EXIT_FAILURE);
    }

    struct Book *rb = (struct Book *)calloc(1, sizeof(struct Book));
    printf("ready read book with point file\n");

    fread(rb->title, sizeof(rb->title), 1, file);
    rb->author = (char *)malloc(100); // 假设最大长度为100
    fread(rb->author, 100, 1, file);
    fread(&rb->price, sizeof(rb->price), 1, file);

    printf("rbook.title : %s\n", rb->title);
    printf("rbook.author : %s\n", rb->author);
    printf("rbook.price : %d\n", rb->price);

    fclose(file);

    free(rb->author);
    free(rb);

    return 0;
}
