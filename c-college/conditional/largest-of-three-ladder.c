#include <stdio.h>

int main(){
    int num1,num2,num3;
    printf("Enter three numbers to find the largest among them: ");
    scanf("%d %d %d",&num1,&num2,&num3);
    int largest;
    if(num1>=num2 && num1>=num3){
        largest=num1;
    }else if(num2>=num3){
        largest=num2;
    }else{
        largest =num3;
    }
    printf("Largest of  %d, %d and %d is %d",num1,num2,num3,largest);
    return 0;
}