#include <stdio.h>

int main(){
    
    int number;
    
    printf("Enter Number: ");
    scanf("%d", &number);
    
    printf("The square pattern for given number is: \n");
    
    for (int i = 1; i<= number; i++){
        for(int j = 1; j<= number; j++){
         printf("%d ", j);   
        }
        printf("\n");
    }

    return 0;
}