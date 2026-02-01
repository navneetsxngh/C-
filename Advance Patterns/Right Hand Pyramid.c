// Program to print a Right Hand Pyramid using '*'

#include <stdio.h>

int main()
{
    int N;
    printf("Enter Number: ");
    scanf("%d", &N);
    
    // Loop through each row
    for(int i = 1; i <= N; i++){
        
        // Loop through each column in the row
        for(int j = 1; j <= N; j++){
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
