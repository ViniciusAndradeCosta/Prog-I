#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int vet[10];

  srand(time(NULL));

for (i = 0; i < 10; i++) {
  vet[i] = 10 + (rand() % 11);
  printf("[%d]: %d\n", i, vet[i]);
  }

return 0;
  }
