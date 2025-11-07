#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student students[5];

    for(int i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\nStudent With Highest Marks:\n");
    struct Student topStudent = students[0];
    for(int i = 1; i < 5; i++) {
        if(students[i].marks > topStudent.marks) {
            topStudent = students[i];
        }
    }
    printf("Name: %s, Age: %d, Marks: %.2f\n", topStudent.name, topStudent.age, topStudent.marks);

    return 0;
}