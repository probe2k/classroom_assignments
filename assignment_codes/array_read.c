#include <stdio.h>

int main() {

	int n;

	printf("Enter the length of array: ");
	scanf("%d", &n);

	int arr[n];

	printf("\nEnter elements :");

	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	printf("\nElements in reverse order :");

	for (int i = n; i > 0; i--)
		printf("%d\t", arr[--n]);

	return 0;

}
