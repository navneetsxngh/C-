#include <stdio.h>

int main(){
    int a,b;
    char ch;
    printf("Enter the multiplication operator 'm':\n");
    scanf("%c", &ch);
    
    if(ch=='m'){
        printf("Enter two numbers a and b:\n");
        scanf("%d%d", &a,&b);
        printf("multiplication = %d\n", a*b);
    }
    else{
        printf("Invalid character, only 'm' operator is valid");
    }
    
    return 0;
}