#include <stdio.h>


int main() {

    int data[4] = {11,22,33,44};

    int *pd = data;

    printf("data value is %d\n", data);
    printf("*pd value before++ is %d\n", *pd);
    printf("*pd++ value is %d\n", *pd++);
    printf("*pd value after++ is %d\n", *pd);

    int i = 2;
    printf("i value is %d\n", i);
    printf("i++ value is %d\n", i++);
    printf("i value is %d\n", i);
    printf("++i value is %d\n", ++i);
    printf("i value after ++i is %d\n", i);


    return 0;
}