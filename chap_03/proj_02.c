#include <stdio.h>

int main(void) {
    int num = 0;
    float price = 0;
    int m = 0, d = 0, y = 0;

    printf("Enter item number: ");
    scanf("%d", &num);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &m, &d, &y);

    printf("\nItem\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%d\t\t$%7.2f\t%02d/%02d/%d\n", num, price, m, d, y);

    return 0;
}