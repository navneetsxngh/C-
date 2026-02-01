// Program to print a K-Pattern using '*'

#include <stdio.h>

int main() {
    int N;

    printf("Enter Number: ");
    scanf("%d", &N);

    // Upper half of the 'K' (top to middle)
    for (int i = N; i >= 1; i--) {
        for (int j = 1; j <= N; j++) {
            if (j <= i) {
                printf("* ");
            } else {
                printf("  "); // Two spaces for alignment
            }
        }
        printf("\n");
    }

    // Lower half of the 'K' (middle to bottom)
    for (int i = 2; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (j <= i) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
