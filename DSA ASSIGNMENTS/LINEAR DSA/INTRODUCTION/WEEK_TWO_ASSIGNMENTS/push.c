#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 5  // Maximum stack size

typedef struct {
    char names[MAX][50];  // Array to hold names
    int top;
} Stack;

// Function to initialize stack
void initialize(Stack *s) {
    s->top = -1;
}

// Function to check if the stack is full
int isFull(Stack *s) {
    return s->top == MAX - 1;
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

int main() {
    Stack myStack;
    initialize(&myStack);

    char name[50];
    int choice;

    while (1) {
        printf("\n1. Push a friend's name\n2. Display stack\n3. Exit\n");
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
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
