#include <stdio.h>

int main(void) {
    int nums[4][4] = {0};
    int row_sums[4] = {0};
    int col_sums[4] = {0};
    int diag_sums[2] = {0};

    printf("Enter the numbers from 1 to 16 in any order:\n");
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++)
            scanf("%d", &nums[i][j]);
    }
    printf("\n");
    
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%2d ", nums[i][j]);
            row_sums[i] += nums[i][j];
            col_sums[j] += nums[i][j];
            if(i == j) {
                diag_sums[0] += nums[i][j];
            }
            else if(i == 3 - j) {
                diag_sums[1] += nums[i][j];
            }
        }
        printf("\n");
    }
    printf("\n");

    // row sums
    printf("Row sums: ");
    for(int i = 0; i < 4; i++) {
        printf("%d ", row_sums[i]);
    }
    printf("\n");

    // col sums
    printf("Column sums: ");
    for(int i = 0; i < 4; i++) {
        printf("%d ", col_sums[i]);
    }
    printf("\n");

    printf("Diagonal sums: ");
    for(int i = 0; i < 2; i++) {
        printf("%d ", diag_sums[i]);
    }
    printf("\n");

    return 0;
}