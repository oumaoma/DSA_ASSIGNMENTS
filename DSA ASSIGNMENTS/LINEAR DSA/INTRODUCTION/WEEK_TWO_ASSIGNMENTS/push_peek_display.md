# Stack Program in C

## Overview

This C program implements a stack to store names, allowing users to perform basic stack operations such as pushing, displaying the stack, and peeking at the top name. The program uses dynamic memory allocation to set the stack size based on user input.

### Features
- **Push a name**: Allows users to add a name to the stack. The program validates the name to ensure it only contains alphabetic characters and spaces.
- **Display the stack**: Displays all the names in the stack from the top to the bottom.
- **Peek at the top name**: Displays the name currently at the top of the stack without removing it.
- **Exit**: Terminates the program.

## Key Concepts Used

1. **Stack Implementation**:
    - A stack is implemented using an array of character arrays.
    - The `top` variable tracks the index of the current top element in the stack.

2. **Dynamic Stack Size**:
    - The stack size is dynamically allocated based on user input.

3. **Name Validation**:
    - Before adding a name to the stack, the program checks if the name only contains alphabetic characters and spaces.

4. **Menu Driven Program**:
    - The program presents a menu and repeatedly asks for the user's choice until the user decides to exit.

## Sample Output

![Uploading stack_.png…]()

