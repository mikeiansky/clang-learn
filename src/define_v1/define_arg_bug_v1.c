#include <stdio.h>

#define BUG_SAUQRE(x) x * x

#define RIGHT_SQUARE(x) ((x) * (x))

int main() {

    int num = 5;

    printf("BUG_SAUQRE is %d\n", BUG_SAUQRE(num + 1)); // 5 + 1 * 5 + 1 = 11
    printf("RIGHT_SQUARE is %d\n", RIGHT_SQUARE(num + 1)); // (5 + 1) * (5 + 1) = 36

    return 0;
}