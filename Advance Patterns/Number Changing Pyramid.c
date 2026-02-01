// Program to print a Number Increasing Reverse Pyramid
// The numbers increase row by row, but the shape is reverse (starting wide, ending narrow)

#include <stdio.h>

int main(){
    int N;
    printf("Enter Number: ");
    scanf("%d", &N);

    int temp = 1;  // Used to print increasing numbers
    for(int i = N; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", temp);
            temp++;
        }
        printf("\n");
    }

    return 0;
}
