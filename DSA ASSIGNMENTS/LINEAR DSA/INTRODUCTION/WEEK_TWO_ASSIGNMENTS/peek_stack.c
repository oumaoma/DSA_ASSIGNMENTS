#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char **names;  // Dynamic array to hold names
    int top;
    int max;       // Maximum stack size
} Stack;

// Function to initialize stack with user-defined max size
void initialize(Stack *s, int maxSize) {
    s->max = maxSize;
    s->top = -1;
    s->names = (char **)malloc(maxSize * sizeof(char *));
    for (int i = 0; i < maxSize; i++) {
        s->names[i] = (char *)malloc(50 * sizeof(char)); // Allocate space for names
    }
}

// Function to check if the stack is full
int isFull(Stack *s) {
    return s->top == s->max - 1;
}

// Function to check if the stack is empty
int isEmpty(Stack *s) {
    return s->top == -1;
}

// Function to push a name onto the stack
void push(Stack *s, char name[]) {
    if (isFull(s)) {
        printf("Stack is full! Cannot add more names.\n");
        return;
    }
    s->top++;
    strcpy(s->names[s->top], name);
    printf("Added: %s\n", name);
}

// Function to display stack elements
void display(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty!\n");
        return;
    }
    printf("Current Stack:\n");
    for (int i = s->top; i >= 0; i--) {
        printf("%s\n", s->names[i]);
    }
}

// Function to peek at the top element
void peek(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty! Nothing to peek.\n");
        return;
    }
    printf("Top element: %s\n", s->names[s->top]);
}

// Function to free allocated memory
void freeStack(Stack *s) {
    for (int i = 0; i < s->max; i++) {
        free(s->names[i]);
    }
    free(s->names);
}

int main() {
    Stack myStack;
    int maxSize;
    
    printf("Enter the maximum stack size: ");
    scanf("%d", &maxSize);
    getchar();  // Consume newline left in buffer
    
    initialize(&myStack, maxSize);
    
    char name[50];
    int choice;
    
    while (1) {
        printf("\n1. Push a friend's name\n2. Display stack\n3. Peek at top\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();  // Consume newline left in buffer

        switch (choice) {
            case 1:
                if (isFull(&myStack)) {
                    printf("Stack is full! Cannot add more names.\n");
                } else {
                    printf("Enter a friend's name: ");
                    fgets(name, sizeof(name), stdin);
                    name[strcspn(name, "\n")] = '\0'; // Remove newline character
                    push(&myStack, name);
                }
                break;
            case 2:
                display(&myStack);
                break;
            case 3:
                peek(&myStack);
                break;
            case 4:
                printf("Exiting...\n");
                freeStack(&myStack);
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
