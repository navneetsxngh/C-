// Program to print a Butterfly Star Pattern.

#include <stdio.h>

int main(){
    int N;

    printf("Enter Number: ");
    scanf("%d", &N);         // Read the number of rows

   // Upper half of the diamond (including the middle row)
    for(int i = 1; i <= N; i++) {
        // Left triangle (increasing stars)
        for(int j = 1; j <= N; j++){
           if(j <= i) {
                printf("* ");
            } else {
                printf(" ");
            }
        }
        // Right triangle (mirror of left)
        for (int j = N; j >= 1; j--){
            if(j <= i){
                printf("* ");
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }
    // Lower half of the diamond (excluding the middle row)
    for(int i = N - 1; i >= 1; i--){
        // Left triangle
        for(int j = 1; j <= N; j++){
            if (j <= i){
                printf("* ");
            } else{
                printf("  ");
            }
        }
        // Right triangle
        for(int j = N; j >= 1; j--){
             if(j <= i) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
