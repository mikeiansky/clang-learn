#include <stdio.h>

typedef int(*MF)(int,int);

int sum(int a,int b){
    return a + b;
}

int sub(int a,int b){
    return a - b;
}

int multi(int a, int b){
    return a * b;
}

int main(){
    MF mfs[3] = {sum, sub, multi};

    int a = 5;
    int b = 3;

    printf("mfs0 result %d\n",mfs[0](a, b));
    printf("mfs1 result %d\n",mfs[1](a, b));
    printf("mfs2 result %d\n",mfs[2](a, b));

    return 0;
}