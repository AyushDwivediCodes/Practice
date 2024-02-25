#include <stdio.h>

// Defining a nested structure for Date of Birth (DoB)
struct DateOfBirth {
    int day;
    int month;
    int year;
};

// Defining the outer structure for student
struct Student {
    int roll_no;
    char name[50];
    float fees;
    struct DateOfBirth dob; // Nested structure for Date of Birth
};

int main() {
    // Declaring a structure variable for a student
    struct Student student;

    // To input information for the student
    printf("Enter details for the student:\n");
    printf("Roll No.: ");
    scanf("%d", &student.roll_no);

    printf("Name: ");
    scanf("%s", student.name); // Assuming no spaces in the name for simplicity

    printf("Fees: ");
    scanf("%f", &student.fees);

    printf("Enter Date of Birth (DD MM YYYY): ");
    scanf("%d %d %d", &student.dob.day, &student.dob.month, &student.dob.year);

    // Displaying information for the student
    printf("\nDisplaying Information for the Student:\n");
    printf("Roll No.: %d\n", student.roll_no);
    printf("Name: %s\n", student.name);
    printf("Fees: %.2f\n", student.fees);
    printf("DoB: %02d-%02d-%d\n", student.dob.day, student.dob.month, student.dob.year);

    return 0;
}
