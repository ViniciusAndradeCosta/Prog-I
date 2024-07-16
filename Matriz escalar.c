#include <stdio.h>

int main(){

int matriz[3][6];
int i, j, escalar;

  printf("=== DIGITE OS VALORES DA MATRIZ ===\n");

for(i = 0; i < 3; i++){
  for(j = 0; j < 6; j++){
  printf("\n[%d] [%d] = ", i + 1, j + 1);
  scanf("%d", &matriz[i] [j]);
  }
}
printf("==================================\n");
printf("DIGITE UM ESCALAR: ");
  scanf("%d", &escalar);
printf("==================================\n");

for(i = 0; i < 3; i++){
  for(j = 0; j < 6; j++){
    matriz[i][j] *= escalar;
  }
}

printf("=== MATRIZ RESULTANTE === \n");
for(i = 0; i < 3; i++){
  for(j = 0; j < 6; j++){
    printf("%d\t", matriz[i][j]);
    }
  printf("\n");
  }

return 0;
}
