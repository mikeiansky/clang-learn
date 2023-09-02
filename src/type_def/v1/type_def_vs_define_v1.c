#include <stdio.h>

#define PT int *
typedef int * TPT;

int main(){

    int x = 27;
    int y = 91;

    PT a,b;

    a = &x;
    b = y;
    printf("pt a value is %d\n", *a);
    printf("pt b value is %d\n", b);

    TPT w,z;
    w = &x;
    z = &y;
    printf("tpt w value is %d\n", *w);
    printf("tpt z value is %d\n", *z);

    return 0;
}