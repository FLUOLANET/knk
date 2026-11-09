#include <stdio.h>

int main(void) {
    int num = 0;
    int reversed = 0;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    reversed = (num % 10) * 100 + ((num / 10) % 10) * 10 + (num / 100);

    printf("The reversal is: %03d\n", reversed);
    return 0;
}