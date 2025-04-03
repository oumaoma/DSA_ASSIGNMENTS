#include <stdio.h>
#include <string.h>
#include <ctype.h>  // For isalpha() function

#define NAME_LENGTH 30  // Increase length to accommodate longer names

int main() {
    int maxSize;

    while (1) {
        printf("Enter the maximum stack size: ");
        scanf("%d", &maxSize);

        if (maxSize > 0) {
            break;  // Exit the loop if the stack size is valid
        }
        else{
            printf("Invalid stack size!\n");
        }
    }

    char stack[maxSize][NAME_LENGTH]; // Dynamic stack size based on user input
    int top = -1; // Stack is initially empty
    char name[NAME_LENGTH];
    int choice;

    while (1) {
        printf("\n1. Push a name\n2. Display stack\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);


        if (choice == 1) {
            if (top == maxSize - 1) {
                printf("Stack is full! Cannot add more names.\n");
            } else {
                printf("Enter a name (only letters allowed, no spaces): ");
                fgets(stack[++top], NAME_LENGTH, stdin);

                // Remove the trailing newline character if present
                stack[top][strcspn(stack[top], "\n")] = '\0';

                // Check if the entered name is valid (contains only alphabetic characters)
                int isValid = 1;
                for (int i = 0; stack[top][i] != '\0'; i++) {
                    if (!isalpha(stack[top][i])) {
                        isValid = 0;  // Invalid string (contains non-alphabet characters or spaces)
                        break;
                    }
                }

                if (isValid) {
                    printf("Added: %s\n", stack[top]);
                } else {
                    printf("Invalid name! Please enter only alphabetic characters (no spaces).\n");
                    top--;  // Roll back the stack to not add an invalid name
                }
            }
        } else if (choice == 2) {
            if (top == -1) {
                printf("Stack is empty!\n");
            } else {
                printf("Current Stack:\n");
                for (int i = top; i >= 0; i--) {
                    printf("%s\n", stack[i]);
                }
            }
        } else if (choice == 3) {
            printf("Exiting...\n");
            return 0;
        } else {
            printf("Invalid choice! Try again.\n");
        }
    }
}
