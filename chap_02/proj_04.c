#include <stdio.h>

int main(void) {
    float before_tax = 0.0f;
    printf("Enter an amount: ");
    scanf("%f", &before_tax);

    float with_tax = 1.05f * before_tax;
    printf("With tax added: $%.2f\n", with_tax);

    return 0;
}