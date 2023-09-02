#include <stdio.h>
#include <string.h>

union UO {
    char title[10];
    int price;    
};

int main(){

    union UO u1;
    printf("uo size is %d\n", sizeof(u1));
    strcpy(u1.title, "clang");
    printf("uo title value is %s\n", u1.title);
    u1.price = -1;
    printf("uo price value is %d\n", u1.price);
    printf("uo title value is %s\n", u1.title);

    return 0;
}