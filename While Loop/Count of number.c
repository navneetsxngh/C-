//Write a Program and take n from user , And Count the digits of n

#include <stdio.h>

int main(){
   int number, count = 0;
   
   printf("Enter Number : ");
   scanf("%d", &number);
   
   while (number != 0){
       number /= 10;
       count++;
   }
   printf("The total digits in a given number is %d", count);
    
    return 0;
}