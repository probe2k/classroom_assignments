#include <stdio.h>

int main() {

	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	if (n % 2 == 0)
		printf("Entered number is even!");
	else
		printf("Entered number is odd!");

	return 0;
}
