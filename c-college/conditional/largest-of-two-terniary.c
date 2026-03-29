#include <stdio.h>

int main(){
    int num1,num2;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    int greater = num1>num2 ? num1 : num2 ;
    printf("Greater of %d and %d is %d",num1,num2,greater);
    return 0;
}