#include <stdio.h>

int main()
{
    int N;
    
    printf("Enter Number: ");
    scanf("%d", &N);
    
    int temp = N;       //Temp Integer for convenience
    
    //Loop Pattern for 4th Quadrant Triangle.
    for(int i = N; i >= 1; i--){
        for(int j = 1; j <= N; j++){
            if (j <= i){              //For Spacing
                printf("%d ", temp);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
        temp--;
    }

    return 0;
}