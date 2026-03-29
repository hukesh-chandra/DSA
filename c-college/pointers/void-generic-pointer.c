#include <stdio.h>

int main(){
    int num = 42;
    char ch = 'A';
    float fnum = 3.14;
    void *vptr;
    vptr = &num;
    printf("Integer value: %d\n",*(int *)vptr);
    vptr = &ch;
    printf("Character value: %c\n",*(char *)vptr);
    vptr = &fnum;
    printf("Float value: %.2f\n",*(float *)vptr);
    return 0;
}