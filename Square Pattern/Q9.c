#include <stdio.h>

int main(){
   
   int N;
   int temp = 1;
   printf("Enter Number: ");
   scanf("%d", &N);
   
   for (int i = 1; i <= N; i++){
       for(int j = 1; j <= N; j++){
      printf("%d ", temp);
      temp++;
       }
      printf("\n");
   }

    return 0;
}