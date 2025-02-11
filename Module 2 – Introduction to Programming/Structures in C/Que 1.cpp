#include <stdio.h>

// Define structure for student
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student students[3];  // Array of 3 students
    int i;

    // Accept student details
    for (i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Enter Name: ");
        scanf("%s", students[i].name);
        printf("Enter Roll Number: ");
        scanf("%d", &students[i].roll);
        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);
        printf("\n");
    }

    // Print student details
    printf("Student Details:\n");
    for (i = 0; i < 3; i++) {
        printf("Name: %s, Roll: %d, Marks: %.2f\n", students[i].name, students[i].roll, students[i].marks);
    }

    return 0;
}

