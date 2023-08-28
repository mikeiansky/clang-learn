#include <stdio.h>

#define PI 3.141592

int main() {

    printf("PI is %f\n", PI * 34);

    #undef PI

    // printf("PI is %f\n", PI); // error

    return 0;
}