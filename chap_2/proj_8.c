#include <stdio.h>

int main(void) {
    float loan = 0.0f;
    float int_rate = 0.0f;
    float mon_pay = 0.0f;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &int_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &mon_pay);

    float coeff = 1 + int_rate / 1200;
    float after_first = loan * coeff - mon_pay;
    float after_second = after_first * coeff - mon_pay;
    float after_third = after_second * coeff - mon_pay;

    printf("Balance remaining after first payment: %.2f\n", after_first);
    printf("Balance remaining after second payment: %.2f\n", after_second);
    printf("Balance remaining after third payment: %.2f\n", after_third);
    return 0;
}