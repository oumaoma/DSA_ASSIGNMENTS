#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define NAME_LENGTH 50

int main() {
    int maxSize;
    
    printf("Enter the maximum stack size: ");
    scanf("%d", &maxSize);
    getchar();  // Consume newline left in buffer

    if (maxSize <= 0) {
        printf("Invalid stack size! Must be greater than zero.\n");
        return 1;
    }

    char stack[maxSize][NAME_LENGTH]; // Dynamic stack size based on user input
    int top = -1; // Stack is initially empty
    char name[NAME_LENGTH];
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
                scanf("%s", name);
                int valid = 1;
                for (int i = 0; name[i] != '\0'; i++) {
                    if (!isalpha(name[i])) {
                        valid = 0;
                        break;
                    }
                }
                if (valid) {
                    strcpy(stack[++top], name);
                    printf("Added: %s\n", stack[top]);
                } else {
                    printf("Invalid name! Only alphabets are allowed.\n");
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
