#include <stdio.h>

int main() {
	
	int a, b, temp;

	printf("Enter two numbers : ");
	scanf("%d%d", &a, &b);

	printf("\nBefore swap, a = %d, b = %d", a, b);

	temp = a;
	a = b;
	b = temp;

	printf("\nAfter swap, a = %d, b = %d, "a, b);

	return 0;

}
