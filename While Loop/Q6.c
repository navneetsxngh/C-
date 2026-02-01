//Write a program that computes the sum of integers from 1 to N, where N is provided by
//the user.

#include <stdio.h>

int main(){
    
   int i = 1, n, sum = 0;
   printf("Enter Integer N: ");
   scanf("%d", &n);
   
   if (i<=0){
       printf("Enter a positive integer:\n");
   }
   
   while (i<=n){
       sum = sum + i;         //Eg- 0 = 0 + 1
       i++;                   //    sum = 1 and i = 2
   }
   printf("%d\n", sum);

    return 0;
}