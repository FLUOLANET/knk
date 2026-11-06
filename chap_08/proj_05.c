#include <stdio.h>
#define SIZE (int)(sizeof(value) / sizeof(value[0]))
#define INIT_BAL 100.00

int main(void) {
    int low_rate = 0;
    int n_year = 0;
    double value[5] = {0};

    // 입력
    printf("Enter interest rate: ");
    scanf("%d", &low_rate);
    printf("Enter number of years: ");
    scanf("%d", &n_year);

    // 헤더 행 출력, value에 처음 잔고 넣기
    printf("\nYears");
    for (int i = 0; i < SIZE; i++) {
        printf("%6d%%", low_rate + i);
        value[i] = INIT_BAL;
    }
    printf("\n");

    // n_year 만큼 반복해서 금액 출력
    for(int i = 0; i < n_year; i++) {
        printf("%3d     ", i + 1);
        for(int j = 0; j < SIZE; j++) {

            // 계산해서 값 넣기
            double annual_r = 1;
            for(int k = 0; k < 12; k++) {
                annual_r *= 1 + (((low_rate + j) / 12.0) / 100.0);
            }
            value[j] *= annual_r;

            //출력
            printf("%6.2lf ", value[j]);
        }
        printf("\n");
    }

    return 0;
}