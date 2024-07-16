#include <stdio.h>
#include <math.h>

int main()
{
    float fat, fatorial,calc=1;
    int x,i,j=2,flag=0;

    printf("========================================\n");
printf("Digite o valor desejado de X \n(EM RADIANOS): ");
    scanf("%d",&x);

    for(i=0;i<=5;i++)
    {
        fatorial=1;
        for(fat=1;fat<=j;fat++)
        {
            fatorial*=fat;
        }

        if(flag == 1)
        {
            calc += (pow(x,j))/fatorial;
            flag=0;
        }
        else
        {
            calc -= (pow(x,j))/fatorial;
            flag=1;
        }

     j+=2;
    }
printf("========================================\n");
    printf("O cosseno de x = %.4f",calc);
printf("\n========================================\n");
    return 0;
}
