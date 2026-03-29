#include <stdio.h>

int main(){
    int num1 = 9,num2 =8,num3=7;
    int largest;
    if(num1>=num2){
        if(num1>=num3){
            largest = num1;
        }else{
            largest =num3;
        }
    }else{
        if(num2>=num3){
            largest = num2;
        }else{
            largest =num3;
        }
    }
    
    
    printf("Largest of num1: %d,num2: %d and num3: %d is %d",num1,num2,num3,largest);
    return 0;
}