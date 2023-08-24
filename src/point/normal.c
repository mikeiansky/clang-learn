#include <stdio.h>


int main(){

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

    for (int j=0;j<1;j++) {
        // 这里会执行吗
        printf("j index %d value is %d\n", j, data[j]);
    }

    printf("end-1 *pd value is %d\n", *pd);
    printf("--*pd value is %d\n", --*pd);
    printf("end-2 *pd value is %d\n", *pd);

    return 0;
}