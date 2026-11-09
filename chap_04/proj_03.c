#include <stdio.h>

int main(void) {
    int  i = 0, j = 0, k = 0;

    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &i, &j, &k);

    printf("The reversal is: %d%d%d\n", k, j, i);
    return 0;
}