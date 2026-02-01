//Write a program to find the product of all odd numbers from 1 to N..


#include <stdio.h>

int main() {
    
    int i = 1,N;
    unsigned long long product = 1;
    
    printf("Enter number: ");
    scanf("%d", &N);
    
    while(i<=N){
        printf("%d\n", i);
        product *= i;
        i = i + 2;
    }
   
    printf("The product of odd numbers are %llu", product);

    return 0;
}