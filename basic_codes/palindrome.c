#include <stdio.h>

int main() {
	
	int n, dig = 0, copy, rev = 0;
	
	printf("Enter the number : ");
	scanf("%d", &n);
	copy = n;

	while(n != 0) {
		dig = n % 10;
		n /= 10;
		rev = rev * 10 + dig;
	}

	if (copy == rev)
		printf("Number is palindrome!");
	else
		printf("Number is not palindrome!");

	return 0;

}
