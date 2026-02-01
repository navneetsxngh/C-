#include <stdio.h>

int main(){
   
   int N;
   
   printf("Enter Number: ");
   scanf("%d", &N);
   int temp = N*N;
   
   for (int i = 1; i <= N; i++){
       for(int j = 1; j <= N; j++){
      printf("%d ", temp);
      temp--;
       }
      printf("\n");
   }

    return 0;
}