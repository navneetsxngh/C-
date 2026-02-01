//Write a program that sums all the multiples of 7 between 1 and 500.
// output = 17892

#include <stdio.h>

int main()
{
  int i = 1, sum = 0;
  while (i <= 500){
      if (i%7 == 0){
          sum+=i;
          printf("The multiple of 7 is %d and the sum is %d\n", i, sum);
      }
      i++;
  }
  
    return 0;
}