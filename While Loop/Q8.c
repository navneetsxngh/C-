//Write a program to compute the sum of all even numbers between 1 and 100.

#include <stdio.h>

int main(){
    int number, digit, sum = 0;
    
    printf("Start\n");
    printf("Enter Number : ");
    scanf("%d", &number);
    
    while (number != 0){
        digit = number % 10;
        sum = sum + digit;
        number = number / 10;
    }
    printf("The sum of the digits are : %d\n", sum);
    return 0;
}