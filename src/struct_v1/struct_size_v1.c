#include <stdio.h>

struct NoPoint {
    char cc[16];  // 16
    int age;    // 4
};

struct WithPoint {
    char *cc;   // 8
    int age;    // 4
};

int main(){
    printf("size of NoPoint %d\n", sizeof(struct NoPoint));


    printf("size of WithPoint %d\n", sizeof(struct WithPoint));

    return 0;
}