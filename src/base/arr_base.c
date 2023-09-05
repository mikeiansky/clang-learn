#include <stdio.h>
#include <string.h>

int main() {

    char title[20];

    strcpy(title, "test");

    printf("title length %d\n", sizeof(title));

    int size = sizeof(title);

    char *t2 = title;    

    printf("title value is %s\n", title);
    printf("t2 value is %s\n", t2);
    printf("sizeof(t2) value is %d\n", sizeof(t2));
    printf("strlen(t2) value is %d\n", strlen(t2));
    
    // printf("sizeof(t2) value is %s\n", sizeof(t2));

    for (int i=0;i<size;i++) {
        printf("title[i] value %d\n", title[i]);
    }

    printf("end char value is %d\n", '\0');

    return 0;
}