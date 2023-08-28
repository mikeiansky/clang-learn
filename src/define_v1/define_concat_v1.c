#include <stdio.h>

#define STRINGIFY(x) #x
#define CONCAT(x, y) STRINGIFY(x ## y)

int main() {

    printf("CONCAT is %s\n", CONCAT(test, 2023));
    
    return 0;
}
