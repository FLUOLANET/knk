#include <stdio.h>
// sizeof()는 size_t type 이라서 int로 cast
#define SIZE (int) (sizeof(a) / sizeof(a[0]))

int main(void) {
    int a[10] = {0};

    // 입력 
    printf("Enter 10 numbers: ");
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &a[i]);
    }

    // 뒤에서부터 출력
    printf("In reverse order: ");
    for (int i = SIZE - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}