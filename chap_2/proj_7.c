#include <stdio.h>

int main(void) {
    // 변수
    int amount = 0;
    int tw, ten, five, one;

    // 입력
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);
    
    // tw, ten, five, one 계산
    tw = amount / 20;
    ten = (amount % 20) / 10;
    five = (amount % 10) / 5;
    one = amount % 5;

    // 출력
    printf("$20 bills: %d\n", tw);
    printf("$10 bills: %d\n", ten);
    printf(" $5 bills: %d\n", five);
    printf(" $1 bills: %d\n", one);

    return 0;
}