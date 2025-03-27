#include <stdio.h>
#include <string.h>
#define MAX_ANIMALS 100

int main() {
    int N, X, total_count;
    char domestic_animals[MAX_ANIMALS][50]; // Array to store domestic animals
    char wild_animals[MAX_ANIMALS][50]; // Array to store wild animals
    char all_animals[MAX_ANIMALS * 2][50]; // Array to store both domestic and wild animals
    char temp[50];

    // Input number of domestic animals
    printf("Enter number of domestic animals:\n");
    scanf("%d", &N);
    printf("Enter the names of %d domestic animals:\n", N);
    for (int i = 0; i < N; i++) {
        while (1) {
            int duplicate = 0;
            printf("Domestic animal %d: ", i + 1);
            scanf("%s", temp);

            // Check for duplicates
            for (int j = 0; j < i; j++) {
                if (strcmp(domestic_animals[j], temp) == 0) {
                    duplicate = 1;
                    break;
                }
            }

            if (duplicate) {
                printf("Error: %s is already entered. Please enter a different animal.\n", temp);
            } else {
                strcpy(domestic_animals[i], temp);
                break;
            }
        }
    }

    // Input number of wild animals
    printf("\nEnter number of wild animals:\n");
    scanf("%d", &X);

    printf("Enter the names of %d wild animals:\n", X);
    for (int i = 0; i < X; i++) {
        while (1) {
            int duplicate = 0;
            printf("Wild animal %d: ", i + 1);
            scanf("%s", temp);

            // Check for duplicates
            for (int j = 0; j < i; j++) {
                if (strcmp(wild_animals[j], temp) == 0) {
                    duplicate = 1;
                    break;
                }
            }

            if (duplicate) {
                printf("Error: %s is already entered. Please enter a different animal.\n", temp);
            } else {
                strcpy(wild_animals[i], temp);
                break;
            }
        }
    }

    // Merge domestic and wild animals
    total_count = N + X;

    // Copy domestic animals into all_animals array
    for (int i = 0; i < N; i++) {
        strcpy(all_animals[i], domestic_animals[i]);
    }

    // Copy wild animals into all_animals array
    for (int i = 0; i < X; i++) {
        strcpy(all_animals[N + i], wild_animals[i]);
    }

    // Display total number of animals
    printf("\nTotal number of animals is: %d\n", total_count);

    // Display all animals
    printf("\nAll animals are:\n");
    for (int i = 0; i < total_count; i++) {
        printf("%s\n", all_animals[i]);
    }

    return 0;
}
