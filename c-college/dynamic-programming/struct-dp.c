#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    float gpa;
};

int main() {
    struct Student *students = (struct Student *)malloc(5 * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    for (int i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);
        scanf("%s %d %f", students[i].name, &students[i].age, &students[i].gpa);
    }
    printf("\nStudent Details:\n");
    for (int i = 0; i < 5; i++) {
        printf("Name: %s, Age: %d, GPA: %.2f\n", students[i].name, students[i].age, students[i].gpa);
    }
    free(students);
    return 0;
}
