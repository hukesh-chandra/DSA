#include <stdio.h>

char main(){
    int n=0;
    int a,b;
    while(n<10){
        printf("Hello, World!\n");
         a = n++;
         b= ++n;
    }
    printf("%d %d ", a , b);
    return '0';
}