#include <stdio.h>
#include <math.h>
#include <limits.h>

int min(int a,int b){
    if(a>b){
        return b;
    }
    return a;
}

int max(int a,int b){
    if(a>b){
        return a;
    }
    return b;
}

void minmax(int num,int arr[]){
    int mini=INT_MAX,maxi=INT_MIN;
    for(int i = 0;i<num;i++){
        mini = min(mini,arr[i]);
        maxi = max(maxi,arr[i]);
    }
    printf("min = %d\nmax = %d", mini,maxi);
}
int main(){
    int num;
    printf("Enter number of elements: ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter %d integers: ",num);
    for(int i = 0;i<num;i++){
        scanf("%d", &arr[i]);
    }

    minmax(num,arr);
    return 0;
}