#include <stdio.h>

int main(){
    int a,b;
    char ch;
    printf("Enter the difference operator 's':\n");
    scanf("%c", &ch);
    
    if(ch=='s'){
        printf("Enter two numbers a and b:\n");
        scanf("%d%d", &a,&b);
        printf("subtraction = %d\n", a-b);
    }
    else{
        printf("Invalid character, only 's' operator is valid");
    }
    
    return 0;
}