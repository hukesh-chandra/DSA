#include <stdio.h>


int main(){
    int num;
    printf("Enter number of elements: ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter %d integers: ",num);
    for(int i = 0;i<num;i++){
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for(int i = 0;i<num;i++){
        sum += arr[i];
    }
    printf("Sum = %d", sum);
    return 0;
}