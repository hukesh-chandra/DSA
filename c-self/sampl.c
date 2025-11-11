#include <stdio.h>
//arithmetic operations on string 
int main(){
    char *ch;
    int length;
    printf("Enter the length of the string: ");
    scanf("%d", &length);
    ch = (char *)malloc((length + 1) * sizeof(char));
    printf("Enter the string: ");
    scanf("%s", ch);
    printf("You entered: %s\n", ch);
    char a = ch[0] + 3;
    printf("After adding 3 to first character: %c\n", a);
    free(ch);
    return 0;

}