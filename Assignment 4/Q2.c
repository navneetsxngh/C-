#include <stdio.h>

int main(){
    int number;
    
    printf("Enter number:");
    scanf("%d", &number);
    
    if(number > 67){
        printf("Your Number is greater than 67");
    }
    else
    {
        printf("Your number is less than 67");
    }
    
    return 0;
}