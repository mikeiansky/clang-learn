#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Book {
    char title[5];
    int price;
} book;

int main() {

    // book.title = "java";
    strcpy(book.title, "java");

    book.price = 20;

    printf("book title is %s\n", book.title);
    printf("book price is %d\n", book.price);

    struct Book *pb = &book;
    printf("*pb title is %s\n", pb->title);
    printf("*pb price is %d\n", pb->price);

    struct Book *pb2 = (struct Book *)malloc(sizeof(struct Book));
    if (pb2 != NULL) {
        strcpy(pb2->title, "python");
        pb2->price = 25;

        printf("pb2 title is %s\n", pb2->title);
        printf("pb2 price is %d\n", pb2->price);

        free(pb2);
    }

    return 0;
}