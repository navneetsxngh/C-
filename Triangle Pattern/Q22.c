#include <stdio.h>

int main()
{
    int N;
    
    printf("Enter Number: ");
    scanf("%d", &N);
    
    int temp = N;       //Temp Integer for convenience
    
    //Loop Pattern for 2nd Quadrant Triangle.
    for(int i = 1; i <= N; i++){
        for(int j = N; j >= 1; j--){
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