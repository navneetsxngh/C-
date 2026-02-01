// Program to print a square pattern using '*'

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
            printf("* ");
        }

        // Move to the next line after each row is printed
        printf("\n");
    }

    return 0;
}
