// Program to print a Hollow Diamond Pattern

#include <stdio.h>

int main(){
    
    int N;
    
    printf("Enter Number: ");
    scanf("%d", &N);
    
    //Upper Half of the Diamond
    for(int i = 1; i <= N; i++){
        for(int j = N; j >= 1; j--){
            if(j <= i){
                if ( j == i || j == 1){                     //Condition to Print hollow stars
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
    
    //Lower Half of the Diamond
    for(int i = N - 1; i >= 1; i--){
        for(int j = N; j >= 1; j--){
            if(j <= i){
                if ( j == i || j == 1){                    //Condition to print Hollow Stars
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