#include <stdio.h>
#include <stdlib.h>

int main() {

  int bananas = 22;
  int apples = 15;

  int fruits = bananas + apples;

  printf("In the classroom there are:\n");
  printf("\t%d apples\n", apples);
  printf("\t%d bananas\n", bananas);
  printf("giving a total of %d fruits. \n", fruits);

  return EXIT_SUCCESS;
}
