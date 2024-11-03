#include <stdio.h>

int main() {
    float marks1, marks2, marks3, average;
    printf("Enter marks for three subjects:\n");
    printf("Subject 1: ");
    scanf("%f", &marks1);
    printf("Subject 2: ");
    scanf("%f", &marks2);
    printf("Subject 3: ");
    scanf("%f", &marks3);
    average = (marks1 + marks2 + marks3) / 3;
    if (average < 50) {
        printf("You have failed. Average: %.2f\n", average);
    } else {
        if (average > 75) {
            printf("You have passed with an 'A'. Average: %.2f\n", average);
        } else {
            printf("You have passed with a 'B'. Average: %.2f\n", average);
        }
    }

    getch();
}
