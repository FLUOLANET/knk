#include <stdio.h>

int main(void) {
    int hour = 0, minute = 0;


    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);
    printf("Equivalent 12-hour time: ");

    if (hour == 0) {
        printf("%d:%02d AM\n", hour + 12, minute);
    }
    else if(hour < 12) {
        printf("%d:%02d AM\n", hour, minute);
    }
    else if(hour == 12) {
        printf("%d:%02d PM\n", hour, minute);
    }
    else {
        printf("%d:%02d PM\n", hour % 12, minute);
    }
    return 0;
}