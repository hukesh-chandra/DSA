#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *str;
    int length;
    printf("Enter the length of the string: ");
    scanf("%d", &length);
    str = (char *)malloc((length + 1) * sizeof(char));
    if (str == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Enter the string: ");
    scanf("%s", str);
    printf("You entered: %s\n", str);
    free(str);
    return 0;
}