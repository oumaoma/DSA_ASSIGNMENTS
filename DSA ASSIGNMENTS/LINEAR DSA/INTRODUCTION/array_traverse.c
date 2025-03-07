#include<stdio.h>
int main(){

    //array stores fruits andprints those fruits
        char fruits[6][20] = {
            "apple",
            "banana",
            "cherry",
            "date",
            "elderberry",
            "orange"
        }; 
        printf("\n Prints fruits stored in the array\n");
    
        // Traverse through the array and print the fruits
        for (int i = 0; i < 6; i++) {
            
            printf("%s\n", fruits[i]);
        }
    
        return 0;
    
}