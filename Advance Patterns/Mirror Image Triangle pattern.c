// Program to print a Mirror Image Triangle Pattern.

#include <stdio.h>

int main(){
    
    int N;
    
    printf("Enter Number: ");
    scanf("%d", &N);


    //Loop for Lower Number Triangle
    for (int i  = 1; i <= N; i++){
        for (int j = 1; j <= N; j++){
            if (i <= j){
                printf("%d ", j);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    //Loop for Upper Number Triangle
    for(int i = N - 1; i >= 1; i--){
        for (int j = 1; j <= N; j++){
            if (i <= j){
                printf("%d ", j);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}