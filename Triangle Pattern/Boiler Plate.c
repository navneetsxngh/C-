#include <stdio.h>
int main(){

    int N;
    printf("Enter number: ");
    scanf("%d", &N);

    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= i; j++){
            if (j <= i){
                printf("%d ", j);
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}