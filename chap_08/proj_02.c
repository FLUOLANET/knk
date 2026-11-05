#include <stdio.h>

int main(void) {
    long num = 0;
    int occur[10] = {0};

    printf("Enter a number: ");
    scanf("%ld", &num);

    // 표시
    while(num != 0) {
        int idx = num % 10;
        occur[idx] += 1;
        num /= 10;
    }

    printf("Digit:       0  1  2  3  4  5  6  7  8  9\n");
    printf("Occurrences:");
    for (int i = 0; i < 10; i++) {
        printf("%2d ", occur[i]);
    }
    printf("\n");

    return 0;
}