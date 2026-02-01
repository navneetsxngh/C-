#include <stdio.h>

int main(){
    
    int n;
    
    printf("Enter Number: ");
    scanf("%d", &n);
    
    printf("The square pattern for given number is: \n");
    
    for (int i = 1; i <= n ; i++){ 
        int temp = 2*n;
        for(int j = 1; j <= n; j++){
         printf("%d ", temp);   
         temp -= 2;
        }
        printf("\n");
    }

    return 0;
}