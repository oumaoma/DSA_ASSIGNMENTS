#include<stdio.h>
#include<string.h>
#include<stdlib.h>  // For qsort function

// Comparator function for sorting strings alphabetically
int compare(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    char domestic_animals[5][50];  // Array to store 5 domestic animals
    char wild_animals[5][50];      // Array to store 5 wild animals
    char *all_animals[10];         // Array of pointers to store both domestic and wild animals
    int total_count = 0;
    int i;

    // Input 5 domestic animals
    printf("Enter 5 domestic animal names:\n");
    for (i = 0; i < 5; i++) {
        printf("Domestic animal number %d: ", i + 1);
        scanf("%s", domestic_animals[i]);
    }

    // Input 5 wild animals
    printf("\nEnter 5 wild animal names:\n");
    for (i = 0; i < 5; i++) {
        printf("Wild animal number %d: ", i + 1);
        scanf("%s", wild_animals[i]);
    }

    // Merge domestic and wild animals
    total_count = 5 + 5;

    // Copy domestic animals into all_animals array (as pointers)
    for (i = 0; i < 5; i++) {
        all_animals[i] = domestic_animals[i];  // Store the pointer to the string
    }

    // Copy wild animals into all_animals array (as pointers)
    for (i = 0; i < 5; i++) {
        all_animals[i + 5] = wild_animals[i];  // Store the pointer to the string
    }

    // Sort the animals alphabetically using qsort
    qsort(all_animals, total_count, sizeof(all_animals[0]), compare);

    // Print total number of animals
    printf("\nTotal number of animals is: %d\n", total_count);

    // Print all animals in alphabetical order
    printf("\nAll animals in alphabetical order are:\n");
    for (i = 0; i < total_count; i++) {
        printf("%s\n", all_animals[i]);  // Print the string that the pointer points to
    }

    return 0;
}
