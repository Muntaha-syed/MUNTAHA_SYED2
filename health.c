#include <stdio.h>
#include <string.h>

int main() {
    int age;
    char serious_illness[2];

    
    printf("Enter your age: ");
    scanf("%d", &age);

  
    if (age > 18) {
        if (age > 45) {
           
            printf("Have you had any serious illness? (Y/N): ");
            scanf(" %c", &serious_illness[0]);

            if (serious_illness[0] == 'Y' || serious_illness[0] == 'y') {
                                    printf("You are not eligible for health insurance due to serious illness.\n");
            } else {
                printf("You are eligible for health insurance.\n");
            }
        } else {
            printf("You are eligible for health insurance.\n");
        }
    } else {
        printf("You are not eligible for health insurance as you are under 18.\n");
    }
    getch();
}
    
