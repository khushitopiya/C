#include <stdio.h>
int main()
{
    int r = 5;

    // Upper half of the diamond
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < r - i; j++) {
            printf("  ");
        }
        for (int k = 0; k <= i; k++) {
            if (k == 0 || k == i) {
                printf("*   ");
            } else {
                printf("    ");
            }
        }
        printf("\n");
    }

    // Lower half of the diamond
    int row = 6;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < i; j++) {
            printf("  ");
        }
        for (int k = i; k < row; k++) {
            if (k == i || k == row - 1) {
                printf("*   ");
            } else {
                printf("    ");
            }
        }
        printf("\n");
    }

    return 0;
}
