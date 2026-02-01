#include <stdio.h>

int main(){
    
    int N;
    
    printf("Enter Number: ");
    scanf("%d", &N);
    
    int temp = N;
    
    printf("The square pattern for given number is: \n");
    
    for (int i = 1; i <= N; i++){ 
        for(int j = 1; j <= N; j++){
         printf("%d ", temp);
         temp--;
         if (temp < 1){
             temp = N;
         }
        }
        printf("\n");
    }

    return 0;
}