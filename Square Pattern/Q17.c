#include <stdio.h>

int main(){
   
    int N;
    char ch = 'A';
    
    printf("Enter Number: ");
    scanf("%d", &N);
    
    int temp = ch;
    for(int i = 1; i <= N; i++){
        for (int j = 1; j <= N; j++){
            printf("%c ", temp);
            temp++;
        }
        printf("\n");
    }
    
    return 0;
}