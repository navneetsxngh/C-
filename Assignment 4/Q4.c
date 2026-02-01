#include <stdio.h>

int main(){
    int number, left;
    
    printf("Enter number:");
    scanf("%d", &number);
    
    if(number % 5 ==0){
        printf("Your Number is divisible by 5\n");
    }
    else
    {
        printf("Your number is not divisible by 5\n");
    }
    left = number % 5;
    printf("The remainder is %d\n", left);
    
    return 0;
}