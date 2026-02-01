//HCF of two numbers

#include <stdio.h>
 
int main() {
    
    int i = 1;
    int HCF;
    int min;
    int N, M;
    
    printf("Enter Number: ");
    scanf("%d", &N);
    printf("Enter Number: ");
    scanf("%d", &M);
    
    if (N < M){
        min = N;
    }
    else {
        min = M;
    }
    
    while(i <= min){
        if (N % i == 0 && M % i == 0){
            HCF = i;
        }
        i++;
    }
    printf("The HCF of Two Numbers is %d\n", HCF);
}
    