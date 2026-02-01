#include <stdio.h>

int main(){
    int a = 2;
    float b = 3.4, c = 1.2, d = 3.7, e = 6.8,f;
    
    f = b+((c*(d-c))/a)+e;
    
    printf("The value is %f\n", f);
   

    return 0;
}