#include <stdio.h>

int main(void) {
    int num = 0;
    int r1, r2, r3, r4, r5;
    
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num);

    // r1이 맨 오른쪽 자리
    r1 = num % 8;
    num /= 8;
    r2 = num % 8;
    num /= 8;
    r3 = num % 8;
    num /= 8;
    r4 = num % 8;
    num /= 8;
    r5 = num % 8;

    printf("In octal, your number is: %d%d%d%d%d\n", r5, r4, r3, r2, r1);
    
    return 0;
}