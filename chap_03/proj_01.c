#include <stdio.h>

int main(void) {
    int m = 0;
    int d = 0;
    int y = 0;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &m, &d, &y);

    printf("You entered the date %d%02d%02d\n", y,m,d);
    return 0;
}