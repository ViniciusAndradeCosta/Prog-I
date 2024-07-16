#include <stdio.h>


int main()
{
    float s,d;
    int op;
    printf("==============================================\n");
    printf("INFORME O VALOR DA SUA CONTA BANCARIA: ");
    scanf("%f",&s);

    while(0==0)
    {
    printf("\n-------------MENU DE TAREFAS---------------\n");
    printf("1 - DEPOSITO \n");
    printf("2 - SAQUE \n");
    printf("3 - FIM \n");
  printf("==============================================\n");
    printf("DIGITE O QUE VOCE DESEJA FAZER: ");
    scanf("%d",&op);

    if(op == 1){
    do
    {
  printf("-----------------------------------------------\n");
  printf("\nVOCE ESCOLHEU A OPCAO DEPOSITO.\nInforme o valor que deseja depositar\n(FAVOR INSERIR APENAS VALORES POSITIVOS.): ");
  scanf("%f",&d);

    }while(d<=0);
      s+=d;
    }
    if(op == 2){
    do
    {
  printf("-----------------------------------------------\n");
  printf("\nVOCE ESCOLHEU A OPCAO SAQUE.\nInforme o valor que deseja retirar\n(FAVOR INSERIR APENAS VALORES POSITIVOS.): ");
  scanf("%f",&d);

    }while(d<=0);
    s-=d;
    }

    if(op == 3)
    {
    break;
    }
    }

    if(s>0){
    printf("\nSALDO = %.2f\nCONTA OPERANTE\n",s);
    }

    else if(s<0){
    printf("\nSALDO = %.2f\nCONTA NEGATIVA\n",s);
    }

    else{
    printf("\nSALDO = %.2f\nCONTA ZERADA\n",s);
    }

    return 0;
}
