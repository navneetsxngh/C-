// Program to print a square hollow pattern using '*'

#include <stdio.h>

int main()
{
    int N;
    
    printf("Enter Number: ");
    scanf("%d", &N);  // Read the size of the square

    // Loop to handle the rows of the square
    for(int i = 1; i <= N; i++) {

        // Loop to handle the columns of the square
        for(int j = 1; j <= N; j++) {

            // Print '*' for the border: first row, last row, first column, last column
            if(i == 1 || i == N || j == 1 || j == N) {
                printf("* ");
            }
            // For all inner positions, print spaces
            else {
                printf("  ");
            }
        }

        // Move to the next line after each row is printed
        printf("\n");
    }

    return 0;
}
