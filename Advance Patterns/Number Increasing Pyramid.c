// Program to print a Number Increasing Pyramid
// Each row contains numbers from 1 to the row number

#include <stdio.h>

int main(){
    int N;

    printf("Enter Number: ");
    scanf("%d", &N);         // Read the number of rows

    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= N; j++) {

            if(j <= i) {
                printf("%d ", j);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
