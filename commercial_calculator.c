#include <math.h>
#include <stdio.h>

void main() {
  float op1, op2;
  int choice;

  printf("COMMERCIAL CALCULATOR");
  printf("\n1. SUM\n2. DIFFERENCE\n3. PRODUCT\n4. QUOTIENT\n5. SQUARE ROOT\n6. "
         "POWER");
  scanf("%d", &choice);

  switch (choice) {
  case 1:
    printf("\nEnter the operands :");
    scanf("%f%f", &op1, &op2);
    printf("Sum is : %f", (op1 + op2));
    break;
  case 2:
    printf("\nEnter operands :");
    scanf("%f%f", &op1, &op2);
    printf("Difference is : %f", (op1 - op2));
    break;
  case 3:
    printf("\nEnter operands :");
    scanf("%f%f", &op1, &op2);
    printf("Product is : %f", (op1 * op2));
    break;
  case 4:
    printf("\nEnter operands :");
    scanf("%f%f", &op1, &op2);
    printf("Quotient is : %f", (op1 / op2));
    break;
  case 5:
    printf("\nEnter operand :");
    scanf("%f", &op1);
    printf("Square Root is : %f", (sqrt((int)op1)));
    break;
  case 6:
    printf("\nEnter operands :");
    scanf("%f%f", &op1, &op2);
    printf("%f raised to the pwoer %f is : %f", op1, op2, pow(op1, op2));
    break;
  default:
    printf("Wrong choice!");
  }
}