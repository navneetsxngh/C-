//Write a program to check whether a number is a prime number.

#include <stdio.h>

int main(){
    
   int i = 1, num, factor = 0;
   printf("Enter any Number : ");
   scanf("%d", &num);
   
   while (i <= num){
       if (num % i == 0){
           factor++;
       }
          i++;
   }
   if (factor == 2){
       printf("It is a Prime Number\n");
   }
   else {
       printf("It is not a Prime Number");
   }

    return 0;
}