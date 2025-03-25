#include <stdio.h>

#define MAX_ANIMALS 100  // Define maximum number of animals

int main() {
    int N, X;
    char domesticAnimals[MAX_ANIMALS][30], wildAnimals[MAX_ANIMALS][30];  // Arrays to store animal names

    // Input number of domestic animals
    printf("Enter number of domestic animals: ");
    scanf("%d", &N);

    // Input names of domestic animals
    printf("Enter the names of %d domestic animals:\n", N);
    for (int i = 0; i < N; i++) {
        printf("Domestic animal %d: ", i + 1);
        scanf("%s", domesticAnimals[i]);
    }

    // Print the domestic animals
    printf("\nDomestic Animals: ");
    for (int i = 0; i < N; i++) {
        printf("%s ", domesticAnimals[i]);
    }

    // Input number of wild animals
    printf("\nEnter number of wild animals: ");
    scanf("%d", &X);

    // Input names of wild animals
    printf("Enter the names of %d wild animals:\n", X);
    for (int i = 0; i < X; i++) {
        printf("Wild animal %d: ", i + 1);
        scanf("%s", wildAnimals[i]);
    }

    // Print the wild animals
    printf("\nWild Animals: ");
    for (int i = 0; i < X; i++) {
        printf("%s ", wildAnimals[i]);
    }

    // Print all animals together (domestic + wild)
    printf("\nAll Animals: ");
    for (int i = 0; i < N; i++) {
        printf("%s ", domesticAnimals[i]);
    }
    for (int i = 0; i < X; i++) {
        printf("%s ", wildAnimals[i]);
    }

    printf("\n");

    return 0;
}
