#include <stdio.h>

float sq_root(int);

int main() {
  int n;

  printf("Enter number : ");
  scanf("%d", &n);

  printf("Square root of %d is %.4f", n, sq_root(n));
  return 1;
}

float sq_root(int x) {
  float sqr = x / 2;
  int temp = 0;

  while (sqr != temp) {
    temp = sqr;
    sqr = (x / temp + temp) / 2;
  }

  return sqr;
}