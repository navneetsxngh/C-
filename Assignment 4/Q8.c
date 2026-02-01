#include <stdio.h>

int main(){
    char ch;
    printf("Enter Input:\n");
    scanf("%c", &ch);
    
    if(ch=='q'|| ch=='w'|| ch=='e'|| ch=='r'|| ch=='t'
    || ch=='y'|| ch=='u'|| ch=='i'|| ch=='o'|| ch=='p'){
        printf("It is a upper line letter\n");
    }
    else{
        printf("either lower line or mid line");
    }
    
    return 0;
}