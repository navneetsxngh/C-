// Program to print a reverse number triangular pattern using numbers.

#include <stdio.h>

int main(){
    int N;
    
    printf("Enter Number :");
    scanf("%d", &N);           // Input number of rows
    
    // Loop for rows
    for(int i = N; i >= 1; i--){
        
        // Loop for columns
        for(int j = N; j >= 1; j--){
            if (j <= i){
                printf("%d ", j);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}