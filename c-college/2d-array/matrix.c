#include <stdio.h>

void addition(int num,int arr1[num][num],int arr2[num][num]){

    for(int i = 0;i<num;i++){
        for(int j =0;j<num;j++){
            printf("%d ",arr1[i][j]+arr2[i][j]);
        }
        printf("\n");
    }
}

void transpose(int num,int arr1[num][num]){
    int arr3[num][num];
    for(int i = 0;i<num;i++){
        for(int j =0;j<num;j++){
            arr3[num][num]= arr1[j][i];
        }
        printf("\n");
    }
}

void multiply(int n, int A[n][n], int B[n][n]) {
    int C[n][n]; 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = 0;
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nResultant Matrix (A x B):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int num;
    printf("Enter no. of rows and column of matix");
    scanf("%d",&num);
    printf("Enter elements of matrix1");
    int arr1[num][num];
    for(int i = 0;i<num;i++){
        for(int j =0;j<num;j++){
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("Enter elements of matrix2");
    int arr2[num][num];
    for(int i = 0;i<num;i++){
        for(int j =0;j<num;j++){
            scanf("%d",&arr2[i][j]);
        }
    }

    addition(num,arr1,arr2);
    return 0;
}