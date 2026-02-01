#include <stdio.h>

int main(){
    char ch;
    printf("Enter Input:\n");
    scanf("%c", &ch);
    
    if (ch == 'a'){
        printf("apple\n");
    }
    else{
        printf("Input is not matched");
    }
    
    return 0;
}