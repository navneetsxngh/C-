#include <stdio.h>

int main(){
    int a,b;
    char ch;
    printf("Enter the division operator 'd':\n");
    scanf("%c", &ch);
    
    if(ch=='d'){
        printf("Enter two numbers a and b:\n");
        scanf("%d%d", &a,&b);
        printf("division = %d\n", a/b);
    }
    else{
        printf("Invalid character, only 'd' operator is valid");
    }
    
    return 0;
}