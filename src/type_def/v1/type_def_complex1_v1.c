#include <stdio.h>

typedef int(*nc)(int,int);

int sum(int a,int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

nc select(char op){
    switch (op)
    {
    case '-':        
        return sub;
    default:
        return sum;
    }
}

int compute(int a, int b, nc nc){
    return nc(a,b);
}

int main(){

    int a = 23;
    int b = 67;

    int result = compute(a, b, select('-'));

    printf("compute result %d\n", result);

    return 0;
}