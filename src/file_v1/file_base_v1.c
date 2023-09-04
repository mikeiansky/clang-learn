#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *file = fopen("RREADME.md", "r+");

    if (file == NULL) {
        printf("open file error");
        exit(EXIT_FAILURE);
    }

    printf("open file success");

    fclose(file);

    return 0;
}