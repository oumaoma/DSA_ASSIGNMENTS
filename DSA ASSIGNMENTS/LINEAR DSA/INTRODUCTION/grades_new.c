#include<stdio.h>
int main(){
    //array to store marks for each subject in assignments,coursework, mid term and end of term
    int physics[4], chemistry[4],math[4];
    //getting the average for each subject
    int i;
    float physics_avg, chemistry_avg, math_avg;
    float total_avg;
    //students marks in physics
    printf("Enter student's  marks for Physics:\n");
    printf("Assignment: ");
    scanf("%d",&physics[0]);
    printf("Coursework: ");
    scanf("%d",&physics[1]);
    printf("midterm: ");
    scanf("%d",&physics[2]);
    printf("Endof term: ");
    scanf("%d",&physics[3]);
        physics_avg=(physics[0]+physics[1]+physics[2]+physics[3])/4;
    //students marks in Chemistry
    printf("Enter student's  marks for Chemistry:\n");
    printf("Assignment: ");
    scanf("%d",&chemistry[0]);
    printf("Coursework: ");
    scanf("%d",&chemistry[1]);
    printf("midterm: ");
    scanf("%d",&chemistry[2]);
    printf("Endof term: ");
    scanf("%d",&chemistry[3]);
    
        chemistry_avg=(chemistry[0]+chemistry[1]+chemistry[2]+chemistry[3])/4;
    //students marks in Math
    printf("Enter student's  marks for Math:\n");
    printf("Assignment: ");
    scanf("%d",&math[0]);
    printf("Coursework: ");
    scanf("%d",&math[1]);
    printf("midterm: ");
    scanf("%d",&math[2]);
    printf("Endof term: ");
    scanf("%d",&math[3]);
        math_avg=(math[0]+math[1]+math[2]+math[3])/4;
    // calculating the total average marks for all the subjects
    total_avg = (physics_avg + chemistry_avg + math_avg)/3;
    //calculate the average marks in each subject
    printf("\n The average marks for physics: %.2f\n", physics_avg);
    printf("\n The average marks for chemistry: %.2f\n", chemistry_avg);
    printf("\n The average marks for math: %.2f\n", math_avg);
    printf("\n Total average for all the  3 subjects is :%.2f\n",total_avg);
    return 0;
}
