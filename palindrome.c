#include <stdio.h>

int main() {
  int n, copy, dig, rev = 0;

  printf("Enter a number : ");
  scanf("%d", &n);

  copy = n;

  while (n != 0) {
    dig = n % 10;
    rev = rev * 10 + dig;
    n /= 10;
  }

  if (rev == copy)
    printf("\nEntered number is palindrome");
  else
    printf("\nEnteredNumber is not palindrome!");

  return 0;
}