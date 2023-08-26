#include <stdio.h>
#include <stdlib.h>

int main() {

    int *ptr = NULL;
    ptr = (int *)malloc(sizeof(int));
    int count = 0;
    int num = 0;
    do {
        printf("input data: ");
        // scanf("%d" , *ptr[count]);
        scanf("%d" , &num);
        
        count++;
        ptr = (int *)realloc(ptr, sizeof(int) * count);

        ptr[count-1] = num;
    } while (ptr[count-1] != 0);

    printf("input value is \n");
    for (int i=0;i<count;i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr);

    return 0;

}