#include <stdio.h>

int main() {
    // Declare variables for the marks of each subject and test
    float physics[4], chemistry[4], math[4];
    float physicsAvg, chemistryAvg, mathAvg;
    float totalAvg;

    // Input marks for Physics
    printf("Enter marks for Physics (Assignment, Coursework, Midterm, End-term):\n");
    for (int i = 0; i < 4; i++) {
        printf("Test %d: ", i + 1);
        scanf("%f", &physics[i]);
    }

    // Input marks for Chemistry
    printf("Enter marks for Chemistry (Assignment, Coursework, Midterm, End-term):\n");
    for (int i = 0; i < 4; i++) {
        printf("Test %d: ", i + 1);
        scanf("%f", &chemistry[i]);
    }

    // Input marks for Math
    printf("Enter marks for Math (Assignment, Coursework, Midterm, End-term):\n");
    for (int i = 0; i < 4; i++) {
        printf("Test %d: ", i + 1);
        scanf("%f", &math[i]);
    }

    // Calculate average marks for each subject
    physicsAvg = (physics[0] + physics[1] + physics[2] + physics[3]) / 4;
    chemistryAvg = (chemistry[0] + chemistry[1] + chemistry[2] + chemistry[3]) / 4;
    mathAvg = (math[0] + math[1] + math[2] + math[3]) / 4;

    // Calculate the overall average
    totalAvg = (physicsAvg + chemistryAvg + mathAvg) / 3;

    // Display the results
    printf("\n--- Results ---\n");
    printf("Physics Average: %.2f\n", physicsAvg);
    printf("Chemistry Average: %.2f\n", chemistryAvg);
    printf("Math Average: %.2f\n", mathAvg);
    printf("Overall Average: %.2f\n", totalAvg);

    return 0;
}
