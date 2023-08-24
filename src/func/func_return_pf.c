#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int calc(int a, int b, int (*pf)(int,int)) {
    return (*pf)(a, b);
}

int (* select(char op)) (int, int) {
    switch(op) {
        case '+':
            return sum;
        case '-':
            return sub;
        default:
            return NULL;
    }
}



int main(){

    char op = '-';
    int (*of) (int, int) = select(op);

    int result = calc(2, 3, of);

    printf("result is %d\n", result);

    return 0;
}