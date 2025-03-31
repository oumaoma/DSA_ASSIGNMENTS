#include <stdio.h>
#include <string.h>

#define ITEM_LENGTH 50

int main() {
    int maxSize;
    
    printf("Enter the maximum stack size: ");
    scanf("%d", &maxSize);
    getchar();  // Consume newline left in buffer

    if (maxSize <= 0) {
        printf("Invalid stack size! Must be greater than zero.\n");
        return 1;
    }

    char stack[maxSize][ITEM_LENGTH]; // Dynamic stack size based on user input
    int top = -1; // Stack is initially empty
    char item[ITEM_LENGTH];
    int choice;

    while (1) {
        printf("\n1. Push an item\n2. Display stack\n3. Peek at top\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();  // Consume newline left in buffer

        if (choice == 1) {
            if (top == maxSize - 1) {
                printf("Stack is full! Cannot add more items.\n");
            } else {
                printf("Enter an item: ");
                scanf("%49s", stack[++top]);
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
