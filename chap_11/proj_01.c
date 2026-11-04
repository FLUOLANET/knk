# include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens,  int *fives, int *ones);

int main(void) {
    int dollar = 0;
    int twenty, ten, five, one;

    // 입력받기
    printf("Enter a dollar amount: ");
    scanf("%d", &dollar);

    pay_amount(dollar, &twenty, &ten, &five, &one);

    // 출력
    printf("$20 bills: %d\n", twenty);
    printf("$10 bills: %d\n", ten);
    printf(" $5 bills: %d\n", five);
    printf(" $1 bills: %d\n", one);

    return 0;
}

void pay_amount(int dollars, int *twenties, int *tens,  int *fives, int *ones) {

    // 계산
    *twenties = dollars / 20;
    *tens = (dollars % 20) / 10;
    *fives = (dollars % 10) / 5;
    *ones = dollars % 5;
}