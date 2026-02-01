#include <stdio.h>

int main(){
   
    int N;
    char ch;
    
    printf("Enter Number: ");
    scanf("%d", &N);
    
    
    for(int i = 1; i <= N; i++){
        ch = 'A';
        for (int j = 1; j <= N; j++){
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }
    
    return 0;
}