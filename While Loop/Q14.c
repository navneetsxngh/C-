//Write a program to print the first N Fibonacci numbers using a while loop.
// 0 1 1 2 3 5 8 13 ..........N

#include <stdio.h>

int main(){
    int n, first = 0, second = 1;
    int next, i =1;
    
    printf("Enter number of Term...");
    scanf("%d", &n);
    
    while (i <= n){
        printf("%d ", first);
        next = first + second;         //next = 0 + 1 = 1
        first = second;                //first = 1 
        second = next;                 //second = 1
        i++;                           // i = 2
    }
    
    return 0;
}