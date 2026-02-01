// Program to print a Reverse Left Hand Pyramid using '*'

#include <stdio.h>

int main()
{
    int N;
    printf("Enter Number: ");
    scanf("%d", &N);
    
    // Loop through each row
    for(int i = N; i >= 1; i--){
        
        // Loop through each column in the row
        for(int j = N; j >= 1; j--){
            if(j <= i){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
