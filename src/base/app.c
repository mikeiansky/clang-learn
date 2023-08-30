#include <stdio.h>
#include "other.h"
#include "sub/sub_hello.h"


int main(){
    printf("app run start 66 \n");

    hello_other();

    sub_hello();

    printf("app run complete 44 \n");

    return 0;
}