#include <stdio.h>
int main()
{
    float num, maior, menor;
    int i;
    for (i = 1; i <= 15 ; i++)
    {
        printf("qual seu %d numero?\n", i);
        scanf("%f", &num);

        if (i == 1)
        {
            maior = num;
            menor = num;
        }

        if (num > maior){
            maior = num;
        }

        if (num < menor){
            menor = num;
        }
    }
    printf("\no maior numero e %.3f", maior);
    printf("\no menor numero e %.3f", menor);

    return 0;
}