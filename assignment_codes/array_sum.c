#include <stdio.h>

int main() {

	int n, sum = 0;

	printf("Enter the length of the array: ");
	scanf("%d", &n);

	int arr[n];

	printf("\nEnter the elements: ");
	
	for (int i = 0; i < n; i++) {
		scanf("%d", arr[i]);
		sum += arr[i];
	}

	printf("Sum of the entered number is %d", sum);

	return 0;

}
