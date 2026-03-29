#include <stdio.h>

int main() {
    int num1, num2, num3;
    num1 = (num2 = 4, num3 = num2 +5); 
    printf("num1: %d, num2: %d, num3: %d\n", num1, num2, num3);
    return 0;
}