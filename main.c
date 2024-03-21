
#include <stdio.h>
#include <stdlib.h>

int add(int a, int b) { return a + b; }

int main() {
  int num1 = 1;
  int num2 = 2;

  int result = add(num1, num2);

  printf("The result of adding %d and %d is %d\n", num1, num2, result);
  return EXIT_SUCCESS;
}
