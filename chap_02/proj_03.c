#include <stdio.h>

#define PI 3.141592f
#define COEFFICIENT (4.0f / 3.0f)

int main(void){
    float r = 0.0f;
    printf("Radius: ");
    scanf("%f", &r);

    float v = COEFFICIENT * PI * r * r * r;
    printf("Volume: %.7f\n", v);

    return 0;
}