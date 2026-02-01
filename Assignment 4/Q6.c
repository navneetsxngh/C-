#include <stdio.h>

int main(){
    char ch;
    printf("Enter Input:\n");
    scanf("%c", &ch);
    
    if (ch == 'b'){
        printf("ball\n");
    }
    else{
        printf("Input is not matched");
    }
    
    return 0;
}