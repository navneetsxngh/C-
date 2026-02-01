//Write a program to compute the sum of all even numbers between 1 and 100.

#include <stdio.h>

int main(){
    int i = 1, sum = 0;
    
    printf("Start\n");
    while (i<=100){
        i = i+1;
        sum = sum + i;
        i++;
    }
    printf("The sum of even numbers between 1 to 100 is %d", sum);
  

    return 0;
}