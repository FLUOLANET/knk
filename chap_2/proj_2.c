#include <stdio.h>

#define PI 3.141592f
#define COEFFICIENT (4.0f / 3.0f)

int main(void){
    float r = 10.0f;
    float v = 0.0f;
    
    v = COEFFICIENT * PI * r * r * r;

    printf("%.7f\n", v);
    return 0;
} 