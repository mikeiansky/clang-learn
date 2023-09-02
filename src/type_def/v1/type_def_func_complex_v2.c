#include <stdio.h>

typedef int (* MF) (int, int);

int sum(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

MF select(char op) {
    switch (op)
    {
    case '-':
        return sub;    
    default:
        return sum;
    }
}

int compute(MF mf, int a, int b){
    return mf(a, b);
}

int main(){

    int a = 39;
    int b = 25;
    int r = compute(select('+'), a, b);
    printf("result value is %d\n", r);

    return 0;
}