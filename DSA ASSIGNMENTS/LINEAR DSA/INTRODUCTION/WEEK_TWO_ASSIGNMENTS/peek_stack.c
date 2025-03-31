#include <stdio.h>

#define MAX_SIZE 100 // Define a fixed maximum size for the stack
#define NAME_LENGTH 50

int main() {
    int maxSize;
    char stack[MAX_SIZE][NAME_LENGTH]; // Fixed-size 2D array to store names
    int top = -1; // Stack is initially empty
    char name[NAME_LENGTH];
    int choice;

    printf("Enter the maximum stack size (<= %d): ", MAX_SIZE);
    scanf("%d", &maxSize);
    getchar();  // Consume newline left in buffer

    if (maxSize <= 0 || maxSize > MAX_SIZE) {
        printf("Invalid stack size! Must be between 1 and %d.\n", MAX_SIZE);
        return 1;
    }

    while (1) {
        printf("\n1. Push a friend's name\n2. Display stack\n3. Peek at top\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();  // Consume newline left in buffer

        if (choice == 1) {
            if (top == maxSize - 1) {
                printf("Stack is full! Cannot add more names.\n");
            } else {
                printf("Enter a friend's name: ");
                scanf("%s", stack[++top]);
                printf("Added: %s\n", stack[top]);
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
                printf("Stack is empty! Nothing to peek.\n");
            } else {
                printf("Top element: %s\n", stack[top]);
            }
        } else if (choice == 4) {
            printf("Exiting...\n");
            return 0;
        } else {
            printf("Invalid choice! Try again.\n");
        }
    }
}
