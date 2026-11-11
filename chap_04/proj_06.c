#include <stdio.h>

int main(void) {
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12;
    int sum1, sum2, total;

    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12);

    sum1 = n2 + n4 + n6 + n8 +n10 + n12;
    sum2 = n1 + n3 + n5 + n7 + n9 + n11;
    total = sum1 * 3 + sum2 - 1;
    total = 9 - total % 10;

    printf("Check digit: %d\n", total);
    return 0;
}