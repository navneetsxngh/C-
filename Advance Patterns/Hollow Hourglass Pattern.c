// Program to print a Hollow Hourglass Pattern

#include <stdio.h>

int main(){
    
    int N;
    
    printf("Enter Number: ");
    scanf("%d", &N);
    
    //Upper Half of the Triangle
    for(int i = N; i >= 1; i--){
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
    
    //Lower Half of the Triangle
    for(int i = 2; i <= N; i++){
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