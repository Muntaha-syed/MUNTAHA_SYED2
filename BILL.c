#include <stdio.h>

float calculate_electricity_bill(float units) {
    float bill;
    
    if (units <= 100) {
        bill = 0;
    } else if (units <= 200) {
        bill = (units - 100) * 5;
    } else if (units <= 300) {
        bill = (100 * 5) + (units - 200) * 8;
    } else {  // units > 300
        bill = (100 * 5) + (100 * 8) + (units - 300) * 10;
    }
    
    return bill;
}

int main() {
    float units_consumed, total_bill;

    printf("Enter the number of units consumed: ");
    scanf("%f", &units_consumed);

    if (units_consumed < 0) {
        printf("Units consumed cannot be negative.\n");
    } else {
        total_bill = calculate_electricity_bill(units_consumed);
        printf("The electricity bill for %.2f units is: %.2f rupees.\n", units_consumed, total_bill);
    }

    getch();
}
