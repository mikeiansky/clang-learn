#include <stdio.h>

typedef void(*FP)(int);
typedef FP (*FFFF)(int, FP);

void inner(int i){
    printf("inner value is %d\n", i);
}

FP outer(int i, FP fi){
    printf("out value is %d\n", i);
    i = i + 4;
    fi(i);
    return fi;
}


int main(){

    FFFF fo = outer;
    FP fi = inner;
    fo(25, fi);

    return 0;
}