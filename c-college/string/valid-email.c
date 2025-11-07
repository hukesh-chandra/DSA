#include <stdio.h>
#include <string.h>

int main(){
    char email[100];
    int at_position = -1;
    int dot_position = -1;
    printf("Enter an email address: ");
    gets(email);
    // Validate email
    for(int i = 0; email[i] != '\0'; i++){
        if(email[i] == '_' || email[i] == '.' || (email[i] >= 'a' && email[i] <= 'z') || (email[i] >= 'A' && email[i] <= 'Z') || (email[i] >= '0' && email[i] <= '9')){
            continue;
        }
        else if(email[i] == '@'){
            at_position = i;
            break;
        
        }   
         else{
            printf("Invalid email: invalid character '%c'.\n", email[i]);
            return 0;
            }
    }
    if(at_position == -1){
        printf("Invalid email: missing '@' symbol.\n");
        return 0;
    }
    for(int i = at_position + 1; email[i] != '\0'; i++){
        if(email[i] == '.'){
            dot_position = i;
            break;
        }
    }

    if(dot_position == -1 || (strcmp(&email[dot_position], ".com") != 0 && strcmp(&email[dot_position], ".org") != 0 && strcmp(&email[dot_position], ".net") != 0)){
        printf("Invalid email: incorrect domain name.\n");
        return 0;
    }
    printf("Valid email address.\n");
    return 0;
}