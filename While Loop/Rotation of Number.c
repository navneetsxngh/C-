#include <stdio.h>
#include <math.h>

int main() {
    int number, originalNumber;
    int rotations;
    int i = 1;
    int count = 0;

    printf("Enter Number: ");
    scanf("%d", &number);
    originalNumber = number;  

    printf("Enter Rotations: ");
    scanf("%d", &rotations);

    
    int temp = number;
    while (temp > 0) {
        temp /= 10;
        count++;
    }

    printf("The number of digits is %d\n", count);

    int rem = rotations % count;
    printf("The remainder is %d\n", rem);
    
    if (rotations < 0){
        rotations += count;
        rem = rotations;
    }

    
    while (i <= rem) {
        int lastDigit = originalNumber % 10;
        originalNumber = originalNumber / 10;
        originalNumber = lastDigit * pow(10, count - 1) + originalNumber;
        i++;
    }

    printf("Rotated number is: %d\n", originalNumber);

    return 0;
}
