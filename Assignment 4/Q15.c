#include <stdio.h>

int main(){
    int a,b;
    char ch;
    printf("Enter the character 's' for swapping:\n");
    scanf("%c", &ch);
    
    if(ch=='s'){
        printf("Enter two numbers a and b \n");
        scanf("%d%d", &a,&b);
        
        printf("Before swapping a = %d and b = %d\n",a,b);
        a = a+b;
        b = a-b;
        a = a-b;
        printf("After swapping a = %d and b = %d",a,b);
    }
    else{
        printf("Invalid character, only 's' operator is valid");
    }
    
    return 0;
}