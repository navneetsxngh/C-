#include <stdio.h>

int main(){
    int a = 34, b = 157;
    float c = 8.9, d = 1.67, e = 6.21, f = 5.6, g = 7.8, h;
    h = (c*d)-(e-f)+g-a+b;
    
    printf("The value is %f\n", h);
   

    return 0;
}