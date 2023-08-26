#include <stdio.h>
#include <stdlib.h>

int main() {

    int *ptr = NULL;
    ptr = (int *)malloc(sizeof(int));
    int count = 0;
    do {
        printf("input data[%d]: ", count);
        scanf("%d" , &ptr[count]);
        
        count++;
        ptr = (int *)realloc(ptr, sizeof(int) * count);

        printf("input value[%d] is %d\n", count-1, ptr[count-1]);

        if (ptr == NULL) {
            printf("exit\n");
            exit(1);
        }
    } while (ptr[count-1] != 0 && count > 0);

    printf("input value is \n");
    for (int i=0;i<count;i++) {
        printf("data[%d], value is %d\n", i, ptr[i]);
    }

    free(ptr);
    return 0;

}