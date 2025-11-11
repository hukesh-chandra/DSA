#include <stdio.h>
#include <string.h>

int main() {
    char email[100];
    int at_position = -1, dot_position = -1;
    int at_count = 0;

    printf("Enter an email address: ");
    fgets(email, sizeof(email), stdin);
    email[strcspn(email, "\n")] = '\0'; // remove newline

    // Validate characters and find '@'
    for (int i = 0; email[i] != '\0'; i++) {
        char c = email[i];
        if (c == '@') {
            at_position = i;
            at_count++;
        } else if (!(c == '_' || c == '.' || 
                     (c >= 'a' && c <= 'z') || 
                     (c >= 'A' && c <= 'Z') || 
                     (c >= '0' && c <= '9'))) {
            printf("Invalid email: invalid character '%c'.\n", c);
            return 0;
        }
    }

    if (at_count != 1) {
        printf("Invalid email: must contain exactly one '@'.\n");
        return 0;
    }

    // Find the last dot after '@'
    for (int i = at_position + 1; email[i] != '\0'; i++) {
        if (email[i] == '.') dot_position = i;
    }

    if (dot_position == -1 || dot_position < at_position) {
        printf("Invalid email: missing or misplaced domain dot.\n");
        return 0;
    }

    if (strcmp(&email[dot_position], ".com") != 0 &&
        strcmp(&email[dot_position], ".org") != 0 &&
        strcmp(&email[dot_position], ".net") != 0) {
        printf("Invalid email: unsupported domain extension.\n");
        return 0;
    }

    printf("Valid email address.\n");
    return 0;
}
