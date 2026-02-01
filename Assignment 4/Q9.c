#include <stdio.h>

int main(){
    char ch;
    printf("Enter Input:\n");
    scanf("%c", &ch);
    
    if(ch=='a'|| ch=='s'|| ch=='d'|| ch=='f'|| ch=='g'
    || ch=='h'|| ch=='j'|| ch=='k'|| ch=='l'){
        printf("It is a mid line letter\n");
    }
    else{
        printf("either upper line or lower line");
    }
    
    return 0;
}