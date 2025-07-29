#include <stdio.h>

int main() {
    int num = 5;
    char *first_byte = (char *)&num;

    if (*first_byte == 1) {
       printf("Little endian\n ");
    } else {
        printf("Big endian\n ");
      }
 
    return 0;
}
Picsa
