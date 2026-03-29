#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int lastDigit, firstDigit;
    lastDigit = num % 10;
    while(num>=10){
        num/=10;
        firstDigit = num%10;
    }
    printf("First digit is: %d\n Last digit is: %d\n", firstDigit, lastDigit);
    return 0;
}