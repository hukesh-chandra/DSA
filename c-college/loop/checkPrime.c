#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n==2) {printf("Given number is Prime\n"); return 0;}
    if (n<2 || n%2==0) {printf("Given number is not Prime\n"); return 0;}

    for(int i = 2;i<sqrt(n);i++){
        if(n%i==0){
            printf("Given number is not Prime\n");
            return 0;
        }
    }
    printf("Given number is Prime\n");
    return 0;
}