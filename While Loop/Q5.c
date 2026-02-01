//Write a program to print the numbers 1 to 100, but only print those that are divisible by 5.

#include <stdio.h>

int main(){
    
   int i = 1;
   while (i<=100){
       if (i % 5 == 0){
           printf("%d\n", i);
       }
       i++;
   }

    return 0;
}