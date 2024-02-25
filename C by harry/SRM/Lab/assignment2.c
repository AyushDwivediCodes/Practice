#include <stdio.h>

// Define the structure for student
struct Student {
    int Roll_no;
    char name[50];
    float fees;
    char dob[15]; 
};

int main() {
    // Declaring an array of structures to store information about 5 students
    struct Student students[5];

    // Input information for each student
    for (int i = 0; i < 5; ++i) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Roll No.: ");
        scanf("%d", &students[i].Roll_no);

        printf("Name: ");
        scanf("%s", students[i].name); 

        printf("Fees: ");
        scanf("%f", &students[i].fees);

        printf("DoB: ");
        scanf("%s", students[i].dob);
        printf("\n");
    }

    // To display information for each student
    printf("\nDisplaying Information for 5 Students:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Student %d:\n", i + 1);
        printf("Roll No.: %d\n", students[i].Roll_no);
        printf("Name: %s\n", students[i].name);
        printf("Fees: %.2f\n", students[i].fees);
        printf("DoB: %s\n\n", students[i].dob);
    }

    return 0;
}
