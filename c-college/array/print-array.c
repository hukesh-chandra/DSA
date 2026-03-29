#include <stdio.h>

int main(){
    int num;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter the elements of the array: ");
    for(int i=0; i<num; i++){
        scanf("%d", &arr[i]);
    }

    printf("The elements of the array are: ");
    for(int i=0; i<num; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}