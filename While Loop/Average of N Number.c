
#include <stdio.h>

int main(){
    int num; 
    int sum = 0; 
    int digit; 
    int count=0;
    float average;
    
    printf("Enter Number : ");
    scanf("%d", &num);
    
    while (num != 0){
        digit = num % 10;
        sum += digit;
        num /= 10;
        count++;
    }
    average = (float)sum / count;
    
    printf("The Sum of the number is %d\n", sum);
    printf("The number of digits are %d\n", count);
    printf("The average (sum / no. of digit) is %f\n", average);
    
    return 0;
}