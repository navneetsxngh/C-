// Program to print a Number Triangular Pattern
// The numbers increase with each row in a triangular format

#include <stdio.h>

int main()
{
    int N;
    printf("Enter Number: ");
    scanf("%d", &N);

    int temp = 1;  // Temporary variable to store the current number to print

    // Outer loop for the number of rows
    for(int i = 1; i <= N; i++) {

        // Inner loop for spaces and numbers
        for(int j = N; j >= 1; j--) {

            if(j <= i) {
                printf("%d ", temp);
            } else {
                printf(" ");
            }
        }
        printf("\n");
        temp++;               // Increment number for the next row
    }

    return 0;
}
