#include <stdio.h>

int main() {
    int a = 5;
    float b = 1.5;
    char c = 'A';

    int *ptr1 = &a;
    float *ptr2 = &b;
    char *ptr3 = &c;

    printf("%p\n", ptr1);
    printf("%p\n", ptr2);
    printf("%p\n", ptr3);

    return 0;
}
