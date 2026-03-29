#include <stdio.h>
#include <string.h>

int main(){
    char str1[100];
    char str2[50];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    // Concatenate str2 to str1
    char str3[150];
    int j = 0;
    int i = 0;
    // Copy str1 to str3
    while(str1[i] != '\0'){
        str3[i] = str1[i];
        i++;
    }
    while(str2[j] != '\0'){
        str3[i] = str2[j];
        i++;
        j++;
    }
    str3[i] = '\0'; // Null-terminate the concatenated string
    printf("Concatenated String: %s\n", str3);
    return 0;
}