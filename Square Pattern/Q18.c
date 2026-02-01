#include <stdio.h>

int main() {
    int N;
    char ch = 'P';   
    
    printf("Enter Number: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {         
        for (int j = 1; j <= N; j++) {     
            printf("%c ", ch);            
            ch++;                        
            if (ch > 'Z') {
                ch = 'A';                 
            }
        }
        printf("\n");                     
    }

    return 0;
}
