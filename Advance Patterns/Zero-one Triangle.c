// Program to print a Number Increasing Pyramid using binary pattern (0 and 1)

#include <stdio.h>

int main(){
    int N;
    printf("Enter Number: ");
    scanf("%d", &N);

    for(int i = 1; i <= N; i++) {
        int temp;
        if(i % 2 == 0) {
            temp = 0;
        } else {
            temp = 1;
        }
        for(int j = 1; j <= i; j++) {
            printf("%d ", temp);
            temp = 1 - temp;                // Flip between 1 and 0
        }
        printf("\n");
    }

    return 0;
}
