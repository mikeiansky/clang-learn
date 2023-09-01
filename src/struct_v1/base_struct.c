#include <stdio.h>

struct Book
{
    char title[4];
    int price;
} book;


int main() {

    // struct Book book;

    printf("struct base v1\n");

    printf("size of struct book %d\n", sizeof(book));

    printf("book price %d\n", book.price);

    printf("book title %s\n", book.title);

    struct Book b22;

    return 0;
}

