#include <stdio.h>

int main(void) {
    int d, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10;
    int first_sum, second_sum, total;

    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10);
    
    first_sum = d + i2 + i4 + i6 + i8 + i10;
    second_sum = i1 + i3 + i5 + i7 +i9;
    total = first_sum * 3 + second_sum - 1;
    total %= 10;
    total = 9 - total;

    printf("Check digit: %d\n", total);
    
    return 0;
}