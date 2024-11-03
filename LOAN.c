#include <stdio.h>
#include <string.h>

int main() {
    float monthly_income;
    char has_existing_loan[4]; 
    int overdue_payments;

   
    printf("Enter your monthly income: ");
    scanf("%f", &monthly_income);

 
    if (monthly_income > 30000) {
        
        printf("Do you have an existing loan? (Yes/No): ");
        scanf("%s", has_existing_loan);

     
        if (strcmp(has_existing_loan, "Yes") == 0) {
          
            printf("Do you have any overdue payments? (1 for Yes, 0 for No): ");
            scanf("%d", &overdue_payments);

            if (overdue_payments == 0) {
                printf("You are eligible for the loan.\n");
            } else {
                printf("You are not eligible for the loan due to overdue payments.\n");
            }
        } else {
            printf("You are eligible for the loan.\n");
        }
    } else {
        printf("You are not eligible for the loan due to low income.\n");
    }

    getch();
}
