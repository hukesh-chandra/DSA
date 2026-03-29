#include <stdio.h>
#include <string.h>

int main(){
    char str1[100];
    printf("Enter a string: ");
    gets(str1);
    // Convert to uppercase
    for(int i = 0; str1[i] != '\0'; i++){
        if(str1[i] >= 'a' && str1[i] <= 'z'){
            str1[i] = str1[i] - ('a' - 'A');
        }
    }
    printf("Uppercase String: %s\n", str1);
    
    return 0;
}