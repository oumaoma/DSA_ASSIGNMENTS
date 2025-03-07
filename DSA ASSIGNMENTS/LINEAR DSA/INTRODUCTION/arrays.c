#include<stdio.h>
#include<string.h>
int main() {
    char domestic_animals[5][50];// array to store 10 domestic animals
    char wild_animals[5][50];// array to store 10 wild animals
    char all_animals[10][50];// array to store both domestic and wild animals
    int wild_cont =0, total_count = 0;
    char animal_name[50];
    int i;
    //input 5 domestic animals
    printf("Enter 5 domestic animal names:\n");
    for(int i =0; i< 5; i++){
        printf("Domestic animal number  %d :",i+1);
        scanf("%s",domestic_animals[i]);
    }
    // input 5 wild animals
    printf("\nEnter 5  wild animal names:\n ");
    for(int i =0; i< 5; i++){
        printf("Wild animal number  %d :",i+1);
        scanf("%s",wild_animals[i]);
    }
    //Merge domestic and wild animals
    total_count = 5 + 5;
    for( int i=0; i< 5;i++){
        strcpy(all_animals[5+i],wild_animals[i]);
    }
    // total number of animals
    printf("\n Total number of animals  is: %d\n",total_count);

    // Combine domestic and wild animals into all_animals
    for (i = 0; i < 5; i++) {
        strcpy(all_animals[i], domestic_animals[i]); // Copy domestic animals
    }
    for (i = 0; i < 5; i++) {
        strcpy(all_animals[i + 5], wild_animals[i]); // Copy wild animals/home/ouma
    }
    printf("\nAll animals are:\n");
    for (i = 0; i < total_count; i++) {
        printf("%s\n", all_animals[i]);
    }
    return 0;}
