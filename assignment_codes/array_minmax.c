#include <stdio.h>

int main() {

	int min = 0, max = 0, n;

	printf("Enter the length of the array: ");
	scanf("%d", &n);

	int arr[n];

	printf("\nEnter the elements of the array: ");

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);		
	}

	min = max = arr[0];

	for (int i = 1; i < n; i++) {
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}

	printf("\nMin = %d, Max = %d", min, max);

	return 0;

}
