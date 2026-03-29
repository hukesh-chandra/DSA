#include <stdio.h>

int main() {
    int length, breadth;
    printf("Enter length and breadth: ");
    scanf("%d %d", &length, &breadth);
    int area = length * breadth;
    int perimeter = 2 * (length + breadth);
    printf("Area: %d\n", area);
    printf("Perimeter: %d\n", perimeter);
    return 0;
}