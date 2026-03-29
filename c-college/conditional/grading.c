#include <stdio.h>

int main(){
    int physMark, chemMark, mathMark, BioMark, CompMark, totalMarks;
    float percentage;
    char grade;
    printf("Enter marks obtained in Physics, Chemistry, Mathematics, Biology and Computer (out of 100): ");
    scanf("%d %d %d %d %d", &physMark, &chemMark, &mathMark, &BioMark, &CompMark);
    totalMarks = physMark + chemMark + mathMark + BioMark + CompMark;
    percentage = (totalMarks / 500.0) * 100;
    if(percentage >= 90){
        grade = 'A';
    } else if(percentage >= 80){
        grade = 'B';
    } else if(percentage >= 70){
        grade = 'C';
    } else if(percentage >= 60){
        grade = 'D';
    } else if(percentage >= 40){
        grade = 'E';
    } else{
        grade = 'F';
    }
    printf("Total Marks: %d\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);
    return 0;
}