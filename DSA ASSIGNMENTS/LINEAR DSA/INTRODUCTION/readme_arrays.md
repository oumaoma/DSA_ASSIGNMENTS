# **Domestic and Wild Animal List**

## **Description**

This program allows the user to input the names of 5 domestic animals and 5 wild animals. It then combines both lists into a single list of all animals and displays the total number of animals along with their names. The program efficiently handles the input, stores the animal names in separate arrays, and merges them into one list.

### **Features**

Inputs names for 5 domestic animals and 5 wild animals.
Merges the lists of domestic and wild animals into a single list.
Displays the total number of animals and prints all the animals' names.
Code Explanation

### **1. Variable Declarations:**

   domestic_animals[5][50]: Array to store the names of 5 domestic animals.
   wild_animals[5][50]: Array to store the names of 5 wild animals.
   all_animals[10][50]: Array to store a combined list of all 10 animals (5 domestic + 5 wild).
   wild_cont: An integer to keep track of the count of wild animals.
   total_count: An integer to store the total number of animals.
   animal_name[50]: A temporary variable to store the name of an animal during input.
   i: Loop variable used for iterations.

### **2. Input:**

   The program prompts the user to enter the names of 5 domestic animals and 5 wild animals.
   It uses a for loop to iterate through each input.

### **3. Merging the Lists:**

   After the inputs are provided, the program combines the lists of domestic and wild animals into the all_animals array.
   The first 5 slots in all_animals are filled with domestic animals.
   The next 5 slots are filled with wild animals.

### **4. Output:**

   The program displays the total number of animals (which is 10).
   It prints the combined list of all animals.
   How It Works
   The user is prompted to enter 5 domestic animal names and 5 wild animal names.
   These names are stored in two separate arrays: domestic_animals and wild_animals.
   The program then combines both lists into one array, all_animals, by first copying the domestic animals and then appending the wild animals.
   Finally, the program outputs the total count of animals and prints all the animal names in the combined list.
   Requirements
   C Compiler: A C language compiler (e.g., GCC) is needed to compile and run this program.

###    **How to Run**

   Copy the code into a .c file (e.g., animal_list.c).

**Compile the program using a C compiler:**
cc animal_list.c -o animal_list
**Run the program:**
./animal_list
Follow the prompts to input the names of the animals, and the program will output the total number of animals and display their names.

### **Notes**

The program assumes that the user enters animal names without spaces. If an animal name contains spaces, it must be enclosed in quotes (e.g., "White Tiger").
The array size for both domestic and wild animals is fixed at 5. To allow more animals, you would need to modify the array sizes accordingly.

