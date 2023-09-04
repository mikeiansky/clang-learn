#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main() {

    FILE *file = fopen("tttt.tt", "r");
    printf("after open\n");

    if (file == NULL) {
        int errornum = errno;
        printf("file open error\n");
        printf("error num value is %d\n", errornum);
        printf("error info msg is : %s\n", strerror(errornum));
        exit(EXIT_FAILURE);
    }

    printf("file open success!\n");

    fclose(file);

    return 0;
}