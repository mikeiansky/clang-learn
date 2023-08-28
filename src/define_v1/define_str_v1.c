#include <stdio.h>

#define PRINT(arg) # arg

int main() {

    printf("PRINT v1 is %s\n", PRINT(Hello World));

    printf("PRINT v2 is %s\n", PRINT(AA       BB));

    return 0;
}