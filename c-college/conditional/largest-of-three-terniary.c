#include <stdio.h>

int main(){
    int num1 = 9,num2 =10,num3=11;
    int largest = num1>=num2 ? num1>=num3 ? num1 : num3 : num2>=num3 ? num2 : num3;
    
    
    printf("Largest of num1: %d,num2: %d and num3: %d is %d",num1,num2,num3,largest);
    return 0;
}