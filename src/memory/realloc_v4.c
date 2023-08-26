#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = NULL;
    int count = 0;
    int input;

    do {
        printf("input data[%d]: ", count);
        scanf("%d", &input);

        if (input == 0) {
            break; // 输入为 0，退出循环
        }

        count++;
        int *temp = (int *)realloc(ptr, sizeof(int) * count);
        if (temp == NULL) {
            printf("Failed to allocate memory.\n");
            free(ptr);
            return 1;
        }
        ptr = temp;
        ptr[count - 1] = input;

    } while (1);

    printf("input value is:\n");
    for (int i = 0; i < count; i++) {
        printf("data[%d], value is %d\n", i, ptr[i]);
    }

    free(ptr);

    return 0;
}
