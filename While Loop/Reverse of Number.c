// Write a Program and take n from user , And print the digits in reverse order 

#include <stdio.h>

int main(){
   int number, digit;
   int i = 1;
   
   printf("Enter Number : ");
   scanf("%d", &number);
   
   while (number != 0){
       digit = number % 10;
       printf("%d\n", digit);
       number /= 10;
   }
   printf("End");
    
    return 0;
}