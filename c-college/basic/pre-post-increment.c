#include <stdio.h>

int main() {
    int num1 =5;
    printf("Initial value of num1: %d\n", num1);
    printf("Value after post-increment (num1++): %d\n", num1++);
    printf("Value of num1 after post-increment operation: %d\n", num1);
    printf("Value after pre-increment (++num1): %d\n", ++num1);
    printf("Value of num1 after pre-increment operation: %d\n", num1);
    return 0;
}