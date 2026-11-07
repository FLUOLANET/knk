#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator){
    int a = numerator;
    int b = denominator;
    int gcd = 1;

    // numerator와 denominator의 gcd
    while(a != 0 && b != 0) {
        if(a <= b) {
            b = b % a;
        }
        else {
            a = a % b;
        } 
    }
    gcd = (b == 0) ? a : b;

    // 각각을 gcd로 나누기
    numerator /= gcd;
    denominator /= gcd;

    // 저장
    *reduced_numerator = numerator;
    *reduced_denominator = denominator;
}

int main(void) {
    int num = 0, denom = 0;
    int red_num = 0, red_denom = 0;

    // 입력
    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &denom);

    // 0으로 나누려고 하면 프로그램 종료
    if(denom == 0) {
        return 0;
    }

    // 연산, 저장
    reduce(num, denom, &red_num, &red_denom);

    // 출력
    printf("In lowest terms: %d/%d\n", red_num, red_denom);

    return 0;
}