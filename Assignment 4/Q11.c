#include <stdio.h>

int main(){
    int a,b;
    char ch;
    printf("Enter the addition operator 'a':\n");
    scanf("%c", &ch);
    
    if(ch=='a'){
        printf("Enter two numbers a and b:\n");
        scanf("%d%d", &a,&b);
        printf("sum = %d\n", a+b);
    }
    else{
        printf("Invalid character, only 'a' operator is valid");
    }
    
    return 0;
}