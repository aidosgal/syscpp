#include <stdlib.h>
#include <stdio.h>

unsigned int factorial(unsigned int x) {
  if (x == 1)
  {
    return x;
  } else if (x > 1)
  {
    return x * factorial(x-1);
  }

  return 0;
}

int main() {
  unsigned int x = 5;
  printf("%d", factorial(x));
}
