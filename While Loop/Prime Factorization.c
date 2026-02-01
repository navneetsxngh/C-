//Prime Factorization

#include <stdio.h>

int main() {

	int N;
	int i = 2;

	printf("Enter the number : ");
	scanf("%d", &N);
	
	printf("The Prime Factorization of given Number are: ");

	while ( N > 1 ) {
		if (N % i == 0) {
			printf("%d ", i);
			N = N / i;                 
		}
		else {
		    i++;
	}
	}
	return 0;
}