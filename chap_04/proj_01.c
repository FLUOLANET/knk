#include <stdio.h>

int main(void) {
    int num = 0;
    int reversed = 0;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    reversed = (num % 10) * 10 + (num / 10);
    printf("The reversal is: %02d\n", reversed);

    return 0;
}