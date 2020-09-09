#include<stdio.h>

int isPrime(int);

void main() {
	int n;
	printf("Enter a number to check for prime :");
	scanf("%d", &n);
	if (isPrime(n))
		printf("\nEntered number is prime");
	else
		printf("\nEntered number is not prime");
}

int isPrime(int x) {
	for (int i = 2; i < x; i++)
		if (x % i == 0)
			return 0;
	return 1;
}
