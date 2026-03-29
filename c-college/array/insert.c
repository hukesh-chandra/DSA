#include <stdio.h>

int main(){
    int num;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &num);
    int arr[num+1];
    printf("Enter the elements of the array: ");
    for(int i=0; i<num; i++){
        scanf("%d", &arr[i]);
    }

    callAgain:;
    int pos, val;
    printf("Enter the position to insert the element: ");
    scanf("%d", &pos);
    if(pos < 1 || pos > num){
        printf("Invalid position!\n");
        goto callAgain;
    }
    printf("Enter the value to insert: ");
    scanf("%d", &val);
    
    for(int i=num; i>=pos; i--){
        arr[i] = arr[i-1];
    }
    arr[pos-1] = val;
    num++;
    printf("Array after insertion: ");
    for(int i=0; i<num; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}