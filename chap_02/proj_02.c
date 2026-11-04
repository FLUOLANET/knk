#include <stdio.h>

// 1. radius 10으로 고정됨 => 상수로
#define PI 3.141592f
#define COEFFICIENT (4.0f / 3.0f)
#define R 10.0f

int main(void){
    float r = 10.0f;
    float v = 0.0f;
    
    v = COEFFICIENT * PI * R * R * R;

    printf("%.7f\n", v);
    return 0;
} 