#include <stdio.h>

int main(void) {
    int num = 0;
    int octal = 0;
    int o1, o2, o3, o4, o5;
    
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num);

    o1 = num / 4096;
    o2 = (num % 4096) / 512;
    o3 = (num % 512)


    return 0;
}