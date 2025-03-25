#include<stdio.h>

int main() {
    // Array to store marks for each subject in assignments, coursework, midterm, and end of term
    int physics[4], chemistry[4], math[4];
    // Getting the average for each subject
    float physics_avg, chemistry_avg, math_avg;
    float total_avg;

    // Student's marks in Physics
    printf("Enter student's marks for Physics:\n");
    do {
        printf("Assignment: ");
        scanf("%d", &physics[0]);
        if (physics[0] < 0 || physics[0] > 100) {
            printf("Invalid input! Marks must be between 0 and 100. Please try again.\n");
        }
    } while (physics[0] < 0 || physics[0] > 100);

    do {
        printf("Coursework: ");
        scanf("%d", &physics[1]);
        if (physics[1] < 0 || physics[1] > 100) {
            printf("Invalid input! Marks must be between 0 and 100. Please try again.\n");
        }
    } while (physics[1] < 0 || physics[1] > 100);

    do {
        printf("Midterm: ");
        scanf("%d", &physics[2]);
        if (physics[2] < 0 || physics[2] > 100) {
            printf("Invalid input! Marks must be between 0 and 100. Please try again.\n");
        }
    } while (physics[2] < 0 || physics[2] > 100);

    do {
        printf("End of term: ");
        scanf("%d", &physics[3]);
        if (physics[3] < 0 || physics[3] > 100) {
            printf("Invalid input! Marks must be between 0 and 100. Please try again.\n");
        }
    } while (physics[3] < 0 || physics[3] > 100);

    physics_avg = (physics[0] + physics[1] + physics[2] + physics[3]) / 4.0;

    // Student's marks in Chemistry
    printf("Enter student's marks for Chemistry:\n");
    do {
        printf("Assignment: ");
        scanf("%d", &chemistry[0]);
        if (chemistry[0] < 0 || chemistry[0] > 100) {
            printf("Invalid input! Marks must be between 0 and 100. Please try again.\n");
        }
    } while (chemistry[0] < 0 || chemistry[0] > 100);

    do {
        printf("Coursework: ");
        scanf("%d", &chemistry[1]);
        if (chemistry[1] < 0 || chemistry[1] > 100) {
            printf("Invalid input! Marks must be between 0 and 100. Please try again.\n");
        }
    } while (chemistry[1] < 0 || chemistry[1] > 100);

    do {
        printf("Midterm: ");
        scanf("%d", &chemistry[2]);
        if (chemistry[2] < 0 || chemistry[2] > 100) {
            printf("Invalid input! Marks must be between 0 and 100. Please try again.\n");
        }
    } while (chemistry[2] < 0 || chemistry[2] > 100);

    do {
        printf("End of term: ");
        scanf("%d", &chemistry[3]);
        if (chemistry[3] < 0 || chemistry[3] > 100) {
            printf("Invalid input! Marks must be between 0 and 100. Please try again.\n");
        }
    } while (chemistry[3] < 0 || chemistry[3] > 100);

    chemistry_avg = (chemistry[0] + chemistry[1] + chemistry[2] + chemistry[3]) / 4.0;

    // Student's marks in Math
    printf("Enter student's marks for Math:\n");
    do {
        printf("Assignment: ");
        scanf("%d", &math[0]);
        if (math[0] < 0 || math[0] > 100) {
            printf("Invalid input! Marks must be between 0 and 100. Please try again.\n");
        }
    } while (math[0] < 0 || math[0] > 100);

    do {
        printf("Coursework: ");
        scanf("%d", &math[1]);
        if (math[1] < 0 || math[1] > 100) {
            printf("Invalid input! Marks must be between 0 and 100. Please try again.\n");
        }
    } while (math[1] < 0 || math[1] > 100);

    do {
        printf("Midterm: ");
        scanf("%d", &math[2]);
        if (math[2] < 0 || math[2] > 100) {
            printf("Invalid input! Marks must be between 0 and 100. Please try again.\n");
        }
    } while (math[2] < 0 || math[2] > 100);

    do {
        printf("End of term: ");
        scanf("%d", &math[3]);
        if (math[3] < 0 || math[3] > 100) {
            printf("Invalid input! Marks must be between 0 and 100. Please try again.\n");
        }
    } while (math[3] < 0 || math[3] > 100);

    math_avg = (math[0] + math[1] + math[2] + math[3]) / 4.0;

    // Calculating the total average marks for all the subjects
    total_avg = (physics_avg + chemistry_avg + math_avg) / 3.0;

    // Displaying the average marks in each subject
    printf("\nThe average marks for Physics: %.2f\n", physics_avg);
    printf("The average marks for Chemistry: %.2f\n", chemistry_avg);
    printf("The average marks for Math: %.2f\n", math_avg);
    printf("Total average for all 3 subjects is: %.2f\n", total_avg);

    return 0;
}

