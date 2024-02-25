#include <stdio.h>

// Defining a structure
struct Student {
    int roll_no;
    char name[50];
};

// Function to modify the structure using Call by Value
void modifyStudentByValue(struct Student s) {
    s.roll_no = 999; // Modify roll_no locally
}

// Function to modify the structure using Call by Reference
void modifyStudentByReference(struct Student *s) {
    s->roll_no = 999; // Modify roll_no directly in the original structure
}

int main() {
    // Declaring and initializing a student structure
    struct Student student = {123, "Ravi"};

    // To display the original roll_no
    printf("Original Roll No.: %d\n", student.roll_no);

    // Call function with Call by Value
    modifyStudentByValue(student);

    // To display the roll_no after Call by Value
    printf("Roll No. after Call by Value: %d\n", student.roll_no);

    // Calling function with Call by Reference
    modifyStudentByReference(&student);

    // Displaying the roll_no after Call by Reference
    printf("Roll No. after Call by Reference: %d\n", student.roll_no);

    return 0;
}