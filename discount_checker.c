#include <stdio.h>
int main() {
  float x, y, z;
  printf("Enter your total amount:");
  scanf("%f", &x);
  printf("Enter your discount value in percentage:");
  scanf("%f",&y);
  if (x <= y) {
    printf("Your discount value is: %f\n", x * y / 100);
    printf("Amount to be paid: %f\n", x - (x * y / 100));
  } else if (x >= y && x <= y) {
    printf("Your discount value is: %f\n", x * y / 100);
    printf("Amount to be paid: %f\n", x - (x * y / 100));
  } else if (x <= y) {
    printf("Your discount value is: %f\n", x * y / 100);
    printf("Amount to be paid: %f\n", x - (x * y / 100));
  } else if (x >= y) {
    printf("Your discount value is: %f\n", x * y / 100);
    printf("Amount to be paid: %f\n", x - (x * y / 100));
  } else {
    printf("nothing");
  }
  return 0;
}