#include <stdio.h>

int main() {
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);

    int i = 2; // start checking from 2

    while (i <= num) {
        int j = 2;
        int count = 0;

        while (j < i) {
            if (i % j == 0) {
                count++; // not prime
                break;
            }
            j++;
        }

        if (count == 0) {
            printf("%d ", i); // prime number
        }
        i++;
    }

    return 0;
}
