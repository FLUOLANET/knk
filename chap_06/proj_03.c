# include <stdio.h>

int main(void) {
    int a = 0, b = 0;
    int a_c = 0, b_c = 0;
    int gcd = 1;

    // 입력받기 (a / b)
    printf("Enter a fraction: ");
    scanf("%d/%d", &a, &b);
    
    if(b == 0) {
        printf("Error!!!");
        return 0;
    }

    // 복사
    a_c = a; 
    b_c = b;

    // gcd 
    while (a != 0 && b != 0) {
        if (a <= b) {
            b = b % a;
        }
        else {
            a = a % b;
        }
    }
    gcd = (a == 0) ? b : a;

    // 약분
    a_c = a_c / gcd;
    b_c = b_c / gcd;

    // 출력
    printf("In lowest terms: %d/%d\n", a_c, b_c);

    return 0;
}