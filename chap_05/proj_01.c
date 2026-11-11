#include <stdio.h>

int main(void) {
    int num = 0;
    int digit = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num > 0 && num < 10) {
        digit = 1;
    }
    else if(num > 9 && num < 100) {
        digit = 2;
    }
    else if(num > 99 && num < 1000) {
        digit = 3;
    }
    else if(num > 999 && num < 10000) {
        digit = 4;
    }
    
    printf("The number %d has %d digits\n", num, digit);

    return 0;
}