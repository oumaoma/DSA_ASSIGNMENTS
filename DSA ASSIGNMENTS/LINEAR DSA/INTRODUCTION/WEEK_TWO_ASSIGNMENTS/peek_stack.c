#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int maxSize;
    
    printf("Enter the maximum stack size: ");
    scanf("%d", &maxSize);
    getchar();  // Consume newline left in buffer
    
    if (maxSize <= 0) {
        printf("Invalid stack size! Must be greater than zero.\n");
        return 1;
    }
    
    char **stack = (char **)malloc(maxSize * sizeof(char *));
    if (!stack) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    for (int i = 0; i < maxSize; i++) {
        stack[i] = (char *)malloc(50 * sizeof(char));
        if (!stack[i]) {
            printf("Memory allocation failed!\n");
            return 1;
        }
    }
    
    int top = -1;
    char name[50];
    int choice;
    
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
                fgets(name, sizeof(name), stdin);
                name[strcspn(name, "\n")] = '\0'; // Remove newline character
                top++;
                strncpy(stack[top], name, 49);
                stack[top][49] = '\0'; // Ensure null termination
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
            for (int i = 0; i < maxSize; i++) {
                free(stack[i]);
            }
            free(stack);
            return 0;
        } else {
            printf("Invalid choice! Try again.\n");
        }
    }
}
