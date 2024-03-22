#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  unsigned students = 25U;
  unsigned long long worldPopulation = 7801235945ULL;

  printf("%12u | students in the class\n", students);
  printf("%12llu | world population nomw \n", worldPopulation);

  uint8_t count = UINT8_MAX;
  printf("%12u | count of something\n", count);

  count = count + 1;
  printf("%12u | count of something +1 (OVERFLOW)\n", count);

  printf("%12d | INT32_MIN\n", INT32_MIN);
  printf("%12d | INT32_MAX\n", INT32_MAX);
  printf("%12u | UINT32_MIN\n", UINT32_MAX);

  printf("\n\n=== Anusic ===\n\n");
  return EXIT_SUCCESS;
}
