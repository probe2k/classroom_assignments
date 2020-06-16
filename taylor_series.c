#include <math.h>
#include <stdio.h>

int main() {
  int x, fact = 1, n;
  float sum = 0;

  printf("Enter value of x :");
  scanf("%d", &x);

  printf("\nEnter number of terms : ");
  scanf("%d", &n);

  for (int i = 1; i < n; i++) {
    fact *= i;
    sum += (pow(x, i) / fact);
  }
  sum += 1; // series starts with 1

  printf("\nSum is %.2f", sum);
  return 1;
}