#include <stdio.h>
#include <math.h>

int countDigits(int n)
{
    if (n == 0) return 1;
    return (int)(log10(n) + 1);
}

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main(){
    int num;
    printf("Enter number you want to check: ");
    scanf("%d",&num);
    int og = num;
    int sum = 0;
    int digit = countDigits(num);
    while(og>0){
        int d = og%10;
        sum+=power(d,digit);
        og/=10;
    }
    if(num==sum){
        printf("Given number is Armstrong\n");
    }else{
        printf("Given number is not Armstrong\n");
    }
    return 0;
}