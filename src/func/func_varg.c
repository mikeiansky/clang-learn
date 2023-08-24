#include <stdio.h>
#include <stdarg.h>

int func(int n, ...) {

    va_list vl;
    va_start(vl, n);
    printf("n value is %d\n", n);

    for (int i=0;i<n;i++) {
        printf("var value is %d\n", va_arg(vl, int));
    }

    va_end(vl);

}

/**
 * 可变参数
*/
int main() {
    func(4, 45, 66, 77, 88);

    return 0;
}