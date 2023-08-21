#include <stdio.h>


int main(){

    char *books[4] = {
        "Java00",
        "python",
        "mysql0",
        "php000"
    };

    // char *pb = &books;
    // printf("pb value is %d\n" , pb);
    printf("books value is %d\n" , books);
    printf("sizeof(books) value is %d\n" , sizeof(books));
    printf("books+1 value is %d\n" , books+1);
    printf("*books value is %s\n" , *books);
    printf("*(books+1) value is %s\n" , *(books+1));    
    printf("sizeof(&books) value is %d\n" , sizeof(&books));
    printf("&books value is %d\n" , &books);
    printf("&books+1 value is %d\n" , &books+1);

    char **pb = books;
    printf("pb value is %d\n", pb);
    printf("pb+1 value is %d\n", pb+1);
    printf("sizeof(pb) value is %d\n", sizeof(pb));
    printf("*pb value is %d\n", *pb);
    printf("*pb value is %s\n", *pb);

    char **sb = &books[0];
    printf("sb value is %d\n",sb);
    printf("&books[0] value is %d\n", &books[0]);
    printf("*sb value is %d\n",*sb);
    printf("**sb value is %d\n",**sb);



    return 0;
}
