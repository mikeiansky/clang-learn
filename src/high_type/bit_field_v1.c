#include <stdio.h>

struct BF1
{
    unsigned pu:1;
    unsigned int st:2;
};


int main(){

    struct BF1 bf;
    bf.pu = 1;
    bf.st = 2;

    printf("sizeof bf value is %d\n", sizeof(bf));
    printf("bf pu value is %d\n", bf.pu);
    printf("bf st value is %d\n", bf.st);

    return 0;
}