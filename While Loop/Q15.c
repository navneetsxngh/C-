//Write a program to calculate the power of a number (x^y) using a while loop.

#include <stdio.h>
#include <math.h>

int main()
{
   int i = 1;
   int j = 1;
   int N;
   int power;
   
   printf("Enter Number : ");
   scanf ("%d", &N);
   
   while (i<=10){
       power = pow(N, i);
       printf("The %d power of given number is %d\n",j, power);
       i++;
       j++;
   }
   
    return 0;
}