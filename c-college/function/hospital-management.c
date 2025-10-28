#include <stdio.h>
#include <string.h>

void addPatient(char patients[][50], int *patientCount, char doctors[][50], char disease[][50], int age[]) {
    if (*patientCount < 100 ) {
        printf("Enter patient name: ");
        scanf("%s", patients[*patientCount]);
        (*patientCount)++;
        printf("Enter doctor name: ");
        scanf("%s", doctors[*patientCount - 1]);
        printf("Enter disease: ");
        scanf("%s", disease[*patientCount - 1]);
        printf("Enter age: ");
        scanf("%d", &age[*patientCount - 1]);
        printf("Patient %s added successfully.\n", patients[*patientCount - 1]);

    } else {
        printf("Patient list is full.\n");
    }
}

void searchPatient(char patients[][50], int patientCount) {
    char name[50];
    printf("Enter patient name to search: ");
    scanf("%s", name);
    for (int i = 0; i < patientCount; i++) {
        if (strcmp(patients[i], name) == 0) {
            printf("Patient found: %s\n", patients[i]);
            return;
        }
    }
    printf("Patient not found.\n");
}


void displayPatients(char patients[][50], int patientCount, char doctors[][50], char disease[][50], int age[]) {
    if (patientCount == 0) {
        printf("No patients to display.\n");
        return;
    }
    printf("List of Patients:\n");
    for (int i = 0; i < patientCount; i++) {
        printf("Name: %s, Doctor: %s, Disease: %s, Age: %d\n", patients[i], doctors[i], disease[i], age[i]);
    }
}

void dischargePatient(char patients[][50], int *patientCount, char doctors[][50], char disease[][50], int age[]) {
    char name[50];
    printf("Enter patient name to discharge: ");
    scanf("%s", name);
    for (int i = 0; i < *patientCount; i++) {
        if (strcmp(patients[i], name) == 0) {
            printf("Discharging patient: %s\n", patients[i]);
            for (int j = i; j < *patientCount - 1; j++) {
                strcpy(patients[j], patients[j + 1]);
                strcpy(doctors[j], doctors[j + 1]);
                strcpy(disease[j], disease[j + 1]);
                age[j] = age[j + 1];
            }
            (*patientCount)--;
            return;
        }
    }
    printf("Patient not found.\n");
}

int main(){
    printf("Welcome to the Hospital Management System\n");
    int patientCount = 0;
    char patients[100][50];
    char doctors[100][50];
    char disease[100][50];
    int age[100];

    while(1){
        printf("\n1. Add Patient\n");
        printf("2. Search Patient\n");
        printf("3. Display Patients\n");
        printf("4. Discharge Patient\n");
        printf("5. Exit\n");
        printf("Choose an option: ");
        
        int choice;
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                addPatient(patients, &patientCount, doctors, disease, age);
                break;
            case 2:
                searchPatient(patients, patientCount);
                break;
            case 3:
                displayPatients(patients, patientCount, doctors, disease, age);
                break;
            case 4:
                dischargePatient(patients, &patientCount, doctors, disease, age);
                break;
            case 5:
                printf("Exiting the system.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    
    return 0;
}