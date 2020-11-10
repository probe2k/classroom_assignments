#include <stdio.h>

int main() {
	
	int n, temp;

	printf("Enter the length of the array: ");
	scanf("%d", &n);

	int arr[n];

	printf("\nEnter the array elements: ");
	for (int i = 0; i < n; i++)
		scanf("%d", arr[i]);

	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}

	printf("\nSorted array is :");
	for (int i = 0; i < n; i++)
		printf("%d\t", arr[i]);

	return 0;

}
