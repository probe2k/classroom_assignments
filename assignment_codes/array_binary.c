#include <stdio.h>

int main() {
	
	int n, key, first, last middle;
	
	printf("Enter the length: ");
	scanf("%d", &n);
	
	int arr[n];

	printf("\nEnter the array elements: ");

	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	printf("\nEnter the key to be found: ");
	scanf("%d", &key);

	first = 0;
	last = n - 1;

	middle = (first + last) / 2;

	while (first <= last) {
		if (arr[middle] < search)
			first = middle + 1;
		else if (arr[middle] == search) {
			printf("\nElement found at index %d", (middle + 1));
			break;
		} else
			last = middle - 1;
		middle = (first + last) / 2;
	}

	if (first > last)
		printf("\nKey not found!");

	return 0;

}
