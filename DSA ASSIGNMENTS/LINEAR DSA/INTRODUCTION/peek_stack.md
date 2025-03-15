///Algorithm to peek freind from the stack

Step1:START
Step2:Define a structure 'Stack' with:
-'names[MAX][50]' to store names.
-'top' to track the index of the top element, initialized to -1.
Step3:Define a function 'initialize(Stack \*s)' to initialize the stack:
Set s->top = -1.

Step4:Define a function 'isFull(Stack \*s)' to check if the stack is full:
Return TRUE if s->top == MAX - 1, else return FALSE.
Step5:Define a function 'isEmpty(Stack \*s)' to check if the stack is empty:
Return TRUE if s->top == -1, else return FALSE.
Step6:Define a function 'push(Stack \*s, char name[])' to push a name onto the stack:
-If stack is full (isFull(s) == TRUE), print "Stack is full! Cannot add more names."
-Otherwise: - Increment s->top. - Store the name in s->names[s->top]. - Print "Added: <name>."
Step7:Define a function 'display(Stack \*s)' to display the stack elements:
-If the stack is empty (isEmpty(s) == TRUE), print "Stack is empty!"
-Otherwise, print all names from top to bottom by iterating through s->names from s->top to 0.
Step8:Define a function 'peek(Stack\*s)' to pick element at the top:
-If the stack is empty (isEmpty(s) == TRUE), print "Stack is empty! Nothing to peek"
-Otherwise,print the top element on the stack the name at `names[top]`
Step9:Start an infinite loop:
Display menu options:
*1. Push a friend's name
*2. Display the stack
*3. Peek at the top element
*4. Exit the program

Step10 :Read the user's choice.
-If choice == 1: - If stack is full (isFull(s) == TRUE), print "Stack is full! Cannot add more names." - Otherwise, ask for a name, remove newline character using strcspn. - Push the name onto the stack using the 'push()' function.
If choice == 2: - Display the stack using the 'display()' function.
If choice == 3: - Print the name at `names[top]`of the stack using the 'peek()' function.
If choice == 4: - Print "Exiting..." and exit the program.
step11:End the program when user chooses to exit.
