// Program to print a symmetric diamond star pattern

#include <stdio.h>

int main(){
    int N;

    printf("Enter Number: ");
    scanf("%d", &N);         // Read the number of rows

    // Upper half of the pattern (including middle row)
    for(int i = 1; i <= N; i++) {
        for(int j = N; j >= 1; j--) {
            if(j <= i) {
                printf("* ");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    //Lower half of the pattern (without middle row)
    for(int i = N - 1; i >= 1; i--){
        for(int j = N; j >= 1; j--){
             if(j <= i) {
                printf("* ");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
