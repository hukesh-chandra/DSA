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

    callAgain:;
    int pos;
    printf("Enter the position to delete the element: ");
    scanf("%d", &pos);
    if(pos < 1 || pos > num){
        printf("Invalid position!\n");
        goto callAgain;
    }
    for(int i=pos-1; i<num-1; i++){
        arr[i] = arr[i+1];
    }
    num--;
    printf("Array after deletion: ");
    for(int i=0; i<num; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}