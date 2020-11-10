#include <stdio.h>

int main() {
	int n, key;
	printf("Enter array length: ");
	scanf("%d", &n);
	int arr[n];
	printf("\nEnter array elements: ");
	for (int i = 0; i < n; i++)
		scanf("%d", arr[i]);
	printf("\nEnter the key you're searching for: ");
	scanf("%d", &key);
	int flag = 0;
	for (int i = 0; i < n; i++)
		if (arr[i] == key) {
			flag = 1;
			break;
		}

	if(flag)
		printf("Key found!");
	else
		printf("Key missing!");

	return 0;

}
