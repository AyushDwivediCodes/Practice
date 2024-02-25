#include <stdio.h>

// Defining a nested structure for Distance
struct Distance {
    int kms;
    int meters;
};

// Function to read distance from the user
void readDistance(struct Distance *d) {
    printf("Enter distance in kilometers: ");
    scanf("%d", &d->kms);
    printf("Enter distance in meters: ");
    scanf("%d", &d->meters);
}

// Function to display distance
void displayDistance(const char *label, const struct Distance *d) {
    printf("%s: %d kms %d meters\n", label, d->kms, d->meters);
}

// Function to add two distances
void addDistances(const struct Distance *d1, const struct Distance *d2, struct Distance *result) {
    result->kms = d1->kms + d2->kms;
    result->meters = d1->meters + d2->meters;

    // Adjusting if meters exceed 1000
    result->kms += result->meters / 1000;
    result->meters %= 1000;
}

// Function to subtract two distances
void subtractDistances(const struct Distance *d1, const struct Distance *d2, struct Distance *result) {
    result->kms = d1->kms - d2->kms;
    result->meters = d1->meters - d2->meters;

    // Adjust if meters are negative
    if (result->meters < 0) {
        result->kms--;
        result->meters += 1000;
    }
}

int main() {
    struct Distance distance1, distance2, result;
    int choice;

    do {
        // Display menu
        printf("\nDistance Operations Menu:\n");
        printf("1. Read the distances\n");
        printf("2. Display the distances\n");
        printf("3. Add the distances\n");
        printf("4. Subtract the distances\n");
        printf("5. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                readDistance(&distance1);
                readDistance(&distance2);
                break;
            case 2:
                displayDistance("Distance 1", &distance1);
                displayDistance("Distance 2", &distance2);
                break;
            case 3:
                addDistances(&distance1, &distance2, &result);
                displayDistance("Sum of Distances", &result);
                break;
            case 4:
                subtractDistances(&distance1, &distance2, &result);
                displayDistance("Difference of Distances", &result);
                break;
            case 5:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 5);

    return 0;
}


