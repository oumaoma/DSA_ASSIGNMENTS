//// Algorithm to push a friend to the stack/////

Step1:START

Step2:Define a structure 'Stack' with:
-'names[MAX][50]' to store names.
-'top' to track the index of the top element, initialized to -1.

Step3:Define a function 'initialize(Stack *s)' to initialize the stack:
-Set s->top = -1.

Step4:Define a function 'isFull(Stack *s)' to check if the stack is full:
-Return TRUE if s->top == MAX - 1, else return FALSE.

Step5:Define a function 'isEmpty(Stack *s)' to check if the stack is empty:
-Return TRUE if s->top == -1, else return FALSE.

Step6:Define a function 'push(Stack *s, char name[])' to push a name onto the stack:
-If stack is full (isFull(s) == TRUE), print "Stack is full! Cannot add more names."
-Otherwise: - Increment s->top. - Store the name in s->names[s->top]. - Print "Added: <name>."

Step7:Define a function 'display(Stack \*s)' to display the current stack:
-If the stack is empty (isEmpty(s) == TRUE), print "Stack is empty!"
-Otherwise, print all names from top to bottom by iterating through s->names from s->top to 0.

Step8:In the main loop:
-Display the menu: - "1. Push a friend's name" - "2. Display stack" - "3. Exit"
-Get user's choice.

Step9:Process the choice:
-If choice == 1:
-If stack is full (isFull(s) == TRUE), print "Stack is full! Cannot add more names." 
- Otherwise, ask for a name, remove newline character using strcspn. - Push the name onto the stack using the 'push()' function.
 - If choice == 2: - Display the stack using the 'display()' function. - If choice == 3: - Print "Exiting..." and exit the program.
   
step10:End the program when user chooses to exit.
