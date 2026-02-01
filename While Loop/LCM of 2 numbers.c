//LCM

#include <stdio.h>
 
int main() {

	int N;
	int M; 
	int LCM;
	int i = 2;

	printf("Enter Number N:");
	scanf("%d", &N);
	printf("Enter Number M:");
	scanf("%d", &M);
	
	if (N > M){
	    LCM = N;
	}
	else {
	 LCM = M;
	}
	
	while (N > 1 && M > 1){
	    if (LCM % N == 0 && LCM % M == 0){
	        printf("The LCM of Numbers is %d\n", LCM);
	        break;
	    }
	    LCM++;
	}
	printf("The Factors are: \n");
	while (LCM > 1){
	    if (LCM % i == 0){
	    printf("%d ", i);
	    LCM = LCM / i;
	    }
	    else {
	        i++;
	    }
	}

	return 0;
}