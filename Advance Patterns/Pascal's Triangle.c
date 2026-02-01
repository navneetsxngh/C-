// Program to print a Pascal's Triangle

#include <stdio.h>

int factorial(int n){
    int fact  = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
     return fact;
}
int binomialcoeff(int n, int r){
    return factorial(n) / factorial(r) * factorial(n - r);
}

int main(){
    int N;
    printf("Enter Number: ");
    scanf("%d", &N);
    
    int temp = 0;
    
    for(int i = 1; i <= N; i++){
        for(int j = N; j >= 1; j--){
            if(j <= i){
                if( j == i || j == 1){         
                    printf("1 ");
                }else{
                    printf("%d ", binomialcoeff(i ,j));
                }
            } 
            else{
                    printf(" ");
                }
        }
        printf("\n");
        temp++;
    }
    return 0;
}