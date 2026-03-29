#include <stdio.h>

int main() {
    int num;
    printf("Enter no. till which you want to print natural numbers: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) {
        printf("%d ", i);
    }
    return 0;
}