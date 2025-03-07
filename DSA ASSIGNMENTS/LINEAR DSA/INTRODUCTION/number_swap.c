#include<stdio.h>
int main(){
    int num1,num2,temp;
    printf("\nEnter two interger numbers to be swapped\n");
    //promting user to enter two numbers
    printf("\n Enter first number :");
    scanf("%d", &num1);


    printf("\n Enter second  number :");
    scanf("%d", &num2);

    // Display the numbers before swapping
    printf("\nBefore swapping:\n");
    printf("First number is: %d\n", num1);
    printf("Second number is: %d\n", num2);

    //store the value of the first number in the temporry variable
    temp = num1;

    //assign the value of the second number to the fisrt number
    num1 =num2;
    
    //assign the value in the temporary variable tothe second number
    num2 = temp;

    //After swapping the two numbers
    printf("\nAfter swapping:\n");
    printf("\n First number is %d",num1);
    printf("\n Second is %d",num2);

    return 0;

}