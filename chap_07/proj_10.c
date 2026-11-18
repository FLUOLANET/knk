#include <stdio.h>

int main(void) {
    char ch = 'a';
    int num = 0;

    printf("Enter a sentence: ");
    while(ch != '\n') {
        ch = getchar();
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            num += 1;
        }
    }

    printf("Your sentence contains %d vowels.\n", num);
    return 0;
}