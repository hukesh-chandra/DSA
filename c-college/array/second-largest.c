#include <stdio.h>

int main(){
    int num;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &num);
    if(num < 2){
        printf("Array should have at least two elements to find the second largest element.\n");
        return -1;
    }
    int arr[num];
    printf("Enter the elements of the array: ");
    for(int i=0; i<num; i++){
        scanf("%d", &arr[i]);
    }

    int maximum, second_maximum;
    (arr[0] > arr[1]) ? (maximum = arr[0], second_maximum = arr[1]) : (maximum = arr[1], second_maximum = arr[0]);

    for(int i=2; i<num; i++){
        if(arr[i] > maximum){
            second_maximum = maximum;
            maximum = arr[i];
        }
        else if(arr[i] > second_maximum && arr[i] != maximum){
            second_maximum = arr[i];
        }
    }

    if(maximum == second_maximum){
        printf("There is no second largest element as all elements are the same.\n");
    } else {
        printf("The second largest element is: %d\n", second_maximum);
    }

    return 0;
}