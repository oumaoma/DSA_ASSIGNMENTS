# **#Description**

This program is designed to calculate the average marks for a student in three subjects: Physics, Chemistry, and Math. The user is prompted to input the student's marks for each of the following categories: Assignment, Coursework, Midterm, and End of Term. The program then computes the average marks for each subject and the overall average across the three subjects.

## **#Features**

Takes input for marks in four categories (Assignment, Coursework, Midterm, End of Term) for each of the three subjects (Physics, Chemistry, Math).
Calculates the average marks for each subject.
Computes the total average for all three subjects combined.
Outputs the average marks for each subject and the overall average.
How It Works
The program uses three arrays (physics[4], chemistry[4], math[4]) to store the marks for each subject in the four categories: Assignment, Coursework, Midterm, and End of Term.
The program prompts the user to input the marks for each subject in these four categories.
The program computes the average for each subject by summing the four marks and dividing by 4.
It then calculates the total average for all three subjects by averaging the individual subject averages.
**Finally, the program displays the average marks for each subject and the total average.
#Code Explanation
#Variable Declarations:**

int physics[4], chemistry[4], math[4];: Arrays to store marks for each subject.
float physics_avg = 0, chemistry_avg = 0, math_avg = 0;: Variables to store average marks for each subject.
float total_avg;: Variable to store the total average of all subjects.
Input:

For each subject (Physics, Chemistry, Math), the program prompts the user to enter marks for Assignment, Coursework, Midterm, and End of Term.
**Average Calculation:**

The program uses a loop to sum the marks for each subject and then divides by 4 to calculate the average for that subject.
**Total Average Calculation:**

After calculating the average for each subject, the program calculates the overall total average by averaging the three subject averages.
#Output:

The program prints the average marks for each subject and the total average.
**#Example**
yaml
Copy
**Enter student's marks for Physics:**
Assignment: 85
Coursework: 90
midterm: 88
Endof term: 92

**Enter student's marks for Chemistry:**
Assignment: 78
Coursework: 85
midterm: 80
Endof term: 89

**Enter student's marks for Math:**
Assignment: 90
Coursework: 92
midterm: 85
Endof term: 88

The average marks for physics: 88.75
The average marks for chemistry: 82.00
The average marks for math: 88.75
Total average for all the 3 subjects is: 86.50
Requirements
C Compiler: A C language compiler (e.g., GCC) is needed to compile and run this program.
How to Run
Copy the code into a .c file, e.g., student_marks.c.

