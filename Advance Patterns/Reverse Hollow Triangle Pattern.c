// Program to print a Hollow Triangular Pattern

#include <stdio.h>

int main(){
    
    int N;
    printf("Enter Number :");
    scanf("%d", &N);
    
    for(int i = N; i >= 1; i--){
        for(int j = N; j >= 1; j--){
            if (j <= i){
                if(j == i || j == 1 || i == N){
                printf("* ");
                }else{
                    printf("  ");
                }
            }else{
                printf(" ");  
            }
        }
        printf("\n");
    }
    return 0;
}