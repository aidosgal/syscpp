#include <stdlib.h>
#include <stdio.h>

void dynamic_array() {
  int n = 5;
  char *pvowels = (char *) malloc(n * sizeof(char));
  int i;

  pvowels[0] = 'A';
  pvowels[1] = 'E';
  *(pvowels + 2) = 'I';
  pvowels[3] = 'O';
  *(pvowels + 4) = 'U';

  for (i = 0; i < n; i++) {
    printf("%c ", pvowels[i]);
  }

  printf("\n");

  free(pvowels);
}

void exercise() {
  int i, j;
  int nrows = 3;

  int **pnumbers;

  pnumbers = (int **) malloc(nrows * sizeof(int*));

  for (i = 0; i < nrows; i++) {
    pnumbers[i] = (int *) malloc((i + 1) * sizeof(int));
  }

  pnumbers[0][0] = 1;
  pnumbers[1][0] = 1;
  pnumbers[1][1] = 1;
  pnumbers[2][0] = 1;
  pnumbers[2][1] = 2;
  pnumbers[2][2] = 1;

  for (i = 0; i < 3; i++) {
    for (j = 0; j <= i; j++) {
      printf("%d", pnumbers[i][j]);
    }
    printf("\n");
  }

  for (i = 0; i < 3; i++) {
    free(pnumbers[i]);
  }

  free(pnumbers);
}

int main() {
  char vowels[] = {'A', 'E', 'I', 'O', 'U'};
  char* pvowels = vowels;

  int i;

  for (i = 0; i < 5; i++) {
    printf("&vowels[%d]: %p, pvowels + %d: %p, vowels + %d: %p\n",
           i, &vowels[i], i, pvowels + i, i, vowels + i);
  }
  /*
    OUTPUT:
    
    &vowels[0]: 0x7ffee146da17, pvowels + 0: 0x7ffee146da17, vowels + 0: 0x7ffee146da17

    &vowels[1]: 0x7ffee146da18, pvowels + 1: 0x7ffee146da18, vowels + 1: 0x7ffee146da18

    &vowels[2]: 0x7ffee146da19, pvowels + 2: 0x7ffee146da19, vowels + 2: 0x7ffee146da19

    &vowels[3]: 0x7ffee146da1a, pvowels + 3: 0x7ffee146da1a, vowels + 3: 0x7ffee146da1a

    &vowels[4]: 0x7ffee146da1b, pvowels + 4: 0x7ffee146da1b, vowels + 4: 0x7ffee146da1b
   */

  for (i = 0; i < 5; i++) {
    printf("vowels[%d]: %c, *(pvowels + %d): %c, *(vowels + %d): %c\n",
           i, vowels[i], i, *(pvowels + i), i, *(vowels + i));
  }
  /*
    OUTPUT:
    
    vowels[0]: A, *(pvowels + 0): A, *(vowels + 0): A

    vowels[1]: E, *(pvowels + 1): E, *(vowels + 1): E

    vowels[2]: I, *(pvowels + 2): I, *(vowels + 2): I

    vowels[3]: O, *(pvowels + 3): O, *(vowels + 3): O

    vowels[4]: U, *(pvowels + 4): U, *(vowels + 4): U
   */

  exercise();
}
