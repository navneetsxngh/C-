// Program to print a Number Increasing Reverse Pyramid
// Each row starts from 1 and goes up to the current row limit, decreasing with each row

#include <stdio.h>

int main() {
    int N;
    printf("Enter Number: ");
    scanf("%d", &N);      //// Read the number of rows

    for(int i = N; i >= 1; i--) {
        for (int j = 1; j <= N; j++) {
            if (j <= i) {
                printf("%d ", j);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
