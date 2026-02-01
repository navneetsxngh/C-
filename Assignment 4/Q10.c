#include <stdio.h>

int main(){
    char ch;
    printf("Enter Input:\n");
    scanf("%c", &ch);
    
    if(ch=='z'|| ch=='x'|| ch=='c'|| ch=='v'|| ch=='b'
    || ch=='n'|| ch=='m'){
        printf("It is a lower line letter\n");
    }
    else{
        printf("either upper line or mid line");
    }
    
    return 0;
}