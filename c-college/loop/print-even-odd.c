#include <stdio.h>

int main() {
    int start, end;
    printf("Enter starting number: ");
    scanf("%d", &start);
    printf("Enter last number: ");
    scanf("%d", &end);
    printf("Even numbers between %d and %d are:", start, end);
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }printf("\n");
    printf("Odd numbers between %d and %d are:", start, end);
    for (int i = start; i <= end; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    return 0;
}