// Palindrome Number

#include <stdio.h>

int main(){
   int number, original, rem;
   int reversed = 0;
   
   printf("Enter Number : ");
   scanf("%d", &number);
   
   original = number;
   
   while (number != 0){
       rem = number % 10;                
       reversed = reversed * 10 + rem;
       number /= 10;
   }
    if (original == reversed){
        printf("It is a Palindrome Number\n");
    }
    else {
        printf("It is not a Palindrome Number");
    }
    return 0;
}