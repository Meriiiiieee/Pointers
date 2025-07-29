#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int *ptr1 = &a;
    int *ptr2 = &b;

    int sum = *ptr1 + *ptr2;
    printf("Sum is %d\n", sum);

    if (*ptr1>*ptr2){
       int diff = *ptr1 - *ptr2;
        printf("Diff is%d\n", diff);
    } else {
        int diff = *ptr2 - *ptr1; 
        printf("Diff is %d\n", diff);
      }
 
    

    return 0;
}
