#include <stdio.h>

float po(float x, int n){
    float result = 1.0f;
    for(int i = 0; i < n; i++){
        result = result * x;
    }
    return result;
}

int main(void){
    float x = 0.0f;
    scanf("%f", &x);

    float y = 3 * po(x, 5) + 2 * po(x, 4) - 5 * po(x, 3) - po(x, 2) + 7 * x - 6;
    printf("%.2f\n", y);
    return 0;
}

// pow 함수이름?
// 함수 안쓰고??