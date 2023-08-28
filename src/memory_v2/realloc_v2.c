#include <stdio.h>
#include <stdlib.h>

int main() {

    int *ptr = NULL;

    int count = 0;
    int num = 0;

    do{
        count++;
        printf("intput value: ");
        scanf("%d", &num);
        ptr = (int *) realloc(ptr, sizeof(int) * count);
        ptr[count-1] = num;
    } while(num !=0 );

    for(int i=0;i<count;i++){
        printf("value[%d] is %d\n", i, ptr[i]);
    }

    return 0;
}