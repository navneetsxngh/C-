#include <stdio.h>

int main()
{
   int i = 1, N;
   int sum = 0;
   float average;
   
   printf("Enter the value of N = ");
   scanf("%d", &N);
   
   while (i<=N){
       sum += i;
       i++;
   }
   average = (float)sum / N;
   
   printf("The sum of first %d natural numbers is: %d\n", N, sum);
   printf("The average is %.2f\n", average);

    return 0;
}