#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    printf("Enter a string: ");
    gets(str);

    int len = 0;
    
    // Find length of the string
    while(str[len] != '\0'){
        len++;
    }
    printf("Length of the string: %d\n", len);
    
    return 0;
}