#include <stdio.h>

int main(void) {
    int gs1 = 0, gi = 0, pc = 0, in = 0, cd = 0;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1, &gi, &pc, &in, &cd);

    printf("GS1 prefix: %d\n", gs1);
    printf("Group identifier: %d\n", gi);
    printf("Publisher code: %d\n", pc);
    printf("Item number: %d\n", in);
    printf("Check digit: %d\n", cd);
    
    return 0;
}