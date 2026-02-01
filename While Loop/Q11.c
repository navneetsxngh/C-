//Write a program to compute the factorial of a given number using a while loop.


#include <stdio.h>

int main() {
    int i = 1, N;
    int factorial = 1;

    printf("Enter any positive integer: ");
    scanf("%d", &N);

    while (i <= N) {
        factorial *= i;
        i++;
    }

    printf("The Factorial of %d is: %d\n", N, factorial);

    return 0;
}
