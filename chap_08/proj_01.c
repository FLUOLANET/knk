#include <stdio.h>
#include <stdbool.h>

int main(void) {
    long num = 0;
    int digit_arr[10] = {0};
    bool repeated = false;

    // 숫자 입력
    printf("Enter a number: ");
    scanf("%ld", &num);

    // digit_arr의 index를 각 숫자로 보고,
    // 나온 횟수만큼 원소 값 증가
    while (num != 0) {
        int idx = num % 10;
        num /= 10;
        digit_arr[idx] += 1;
        
        if(digit_arr[idx] > 1) {
            repeated = true;
        }
    }

    // repeated가 false면 No repeated digit 후 종료
    if (repeated == false) {
        printf("No repeated digit\n");
        return 0;
    }

    // digit_arr 돌면서 원소가 1보다 크면 출력
    printf("Repeated digit(s): ");
    for (int i = 0; i < 10; i++) {
        if (digit_arr[i] > 1) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}