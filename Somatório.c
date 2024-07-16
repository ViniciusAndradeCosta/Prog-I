#include <stdio.h>
#include <math.h>

int main() {
int x, n, i;
float somatorio;

  printf("Digite um numero inteiro x: ");
  scanf("%d", &x);

  if (x<=0){
    printf("NUMERO INVALIDO.\n DIGITE UM NUMERO MAIOR QUE ZERO: ");
    scanf("%d", &x);
    }

  printf("Agora digite um numero inteiro n: ");
  scanf("%d", &n);

  if (n<=0){
    printf("NUMERO INVALIDO.\n DIGITE UM NUMERO MAIOR QUE ZERO: ");
    scanf("%d", &n);
    }
  for(i = 1; i <= n; i++){

somatorio += (pow(x,i)- (i*x) + n) / (i+1);



  }

 printf("RESULTADO = %.f", somatorio);



    return 0;
}
