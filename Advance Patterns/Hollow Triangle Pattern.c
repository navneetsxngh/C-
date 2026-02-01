// Program to print a Hollow Triangular Pattern

#include <stdio.h>

int main(){
    
    int N;
    
    printf("Enter Number: ");
    scanf("%d", &N);
    
    for(int i = 1; i <= N; i++){
        for(int j = N; j >= 1; j--){
            if(j <= i){
                if ( j == i || i == N || j == 1){
                printf("* ");
                }
                else{
                    printf("  ");
                }
            }else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}