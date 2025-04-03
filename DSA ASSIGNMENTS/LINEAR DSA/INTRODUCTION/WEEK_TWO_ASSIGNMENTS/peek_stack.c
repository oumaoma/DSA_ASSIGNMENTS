#include <stdio.h>
#include <string.h>
#include <ctype.h>  // For isalpha() function

#define NAME_LENGTH 30  // Length for name

int main() {
    int maxSize;

    // Loop to ensure a valid stack size is entered
    while (1) {
        printf("Enter the maximum stack size: ");
        scanf("%d", &maxSize);

        if (maxSize > 0) {
            break;  // Exit the loop if the stack size is valid
        } else {
            printf("Invalid stack size! Please enter a number greater than 0.\n");
        }
    }

    char stack[maxSize][NAME_LENGTH]; // Dynamic stack size based on user input
    int top = -1; // Stack is initially empty
    int choice;

    while (1) {
        // Menu options
        printf("\n1. Push a name\n2. Display stack\n3. Peek at top name\n4. Exit\n");

        // Input validation for the choice
        while (1) {
            printf("Enter your choice: ");
            if (scanf("%d", &choice) != 1) {
                // If input is not a valid integer
                printf("Invalid input! Please enter a valid number (1, 2, 3, or 4).\n");
                // Clear the invalid input from the buffer
                while (getchar() != '\n'); // Flush the buffer
            } else {
                // If the input is a valid number, break out of the loop
                if (choice >= 1 && choice <= 4) {
                    break;
                } else {
                    printf("Invalid choice! Please enter a valid choice (1, 2, 3, or 4).\n");
                }
            }
        }

        if (choice == 1) {
            if (top == maxSize - 1) {
                printf("Stack is full! Cannot add more names.\n");
            } else {
                // Prompt for a multi-word name (can include spaces)
                printf("Enter a name (only alphabetic characters and spaces allowed): ");
                getchar(); // Consume any remaining newline character from previous input
                fgets(stack[++top], NAME_LENGTH, stdin);

                // Remove the trailing newline character if present
                stack[top][strcspn(stack[top], "\n")] = '\0';

                // Check if the entered name is valid (contains only alphabetic characters and spaces)
                int isValid = 1;
                for (int i = 0; stack[top][i] != '\0'; i++) {
                    if (!(isalpha(stack[top][i]) || stack[top][i] == ' ')) {
                        isValid = 0;  // Invalid string (contains non-alphabet characters or invalid spaces)
                        break;
                    }
                }

                if (isValid) {
                    printf("Added: %s\n", stack[top]);
                } else {
                    printf("Invalid name! Please enter only alphabetic characters and spaces.\n");
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
            if (top == -1) {
                printf("Stack is empty! Nothing to peek at.\n");
            } else {
                printf("Top name: %s\n", stack[top]); // Peek at the top element
            }
        } else if (choice == 4) {
            printf("Exiting...\n");
            return 0;
        }
    }
}
