#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello, ";
    char str2[] = "World!";
    
    // Concatenate str2 to str1
    strcat(str1, str2);
    printf("Concatenated String: %s\n", str1);
    
    // Find length of the concatenated string
    size_t len = strlen(str1);
    printf("Length of Concatenated String: %zu\n", len);
    
    // Copy str1 to another string
    char str3[50];
    strcpy(str3, str1);
    printf("Copied String: %s\n", str3);

    // Compare str1 and str3
    int cmp = strcmp(str1, str3);
    if (cmp == 0) {
        printf("str1 and str3 are equal.\n");
    } else {
        printf("str1 and str3 are not equal.\n");
    }

    // reverse str1
    strrev(str1);
    printf("Reversed String: %s\n", str1);
    
    
    return 0;
}