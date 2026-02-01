// Program to print a Palindrome Triangular Pattern
// A palindrome is a number that reads the same forwards and backwards

#include <stdio.h>

int main()
{
    int N;
    printf("Enter Number: ");
    scanf("%d", &N);  // Read the number of rows

    // Outer loop to handle the number of rows
    for(int i = 1; i <= N; i++) {

        // Left side of the triangle (decreasing numbers)
        for(int j = N; j >= 1; j--) {
            if(j <= i) {
                printf("%d ", j);
            }
            else {
                printf("  ");
            }
        }

        // Right side of the triangle (increasing numbers starting from 2)
        for(int j = 2; j <= N; j++) {
            if(j <= i) {
                printf("%d ", j);
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
