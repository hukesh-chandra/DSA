#include <stdio.h>

int main() {
    int a = 5;  // 0101 in binary
    int b = 3;  // 0011 in binary
    printf("a = %d, b = %d\n", a, b);
    printf("bitwise and (&): %d\n", a & b);  // 0001 in binary, which is 1
    printf("bitwise or (|): %d\n", a | b);   // 0111 in binary, which is 7
    printf("bitwise xor (^): %d\n", a ^ b);  // 0110 in binary, which is 6
    printf("bitwise not (~a): %d\n", ~a);    // 1111...1010 in binary, which is -6 in two's complement
    printf("left shift (a << 1): %d\n", a << 1); // 1010 in binary, which is 10
    printf("right shift (a >> 1): %d\n", a >> 1); // 0010 in binary, which is 2
    return 0;
}