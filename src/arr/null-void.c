#include <stdio.h>


int main(){
    int a = 20;

    void *pa = &a;

    printf("pa value is %p\n", pa);
    printf("(int *)pa value is %p\n", (int *)pa);
    printf("*(int *)pa value is %d\n", *(int *)pa);

    int *pb = NULL;
    
    printf("pb value is %p\n", pb);
    pb = &a;
    printf("pb value is %p\n", pb);
    printf("*pb value is %d\n", *pb);

    return 0;
}