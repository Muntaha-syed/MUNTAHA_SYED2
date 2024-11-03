#include <stdio.h>


int main() {
    float account_balance, withdrawal_amount;
    char has_permit[4]; 
    
    printf("Enter your account balance: ");
    scanf("%f", &account_balance);

    
    printf("Enter the amount you wish to withdraw: ");
    scanf("%f", &withdrawal_amount);
    if (withdrawal_amount <= account_balance) {
        if (withdrawal_amount > 10000) {
            
            printf("Do you have a special withdrawal permit? (Yes/No): ");
            scanf("%s", has_permit);
            if (strcmp(has_permit, "Yes") == 0) {
                printf("Withdrawal successful. Amount: %.2f\n", withdrawal_amount);
            } else {
                printf("Withdrawal denied. A special withdrawal permit is required for amounts over 10,000.\n");
            }
        } else {
            printf("Withdrawal successful. Amount: %.2f\n", withdrawal_amount);
        }
    } else {
        printf("Withdrawal denied. Insufficient balance.\n");
    }

    getch();
}
