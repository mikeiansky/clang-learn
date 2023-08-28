#include <stdio.h>

#define PRINT(...) printf(__VA_ARGS__)

int main() {

    PRINT("Hello-v1 World\n");
    PRINT("Hello-v2 %s\n", "World2");

    return 0;
}