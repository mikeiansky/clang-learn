#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    printf("str base app start ... \n");

    int size = 10;
    char c1[10] = "mike";
    char *c2 = (char *)calloc(size, sizeof(char));

    strcpy(c2, c1);
    printf("c2 value is %s\n", c2);

    return 0;
}