#include <stdio.h>

int main() {
    char name[15];
    int age;
    char studentId[11];
    printf("Enter student's first name only: "); 
    scanf("%s", name);
    printf("Enter student age: ");
    scanf("%d", &age);
    printf("Enter student ID: ");
    scanf("%s", studentId);
    printf("\nStudent Information:\n");
    printf("Name: %s\n", name); 
    printf("Age: %d\n", age);
    printf("Student ID: %s\n", studentId);
    return 0;
}
