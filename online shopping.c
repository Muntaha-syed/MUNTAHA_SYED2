#include <stdio.h>
#include <conio.h>

int main() {
    float purchase_amount, final_amount;
    char is_member[4];
    // Input the purchase amount
    printf("Enter the purchase amount: ");
    scanf("%f", &purchase_amount);
    if (purchase_amount > 2000) {
        printf("Are you a member? (Yes/No): ");
        scanf("%s", is_member);
        if (strcmp(is_member, "Yes") == 0) {
            final_amount = purchase_amount * 0.80; 
            printf("You receive a 20%% discount.\n");
        } else {
            final_amount = purchase_amount * 0.90;
            printf("You receive a 10%% discount.\n");
        }
    } else {
        final_amount = purchase_amount; 
        printf("No discount applied.\n");
    }
    printf("The final amount to be paid is: %.2f\n", final_amount);

    getch();
}
