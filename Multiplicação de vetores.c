#include <stdio.h>
#include <locale.h>

int main(){

  int vet1 [10], vet2 [10], vetres[10], i;


  printf("--------VALORES DO VETOR 1--------\n");


  for(i=0;i<=9;i++){

        printf("\nDigite o valor do vetor1 [%d]: ", i);
        scanf("%d", &vet1[i]);

    }

    printf("==================================\n");
 
printf("\n--------VALORES DO VETOR 2--------\n");
    for(i=0;i<=9;i++){

        printf("\nDigite o valor do Vetor2 [%d]:  ", i);
        scanf("%d", &vet2[i]);

    }

    for(i=0;i<=9;i++){

        vetres[i] = vet1[i] * vet2[i];
    }

    printf("==================================");

        printf("\n---------VETOR RESULTANTE---------");
     printf("\n");
       for(i=0;i<=9;i++){
       printf("\nVetor resultante[%d] = %d\n", i, vetres[i]);
    }

    return 0;
}
