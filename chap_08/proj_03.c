#include <stdio.h>
#include <stdbool.h>

int main(void) {

    while (true) {
        long num = 0;
        int occur[10] = {false}; 

        // 입력
        printf("Enter a number: ");
        scanf("%ld", &num);

        // 0보다 작거나 같으면 프로그램 종료
        if (num <= 0) {
            return 0;
        }

        // 표시
        while(num != 0){
            int idx = num % 10;
            if (occur[idx]) {
                break;
            }
            occur[idx] = true;
            num /= 10;
        }

        // n이 0보다 크면 Repeated
        if (num > 0){
            printf("Repeated digit\n");
        }
        else {
            printf("No repeated digit\n");
        }
    }
}