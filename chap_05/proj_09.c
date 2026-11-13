#include <stdio.h>

int main(void) {
    int m1, d1, y1;
    int m2, d2, y2;
    int earlier;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &m1, &d1, &y1);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &m2, &d2, &y2);

    if(y1 < y2) {
        earlier = 0;
    }
    else if(y1 > y2) {
        earlier = 1;
    }
    else {
        if(m1 < m2) {
            earlier = 0;
        }
        else if(m1 > m2) {
            earlier = 1;
        }
        else {
            if(d1 < d2) {
                earlier = 0;
            }
            else if(d1 > d2) {
                earlier = 1;
            }
            else {
                earlier = -1;
            }
        }
    }

    if(earlier == 0) {
        printf("%d/%d/%02d is earlier than %d/%d/%02d\n", m1, d1, y1, m2, d2, y2);
    }
    else if(earlier == 1) {
        printf("%d/%d/%02d is earlier than %d/%d/%02d\n", m2, d2, y2, m1, d1, y1);
    }
    else {
        printf("Same date!!\n");
    }

    return 0;
}