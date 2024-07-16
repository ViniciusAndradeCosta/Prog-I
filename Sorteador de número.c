#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int dado(){

    int nsorteado;

    nsorteado = (rand() % 6) + 1;

    return nsorteado;
}

int main(){

    int n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 = 0;
    int a1, a2, a3, a4, a5, a6;
    int i;

    for(i=0;i<1000000;i++){

        switch(dado()){

            case 1:
            n1++;
            break;

            case 2:
            n2++;
            break;

            case 3:
            n3++;
            break;

            case 4:
            n4++;
            break;

            case 5:
            n5++;
            break;

            case 6:
            n6++;
            break;
        }
    }

    a1 = (n1 / 1000000.0) * 100.0;
    a2 = (n2 / 1000000.0) * 100.0;
    a3 = (n3 / 1000000.0) * 100.0;
    a4 = (n4 / 1000000.0) * 100.0;
    a5 = (n5 / 1000000.0) * 100.0;
    a6 = (n6 / 1000000.0) * 100.0;

printf("=============================================== \n");

    printf("O numero [1], apareceu [%d] vezes.\nO equivalente a [%d%%]\n", n1, a1);

printf("=============================================== \n");

  printf("O numero [2], apareceu [%d] vezes.\nO equivalente a [%d%%]\n", n2, a2);

printf("=============================================== \n");

  printf("O numero [3], apareceu [%d] vezes.\nO equivalente a [%d%%]\n", n3, a3);

printf("=============================================== \n"); 

  printf("O numero [4], apareceu [%d] vezes.\nO equivalente a [%d%%]\n", n4, a4);

printf("=============================================== \n");

  printf("O numero [5], apareceu [%d] vezes.\nO equivalente a [%d%%]\n", n5, a5);

printf("=============================================== \n");

  printf("O numero [6], apareceu [%d] vezes.\nO equivalente a [%d%%]\n", n6, a6);

printf("=============================================== \n");

  return 0;
}
