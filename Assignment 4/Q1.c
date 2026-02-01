#include <stdio.h>

int main(){
    int number;
    
    printf("Enter number:");
    scanf("%d", &number);
    
    if(number > 10){
        printf("Your Number is greater than 10");
    }
    else
    {
        printf("Your number is less than 10");
    }
    
    return 0;
}