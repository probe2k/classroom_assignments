#include <stdio.h>

int isPrime(int);

int main() {
  int number;

  printf("Enter a number: ");
  scanf("%d", &number);

  if (isPrime(number))
    printf("\nEntered number is prime!");
  else
    printf("\nEntered number is not prime!");
}

int isPrime(int x) {
  for (int i = 2; i < x; i++)
    if (x % i == 0)
      return 0;
  return 1;
}